// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
//
// Vector-driven SHA-3/SHAKE/TurboSHAKE regression testbench.

`timescale 1ns/1ps

module tb;
    import sha3_pkg::*;

    localparam int DATA_WIDTH       = 32;
    localparam int DATA_BYTES       = DATA_WIDTH / 8;
    localparam int CLK_PERIOD       = 10;
    localparam int MAX_TESTS        = 1200;
    localparam int MAX_INPUT_BYTES  = 512;
    localparam int MAX_OUTPUT_BYTES = 512;
    localparam int TIMEOUT_CYCLES   = 5000;

    localparam logic [7:0] FLAG_INPUT_BUBBLES       = 8'h01;
    localparam logic [7:0] FLAG_OUTPUT_BACKPRESSURE = 8'h02;

    logic                   clk;
    logic                   rst_n;
    logic [15:0]            inblocks;
    logic [15:0]            inlen_partial;
    logic [15:0]            outblocks;
    logic [15:0]            outlen_partial;
    logic [2:0]             mode;
    logic [DATA_WIDTH-1:0]  s_axis_tdata;
    logic [DATA_BYTES-1:0]  s_axis_tkeep;
    logic                   s_axis_tvalid;
    logic                   s_axis_tready;
    logic [DATA_WIDTH-1:0]  m_axis_tdata;
    logic [DATA_BYTES-1:0]  m_axis_tkeep;
    logic                   m_axis_tvalid;
    logic                   m_axis_tready;

    logic [31:0] vector_count_mem [0:0];
    logic [63:0] meta_mem [0:MAX_TESTS-1];
    logic [7:0] input_mem [0:MAX_TESTS*MAX_INPUT_BYTES-1];
    logic [7:0] expected_mem [0:MAX_TESTS*MAX_OUTPUT_BYTES-1];

    int vector_count;
    int test_id;
    int pass_count;
    int selected_case;
    string vector_set;
    string vector_dir;

    sha3 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .inblocks(inblocks),
        .inlen_partial(inlen_partial),
        .outblocks(outblocks),
        .outlen_partial(outlen_partial),
        .mode(mode),
        .s_axis_tdata(s_axis_tdata),
        .s_axis_tkeep(s_axis_tkeep),
        .s_axis_tvalid(s_axis_tvalid),
        .s_axis_tready(s_axis_tready),
        .m_axis_tdata(m_axis_tdata),
        .m_axis_tkeep(m_axis_tkeep),
        .m_axis_tvalid(m_axis_tvalid),
        .m_axis_tready(m_axis_tready)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    initial begin
        if ($test$plusargs("dump")) begin
            $dumpfile("sim/out/tb.vcd");
            $dumpvars(0, dut);
        end
    end

    function automatic int unsigned mode_rate(input logic [2:0] mode_i);
        case (mode_i)
            M_SHA3_224:      return SHA3_224_RATE;
            M_SHA3_256:      return SHA3_256_RATE;
            M_SHA3_384:      return SHA3_384_RATE;
            M_SHA3_512:      return SHA3_512_RATE;
            M_SHAKE128:      return SHAKE128_RATE;
            M_SHAKE256:      return SHAKE256_RATE;
            M_TURBOSHAKE128: return SHAKE128_RATE;
            M_TURBOSHAKE256: return SHAKE256_RATE;
            default:         return SHA3_512_RATE;
        endcase
    endfunction

    function automatic logic [15:0] block_count(input int byte_len, input int rate);
        int count;
        if (byte_len == 0)
            return 16'd0;
        else begin
            count = (byte_len + rate - 1) / rate;
            return count[15:0];
        end
    endfunction

    function automatic logic [15:0] partial_len(input int byte_len, input int rate);
        int count;
        if (byte_len == 0)
            return 16'd0;
        else begin
            count = byte_len % rate;
            return count[15:0];
        end
    endfunction

    function automatic logic [DATA_BYTES-1:0] keep_for_count(input int byte_count);
        logic [DATA_BYTES-1:0] keep;
        keep = '0;
        for (int i = 0; i < DATA_BYTES; i++)
            keep[i] = (i < byte_count);
        return keep;
    endfunction

    task automatic fail(input int case_id);
        $display("ERROR: regression case %0d failed", case_id);
        $finish;
    endtask

    task automatic reset_dut();
        rst_n          = 1'b0;
        inblocks       = '0;
        inlen_partial  = '0;
        outblocks      = '0;
        outlen_partial = '0;
        mode           = M_SHA3_256;
        s_axis_tdata   = '0;
        s_axis_tkeep   = '0;
        s_axis_tvalid  = 1'b0;
        m_axis_tready  = 1'b0;
        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (2) @(posedge clk);
    endtask

    task automatic start_empty_message();
        @(negedge clk);
        s_axis_tdata  = '0;
        s_axis_tkeep  = '0;
        s_axis_tvalid = 1'b1;
        @(posedge clk);
        @(negedge clk);
        s_axis_tvalid = 1'b0;
        s_axis_tkeep  = '0;
        s_axis_tdata  = '0;
    endtask

    task automatic drive_input(
        input int case_id,
        input int input_len,
        input logic [7:0] flags
    );
        int byte_idx;
        int word_idx;
        int bytes_this_word;
        logic [DATA_WIDTH-1:0] word_data;
        logic [DATA_BYTES-1:0] word_keep;
        logic ready_before_edge;

        if (input_len == 0) begin
            start_empty_message();
        end else begin
            byte_idx = 0;
            word_idx = 0;
            while (byte_idx < input_len) begin
                // Keep valid asserted between accepted words by default. Only
                // flagged cases insert one complete idle transfer cycle.
                if ((flags & FLAG_INPUT_BUBBLES) != 0 && (word_idx % 3 == 1)) begin
                    @(negedge clk);
                    s_axis_tvalid = 1'b0;
                    s_axis_tkeep  = '0;
                    s_axis_tdata  = '0;
                    @(posedge clk);
                end

                bytes_this_word = input_len - byte_idx;
                if (bytes_this_word > DATA_BYTES)
                    bytes_this_word = DATA_BYTES;

                word_data = '0;
                word_keep = keep_for_count(bytes_this_word);
                for (int byte_in_word = 0; byte_in_word < DATA_BYTES; byte_in_word++) begin
                    if (byte_in_word < bytes_this_word) begin
                        word_data[8*byte_in_word +: 8] =
                            input_mem[case_id*MAX_INPUT_BYTES + byte_idx + byte_in_word];
                    end
                end

                // Present the word before the active edge. If ready is low,
                // hold valid, data, and keep stable until it is accepted.
                @(negedge clk);
                s_axis_tdata  = word_data;
                s_axis_tkeep  = word_keep;
                s_axis_tvalid = 1'b1;

                ready_before_edge = s_axis_tready;
                while (!ready_before_edge) begin
                    @(posedge clk);
                    @(negedge clk);
                    ready_before_edge = s_axis_tready;
                end
                @(posedge clk);

                byte_idx += bytes_this_word;
                word_idx++;
            end

            @(negedge clk);
            s_axis_tvalid = 1'b0;
            s_axis_tkeep  = '0;
            s_axis_tdata  = '0;
        end
    endtask

    task automatic collect_output(
        input int case_id,
        input int output_len,
        input logic [7:0] flags
    );
        int cycles;
        int output_idx;
        int expected_valid_bytes;
        logic [DATA_BYTES-1:0] expected_keep;
        logic [DATA_WIDTH-1:0] stalled_data;
        logic [DATA_BYTES-1:0] stalled_keep;
        logic [DATA_WIDTH-1:0] sample_data;
        logic [DATA_BYTES-1:0] sample_keep;
        logic sample_valid;
        logic sample_ready;
        logic stalled;
        logic [7:0] got_byte;
        logic [7:0] expected_byte;

        cycles = 0;
        output_idx = 0;
        stalled = 1'b0;
        m_axis_tready = 1'b0;

        while (output_idx < output_len) begin
            @(negedge clk);
            cycles++;
            if (cycles > TIMEOUT_CYCLES) begin
                $display("ERROR: timeout waiting for output in case %0d at output byte %0d of %0d",
                         case_id, output_idx, output_len);
                fail(case_id);
            end

            if ((flags & FLAG_OUTPUT_BACKPRESSURE) != 0)
                m_axis_tready = !((cycles % 7) == 2 || (cycles % 7) == 3);
            else
                m_axis_tready = 1'b1;

            sample_valid = m_axis_tvalid;
            sample_ready = m_axis_tready;
            sample_data = m_axis_tdata;
            sample_keep = m_axis_tkeep;

            if (stalled && !sample_ready) begin
                if (sample_data !== stalled_data || sample_keep !== stalled_keep) begin
                    $display("ERROR: output changed while m_axis_tready was low in case %0d", case_id);
                    fail(case_id);
                end
            end

            if (sample_valid && !sample_ready) begin
                stalled_data = sample_data;
                stalled_keep = sample_keep;
                stalled = 1'b1;
            end else begin
                stalled = 1'b0;
            end

            @(posedge clk);

            if (sample_valid && sample_ready) begin
                expected_valid_bytes = output_len - output_idx;
                if (expected_valid_bytes > DATA_BYTES)
                    expected_valid_bytes = DATA_BYTES;
                expected_keep = keep_for_count(expected_valid_bytes);

                if (sample_keep !== expected_keep) begin
                    $display("ERROR: case %0d output byte %0d expected keep=%b got=%b",
                             case_id, output_idx, expected_keep, sample_keep);
                    fail(case_id);
                end

                for (int byte_idx = 0; byte_idx < DATA_BYTES; byte_idx++) begin
                    if (byte_idx < expected_valid_bytes) begin
                        got_byte = sample_data[8*byte_idx +: 8];
                        expected_byte = expected_mem[case_id*MAX_OUTPUT_BYTES + output_idx + byte_idx];
                        if (got_byte !== expected_byte) begin
                            $display("ERROR: case %0d output byte %0d expected=%02x got=%02x data=%08x keep=%b output_idx=%0d byte_idx=%0d",
                                     case_id, output_idx + byte_idx, expected_byte, got_byte,
                                     sample_data, sample_keep, output_idx, byte_idx);
                            fail(case_id);
                        end
                    end
                end

                output_idx += expected_valid_bytes;
            end
        end

        m_axis_tready = 1'b0;
        repeat (3) @(posedge clk);
    endtask

    task automatic run_case(input int case_id);
        logic [63:0] meta;
        logic [7:0] flags;
        int input_len;
        int output_len;
        int rate;

        meta = meta_mem[case_id];
        flags = meta[63:56];
        mode = meta[50:48];
        input_len = {16'd0, meta[47:32]};
        output_len = {16'd0, meta[31:16]};
        rate = mode_rate(mode);

        $display("CASE[%0d] mode=%0d input_len=%0d output_len=%0d flags=%02x",
                 case_id, mode, input_len, output_len, flags);
        $fflush;

        reset_dut();

        mode = meta[50:48];
        inblocks = block_count(input_len, rate);
        inlen_partial = partial_len(input_len, rate);
        outblocks = block_count(output_len, rate);
        outlen_partial = partial_len(output_len, rate);

        drive_input(case_id, input_len, flags);
        collect_output(case_id, output_len, flags);
        pass_count++;
    endtask

    initial begin
        pass_count = 0;
        selected_case = -1;
        vector_set = "t1";
        vector_dir = "sim/vectors/t1";

        if ($value$plusargs("vector_set=%s", vector_set))
            vector_dir = {"sim/vectors/", vector_set};
        if ($value$plusargs("vector_dir=%s", vector_dir)) begin
        end

        $display("Loading regression vectors from %s", vector_dir);
        $fflush;
        $readmemh({vector_dir, "/regression_count.hex"}, vector_count_mem);

        vector_count = vector_count_mem[0];
        $display("Loaded %0d regression vectors", vector_count);
        $fflush;
        if (vector_count > MAX_TESTS) begin
            $display("ERROR: vector_count=%0d exceeds MAX_TESTS=%0d", vector_count, MAX_TESTS);
            $finish;
        end

        $readmemh({vector_dir, "/regression_meta.hex"}, meta_mem, 0, vector_count - 1);
        $readmemh({vector_dir, "/regression_input.hex"}, input_mem, 0, vector_count*MAX_INPUT_BYTES - 1);
        $readmemh({vector_dir, "/regression_expected.hex"}, expected_mem, 0, vector_count*MAX_OUTPUT_BYTES - 1);

        if ($value$plusargs("case=%d", selected_case)) begin
            if (selected_case < 0 || selected_case >= vector_count) begin
                $display("ERROR: selected case %0d is outside 0..%0d", selected_case, vector_count - 1);
                $finish;
            end
            run_case(selected_case);
        end else begin
            for (test_id = 0; test_id < vector_count; test_id++)
                run_case(test_id);
        end

        $display("SHA3 SystemVerilog regression passed: %0d cases", pass_count);
        $finish;
    end
endmodule
