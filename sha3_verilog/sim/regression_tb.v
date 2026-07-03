`timescale 1ns/1ps
`include "sha3_defines.vh"

module regression_tb;
    localparam DATA_WIDTH       = 32;
    localparam DATA_BYTES       = DATA_WIDTH / 8;
    localparam CLK_PERIOD       = 10;
    localparam MAX_TESTS        = 64;
    localparam MAX_INPUT_BYTES  = 192;
    localparam MAX_OUTPUT_BYTES = 224;
    localparam TIMEOUT_CYCLES   = 5000;

    localparam FLAG_INPUT_BUBBLES      = 8'h01;
    localparam FLAG_OUTPUT_BACKPRESSURE = 8'h02;

    reg                    clk;
    reg                    rst_n;
    reg  [15:0]            inblocks;
    reg  [15:0]            inlen_partial;
    reg  [15:0]            outblocks;
    reg  [15:0]            outlen_partial;
    reg  [2:0]             mode;
    reg  [DATA_WIDTH-1:0]  s_axis_tdata;
    reg  [DATA_BYTES-1:0]  s_axis_tkeep;
    reg                    s_axis_tvalid;
    wire                   s_axis_tready;
    wire [DATA_WIDTH-1:0]  m_axis_tdata;
    wire [DATA_BYTES-1:0]  m_axis_tkeep;
    wire                   m_axis_tvalid;
    reg                    m_axis_tready;

    reg [31:0] vector_count_mem [0:0];
    reg [63:0] meta_mem [0:MAX_TESTS-1];
    reg [7:0] input_mem [0:MAX_TESTS*MAX_INPUT_BYTES-1];
    reg [7:0] expected_mem [0:MAX_TESTS*MAX_OUTPUT_BYTES-1];

    integer vector_count;
    integer test_id;
    integer pass_count;
    integer selected_case;

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
            $dumpfile("sim/out/regression_tb.vcd");
            $dumpvars(0, dut);
        end
    end

    function [7:0] mode_rate;
        input [2:0] mode_i;
        begin
            case (mode_i)
                `M_SHA3_224:      mode_rate = `SHA3_224_RATE;
                `M_SHA3_256:      mode_rate = `SHA3_256_RATE;
                `M_SHA3_384:      mode_rate = `SHA3_384_RATE;
                `M_SHA3_512:      mode_rate = `SHA3_512_RATE;
                `M_SHAKE128:      mode_rate = `SHAKE128_RATE;
                `M_SHAKE256:      mode_rate = `SHAKE256_RATE;
                `M_TURBOSHAKE128: mode_rate = `SHAKE128_RATE;
                `M_TURBOSHAKE256: mode_rate = `SHAKE256_RATE;
                default:          mode_rate = `SHA3_512_RATE;
            endcase
        end
    endfunction

    function [15:0] block_count;
        input integer byte_len;
        input integer rate;
        begin
            if (byte_len == 0)
                block_count = 16'd0;
            else
                block_count = (byte_len + rate - 1) / rate;
        end
    endfunction

    function [15:0] partial_len;
        input integer byte_len;
        input integer rate;
        begin
            if (byte_len == 0)
                partial_len = 16'd0;
            else
                partial_len = byte_len % rate;
        end
    endfunction

    function [DATA_BYTES-1:0] keep_for_count;
        input integer byte_count;
        integer i;
        begin
            keep_for_count = {DATA_BYTES{1'b0}};
            for (i = 0; i < DATA_BYTES; i = i + 1) begin
                if (i < byte_count)
                    keep_for_count[i] = 1'b1;
            end
        end
    endfunction

    task fail;
        input integer case_id;
        begin
            $display("ERROR: regression case %0d failed", case_id);
            $finish;
        end
    endtask

    task reset_dut;
        begin
            rst_n          = 1'b0;
            inblocks       = 16'd0;
            inlen_partial  = 16'd0;
            outblocks      = 16'd0;
            outlen_partial = 16'd0;
            mode           = `M_SHA3_256;
            s_axis_tdata   = {DATA_WIDTH{1'b0}};
            s_axis_tkeep   = {DATA_BYTES{1'b0}};
            s_axis_tvalid  = 1'b0;
            m_axis_tready  = 1'b0;
            repeat (5) @(posedge clk);
            rst_n = 1'b1;
            repeat (2) @(posedge clk);
        end
    endtask

    task idle_input_cycle;
        begin
            @(posedge clk);
            s_axis_tvalid <= 1'b0;
            s_axis_tkeep  <= {DATA_BYTES{1'b0}};
            s_axis_tdata  <= {DATA_WIDTH{1'b0}};
        end
    endtask

    task send_word;
        input [DATA_WIDTH-1:0] word_data;
        input [DATA_BYTES-1:0] word_keep;
        begin
            @(posedge clk);
            s_axis_tdata  <= word_data;
            s_axis_tkeep  <= word_keep;
            s_axis_tvalid <= 1'b1;
            @(posedge clk);
            while (!s_axis_tready)
                @(posedge clk);
            s_axis_tvalid <= 1'b0;
            s_axis_tkeep  <= {DATA_BYTES{1'b0}};
            s_axis_tdata  <= {DATA_WIDTH{1'b0}};
        end
    endtask

    task start_empty_message;
        begin
            @(posedge clk);
            s_axis_tdata  <= {DATA_WIDTH{1'b0}};
            s_axis_tkeep  <= {DATA_BYTES{1'b0}};
            s_axis_tvalid <= 1'b1;
            @(posedge clk);
            s_axis_tvalid <= 1'b0;
            s_axis_tkeep  <= {DATA_BYTES{1'b0}};
            s_axis_tdata  <= {DATA_WIDTH{1'b0}};
        end
    endtask

    task drive_input;
        input integer case_id;
        input integer input_len;
        input [7:0] flags;
        integer byte_idx;
        integer word_idx;
        integer byte_in_word;
        integer bytes_this_word;
        reg [DATA_WIDTH-1:0] word_data;
        reg [DATA_BYTES-1:0] word_keep;
        begin
            if (input_len == 0) begin
                start_empty_message();
            end else begin
                byte_idx = 0;
                word_idx = 0;
                while (byte_idx < input_len) begin
                    if ((flags & FLAG_INPUT_BUBBLES) && (word_idx % 3 == 1))
                        idle_input_cycle();

                    bytes_this_word = input_len - byte_idx;
                    if (bytes_this_word > DATA_BYTES)
                        bytes_this_word = DATA_BYTES;

                    word_data = {DATA_WIDTH{1'b0}};
                    word_keep = keep_for_count(bytes_this_word);
                    for (byte_in_word = 0; byte_in_word < DATA_BYTES; byte_in_word = byte_in_word + 1) begin
                        if (byte_in_word < bytes_this_word)
                            word_data[8*byte_in_word +: 8] = input_mem[case_id*MAX_INPUT_BYTES + byte_idx + byte_in_word];
                    end

                    send_word(word_data, word_keep);
                    byte_idx = byte_idx + bytes_this_word;
                    word_idx = word_idx + 1;
                end
            end
        end
    endtask

    task collect_output;
        input integer case_id;
        input integer output_len;
        input [7:0] flags;
        integer cycles;
        integer output_idx;
        integer byte_idx;
        integer expected_valid_bytes;
        reg [DATA_BYTES-1:0] expected_keep;
        reg [DATA_WIDTH-1:0] stalled_data;
        reg [DATA_BYTES-1:0] stalled_keep;
        reg [DATA_WIDTH-1:0] sample_data;
        reg [DATA_BYTES-1:0] sample_keep;
        reg sample_valid;
        reg sample_ready;
        reg stalled;
        reg [7:0] got_byte;
        reg [7:0] expected_byte;
        begin
            cycles = 0;
            output_idx = 0;
            stalled = 1'b0;
            m_axis_tready = 1'b0;

            while (output_idx < output_len) begin
                @(negedge clk);
                cycles = cycles + 1;
                if (cycles > TIMEOUT_CYCLES) begin
                    $display("ERROR: timeout waiting for output in case %0d", case_id);
                    fail(case_id);
                end

                if (flags & FLAG_OUTPUT_BACKPRESSURE)
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

                    for (byte_idx = 0; byte_idx < DATA_BYTES; byte_idx = byte_idx + 1) begin
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

                    output_idx = output_idx + expected_valid_bytes;
                end
            end

            m_axis_tready = 1'b0;
            repeat (3) @(posedge clk);
        end
    endtask

    task run_case;
        input integer case_id;
        reg [63:0] meta;
        reg [7:0] flags;
        integer input_len;
        integer output_len;
        integer rate;
        begin
            meta = meta_mem[case_id];
            flags = meta[63:56];
            mode = meta[50:48];
            input_len = meta[47:32];
            output_len = meta[31:16];
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
            pass_count = pass_count + 1;
        end
    endtask

    initial begin
        pass_count = 0;
        selected_case = -1;

        $display("Loading regression vectors");
        $fflush;
        $readmemh("sim/vectors/regression_count.hex", vector_count_mem);

        vector_count = vector_count_mem[0];
        $display("Loaded %0d regression vectors", vector_count);
        $fflush;
        if (vector_count > MAX_TESTS) begin
            $display("ERROR: vector_count=%0d exceeds MAX_TESTS=%0d", vector_count, MAX_TESTS);
            $finish;
        end

        $readmemh("sim/vectors/regression_meta.hex", meta_mem, 0, vector_count - 1);
        $readmemh("sim/vectors/regression_input.hex", input_mem, 0, vector_count*MAX_INPUT_BYTES - 1);
        $readmemh("sim/vectors/regression_expected.hex", expected_mem, 0, vector_count*MAX_OUTPUT_BYTES - 1);

        if ($value$plusargs("case=%d", selected_case)) begin
            if (selected_case < 0 || selected_case >= vector_count) begin
                $display("ERROR: selected case %0d is outside 0..%0d", selected_case, vector_count - 1);
                $finish;
            end
            run_case(selected_case);
        end else begin
            for (test_id = 0; test_id < vector_count; test_id = test_id + 1)
                run_case(test_id);
        end

        $display("SHA3 Verilog regression passed: %0d cases", pass_count);
        $finish;
    end
endmodule
