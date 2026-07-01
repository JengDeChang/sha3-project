// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
//
// Self-checking SHA-3/SHAKE/TURBOShake testbench.

`timescale 1ns/1ps

module tb;
    import sha3_pkg::*;

    localparam int DATA_WIDTH = 32;
    localparam int DATA_BYTES = DATA_WIDTH / 8;
    localparam int CLK_PERIOD = 10;
    localparam int MAX_CYCLES = 200000;

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

    int unsigned tests_run;
    int unsigned bytes_checked;
    bit          saw_mode [8];
    bit          saw_msg_len_zero;
    bit          saw_msg_len_partial_word;
    bit          saw_msg_len_full_word;
    bit          saw_msg_len_block_aligned;
    bit          saw_msg_len_rate_minus_one;
    bit          saw_msg_len_multi_block;
    bit          saw_out_len_partial_word;
    bit          saw_out_len_block_aligned;
    bit          saw_out_len_multi_block;
    bit          saw_input_stall;
    bit          saw_output_stall;

    initial begin
        $dumpfile("sha3.vcd");
        $dumpvars(0, tb);
    end    

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

`ifdef USE_SV_COVERAGE
    covergroup cg_sha3 @(posedge clk);
        option.per_instance = 1;

        cp_mode: coverpoint mode {
            bins sha3_224      = {M_SHA3_224};
            bins sha3_256      = {M_SHA3_256};
            bins sha3_384      = {M_SHA3_384};
            bins sha3_512      = {M_SHA3_512};
            bins shake128      = {M_SHAKE128};
            bins shake256      = {M_SHAKE256};
            bins turboshake128 = {M_TURBOSHAKE128};
            bins turboshake256 = {M_TURBOSHAKE256};
        }

        cp_in_keep: coverpoint s_axis_tkeep iff (s_axis_tvalid && s_axis_tready) {
            bins one_byte   = {4'b0001};
            bins two_bytes  = {4'b0011};
            bins three_byte = {4'b0111};
            bins full_word  = {4'b1111};
        }

        cp_out_keep: coverpoint m_axis_tkeep iff (m_axis_tvalid && m_axis_tready) {
            bins one_byte   = {4'b0001};
            bins two_bytes  = {4'b0011};
            bins three_byte = {4'b0111};
            bins full_word  = {4'b1111};
        }

        cp_input_backpressure: coverpoint s_axis_tvalid && !s_axis_tready {
            bins stalled = {1'b1};
        }

        cp_output_backpressure: coverpoint m_axis_tvalid && !m_axis_tready {
            bins stalled = {1'b1};
        }

        cp_state: coverpoint dut.state_r {
            bins idle      = {S_IDLE};
            bins absorb    = {S_ABSORB};
            bins perm_a    = {S_PERMUTE_A};
            bins padd      = {S_PADD};
            bins finalize  = {S_FINALIZE};
            bins squeeze   = {S_SQUEEZE};
            bins perm_s    = {S_PERMUTE_S};
        }
    endgroup

    cg_sha3 cov = new();
`endif

    function automatic int mode_rate(input int unsigned mode_i);
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

    function automatic int mode_rounds(input int unsigned mode_i);
        case (mode_i)
            M_TURBOSHAKE128,
            M_TURBOSHAKE256: return TURBO_ROUNDS;
            default:         return ROUNDS;
        endcase
    endfunction

    function automatic int mode_round_offset(input int unsigned mode_i);
        case (mode_i)
            M_TURBOSHAKE128,
            M_TURBOSHAKE256: return ROUNDS - TURBO_ROUNDS;
            default:         return 0;
        endcase
    endfunction

    function automatic byte unsigned mode_suffix(input int unsigned mode_i);
        case (mode_i)
            M_SHAKE128,
            M_SHAKE256,
            M_TURBOSHAKE128,
            M_TURBOSHAKE256: return SHAKE_SUFFIX;
            default:         return SHA3_SUFFIX;
        endcase
    endfunction

    function automatic string mode_name(input int unsigned mode_i);
        case (mode_i)
            M_SHA3_224:      return "SHA3-224";
            M_SHA3_256:      return "SHA3-256";
            M_SHA3_384:      return "SHA3-384";
            M_SHA3_512:      return "SHA3-512";
            M_SHAKE128:      return "SHAKE128";
            M_SHAKE256:      return "SHAKE256";
            M_TURBOSHAKE128: return "TURBOSHAKE128";
            M_TURBOSHAKE256: return "TURBOSHAKE256";
            default:         return "UNKNOWN";
        endcase
    endfunction

    function automatic int fixed_digest_bytes(input int unsigned mode_i);
        case (mode_i)
            M_SHA3_224: return 28;
            M_SHA3_256: return 32;
            M_SHA3_384: return 48;
            M_SHA3_512: return 64;
            default:    return 0;
        endcase
    endfunction

    function automatic logic [63:0] rol64(input logic [63:0] value, input int sh);
        if (sh == 0)
            return value;
        else
            return (value << sh) | (value >> (64 - sh));
    endfunction

    function automatic logic [63:0] load_lane(input byte unsigned state[200], input int x, input int y);
        logic [63:0] lane;
        lane = '0;
        for (int z = 0; z < 8; z++)
            lane[8*z +: 8] = state[8*x + 40*y + z];
        return lane;
    endfunction

    task automatic store_lane(
        ref byte unsigned state[200],
        input int x,
        input int y,
        input logic [63:0] lane
    );
        for (int z = 0; z < 8; z++)
            state[8*x + 40*y + z] = lane[8*z +: 8];
    endtask

    task automatic keccak_p1600(
        ref byte unsigned state[200],
        input int rounds_i,
        input int round_offset_i
    );
        logic [63:0] a[5][5];
        logic [63:0] b[5][5];
        logic [63:0] c[5];
        logic [63:0] d[5];
        for (int x = 0; x < 5; x++)
            for (int y = 0; y < 5; y++)
                a[x][y] = load_lane(state, x, y);

        for (int round = 0; round < rounds_i; round++) begin
            int rc_idx;
            rc_idx = round + round_offset_i;

            for (int x = 0; x < 5; x++)
                c[x] = a[x][0] ^ a[x][1] ^ a[x][2] ^ a[x][3] ^ a[x][4];

            for (int x = 0; x < 5; x++)
                d[x] = c[(x + 4) % 5] ^ rol64(c[(x + 1) % 5], 1);

            for (int x = 0; x < 5; x++)
                for (int y = 0; y < 5; y++)
                    a[x][y] ^= d[x];

            for (int x = 0; x < 5; x++)
                for (int y = 0; y < 5; y++)
                    b[y][(2*x + 3*y) % 5] = rol64(a[x][y], rho_offset(x, y));

            for (int x = 0; x < 5; x++)
                for (int y = 0; y < 5; y++)
                    a[x][y] = b[x][y] ^ ((~b[(x + 1) % 5][y]) & b[(x + 2) % 5][y]);

            a[0][0] ^= rc(rc_idx);
        end

        for (int x = 0; x < 5; x++)
            for (int y = 0; y < 5; y++)
                store_lane(state, x, y, a[x][y]);
    endtask

    function automatic int rho_offset(input int x, input int y);
        case (x)
            0: begin
                case (y)
                    0: return 0;
                    1: return 36;
                    2: return 3;
                    3: return 41;
                    default: return 18;
                endcase
            end
            1: begin
                case (y)
                    0: return 1;
                    1: return 44;
                    2: return 10;
                    3: return 45;
                    default: return 2;
                endcase
            end
            2: begin
                case (y)
                    0: return 62;
                    1: return 6;
                    2: return 43;
                    3: return 15;
                    default: return 61;
                endcase
            end
            3: begin
                case (y)
                    0: return 28;
                    1: return 55;
                    2: return 25;
                    3: return 21;
                    default: return 56;
                endcase
            end
            default: begin
                case (y)
                    0: return 27;
                    1: return 20;
                    2: return 39;
                    3: return 8;
                    default: return 14;
                endcase
            end
        endcase
    endfunction

    task automatic sponge_reference(
        input int unsigned mode_i,
        input byte unsigned msg[],
        input int unsigned out_len,
        output byte unsigned digest[]
    );
        byte unsigned state[200];
        int rate;
        int rounds_i;
        int round_offset_i;
        int msg_idx;
        int out_idx;

        rate           = mode_rate(mode_i);
        rounds_i       = mode_rounds(mode_i);
        round_offset_i = mode_round_offset(mode_i);
        msg_idx        = 0;
        out_idx        = 0;
        digest         = new[out_len];

        for (int i = 0; i < 200; i++)
            state[i] = 8'h00;

        while (msg_idx + rate <= msg.size()) begin
            for (int i = 0; i < rate; i++)
                state[i] ^= msg[msg_idx + i];
            keccak_p1600(state, rounds_i, round_offset_i);
            msg_idx += rate;
        end

        for (int i = 0; i < msg.size() - msg_idx; i++)
            state[i] ^= msg[msg_idx + i];

        state[msg.size() - msg_idx] ^= mode_suffix(mode_i);
        state[rate - 1]             ^= SHA3_PADD;
        keccak_p1600(state, rounds_i, round_offset_i);

        while (out_idx < out_len) begin
            int bytes_now;
            bytes_now = (out_len - out_idx < rate) ? (out_len - out_idx) : rate;
            for (int i = 0; i < bytes_now; i++)
                digest[out_idx + i] = state[i];
            out_idx += bytes_now;
            if (out_idx < out_len)
                keccak_p1600(state, rounds_i, round_offset_i);
        end
    endtask

    task automatic reset_dut();
        rst_n            = 1'b0;
        inblocks         = '0;
        inlen_partial    = '0;
        outblocks        = '0;
        outlen_partial   = '0;
        mode             = '0;
        s_axis_tdata     = '0;
        s_axis_tkeep     = '0;
        s_axis_tvalid    = 1'b0;
        m_axis_tready    = 1'b0;
        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (2) @(posedge clk);
    endtask

    task automatic wait_cycles(input int cycles);
        repeat (cycles) @(posedge clk);
    endtask

    function automatic logic [DATA_BYTES-1:0] keep_from_count(input int byte_count);
        logic [DATA_BYTES-1:0] keep;
        keep = '0;
        for (int i = 0; i < DATA_BYTES; i++)
            keep[i] = (i < byte_count);
        return keep;
    endfunction

    task automatic drive_input(
        input byte unsigned msg[],
        input int unsigned stall_percent
    );
        int idx;
        idx = 0;

        if (msg.size() == 0) begin
            @(posedge clk);
            s_axis_tvalid <= 1'b1;
            s_axis_tkeep  <= '0;
            s_axis_tdata  <= '0;
            @(posedge clk);
            s_axis_tvalid <= 1'b0;
            s_axis_tkeep  <= '0;
            s_axis_tdata  <= '0;
            return;
        end

        while (idx < msg.size()) begin
            int bytes_now;
            bytes_now = (msg.size() - idx < DATA_BYTES) ? (msg.size() - idx) : DATA_BYTES;

            if ($urandom_range(0, 99) < stall_percent) begin
                s_axis_tvalid <= 1'b0;
                s_axis_tkeep  <= '0;
                s_axis_tdata  <= '0;
                saw_input_stall = 1'b1;
                @(posedge clk);
                continue;
            end

            s_axis_tdata <= '0;
            for (int i = 0; i < bytes_now; i++)
                s_axis_tdata[8*i +: 8] <= msg[idx + i];
            s_axis_tkeep  <= keep_from_count(bytes_now);
            s_axis_tvalid <= 1'b1;

            do begin
                @(posedge clk);
            end while (!(s_axis_tvalid && s_axis_tready));

            idx += bytes_now;
            s_axis_tvalid <= 1'b0;
            s_axis_tkeep  <= '0;
            s_axis_tdata  <= '0;
            @(posedge clk);
        end
    endtask

    task automatic collect_output(
        input int unsigned expected_len,
        input int unsigned stall_percent,
        output byte unsigned got[]
    );
        int idx;
        int watchdog;

        idx      = 0;
        watchdog = 0;
        got      = new[expected_len];
        m_axis_tready <= 1'b0;

        while (idx < expected_len) begin
            if ($urandom_range(0, 99) < stall_percent) begin
                m_axis_tready <= 1'b0;
                if (m_axis_tvalid)
                    saw_output_stall = 1'b1;
            end else begin
                m_axis_tready <= 1'b1;
            end

            @(posedge clk);
            watchdog++;
            if (watchdog > MAX_CYCLES)
                $fatal(1, "Timeout while waiting for output byte %0d of %0d", idx, expected_len);

            if (m_axis_tvalid && m_axis_tready) begin
                for (int i = 0; i < DATA_BYTES; i++) begin
                    if (m_axis_tkeep[i]) begin
                        if (idx >= expected_len)
                            $fatal(1, "DUT produced more bytes than expected");
                        got[idx] = m_axis_tdata[8*i +: 8];
                        idx++;
                    end
                end
            end
        end

        m_axis_tready <= 1'b0;
        @(posedge clk);
    endtask

    task automatic compare_digest(
        input string test_name,
        input byte unsigned exp[],
        input byte unsigned got[]
    );
        if (got.size() != exp.size())
            $fatal(1, "%s: output size mismatch, expected %0d got %0d", test_name, exp.size(), got.size());

        for (int i = 0; i < exp.size(); i++) begin
            if (got[i] !== exp[i]) begin
                $display("%s: mismatch at byte %0d, expected %02x got %02x", test_name, i, exp[i], got[i]);
                $fatal(1, "%s failed", test_name);
            end
        end
        bytes_checked += exp.size();
    endtask

    task automatic configure_lengths(
        input int unsigned mode_i,
        input int unsigned msg_len,
        input int unsigned out_len
    );
        int rate;
        rate = mode_rate(mode_i);

        inblocks       = (msg_len == 0) ? 16'd0 : ((msg_len + rate - 1) / rate);
        inlen_partial  = msg_len % rate;
        outblocks      = (out_len == 0) ? 16'd0 : ((out_len + rate - 1) / rate);
        outlen_partial = out_len % rate;
    endtask

    task automatic update_manual_coverage(
        input int unsigned mode_i,
        input int unsigned msg_len,
        input int unsigned out_len
    );
        int rate;
        rate = mode_rate(mode_i);
        saw_mode[mode_i] = 1'b1;
        saw_msg_len_zero         |= (msg_len == 0);
        saw_msg_len_partial_word |= ((msg_len % DATA_BYTES) != 0);
        saw_msg_len_full_word    |= (msg_len >= DATA_BYTES && (msg_len % DATA_BYTES) == 0);
        saw_msg_len_block_aligned|= (msg_len != 0 && (msg_len % rate) == 0);
        saw_msg_len_rate_minus_one |= ((msg_len % rate) == rate - 1);
        saw_msg_len_multi_block  |= (msg_len > rate);
        saw_out_len_partial_word |= ((out_len % DATA_BYTES) != 0);
        saw_out_len_block_aligned|= (out_len != 0 && (out_len % rate) == 0);
        saw_out_len_multi_block  |= (out_len > rate);
    endtask

    task automatic run_one_test(
        input string test_name,
        input int unsigned mode_i,
        input int unsigned msg_len,
        input int unsigned out_len,
        input int unsigned input_stall_percent,
        input int unsigned output_stall_percent
    );
        byte unsigned msg[];
        byte unsigned exp[];
        byte unsigned got[];

        msg = new[msg_len];
        for (int i = 0; i < msg_len; i++)
            msg[i] = ($urandom() + i + (mode_i << 4)) & 8'hff;

        sponge_reference(mode_i, msg, out_len, exp);
        update_manual_coverage(mode_i, msg_len, out_len);

        wait_cycles($urandom_range(0, 3));
        mode <= mode_i[2:0];
        configure_lengths(mode_i, msg_len, out_len);
        fork
            drive_input(msg, input_stall_percent);
            collect_output(out_len, output_stall_percent, got);
        join

        compare_digest(test_name, exp, got);
        tests_run++;
        $display("PASS %-32s mode=%s msg_len=%0d out_len=%0d",
                 test_name, mode_name(mode_i), msg_len, out_len);
    endtask

    task automatic report_manual_coverage();
        bit all_modes;
        all_modes = 1'b1;
        for (int i = 0; i < 8; i++)
            all_modes &= saw_mode[i];

        $display("");
        $display("Manual coverage summary:");
        $display("  all modes covered             : %0d", all_modes);
        $display("  zero-length message           : %0d", saw_msg_len_zero);
        $display("  partial input word            : %0d", saw_msg_len_partial_word);
        $display("  full input word               : %0d", saw_msg_len_full_word);
        $display("  block-aligned input           : %0d", saw_msg_len_block_aligned);
        $display("  rate-1 input remainder        : %0d", saw_msg_len_rate_minus_one);
        $display("  multi-rate-block input        : %0d", saw_msg_len_multi_block);
        $display("  partial output word           : %0d", saw_out_len_partial_word);
        $display("  block-aligned output          : %0d", saw_out_len_block_aligned);
        $display("  multi-rate-block output       : %0d", saw_out_len_multi_block);
        $display("  input stalls injected         : %0d", saw_input_stall);
        $display("  output stalls observed        : %0d", saw_output_stall);
`ifdef USE_SV_COVERAGE
        $display("  covergroup coverage           : %0.2f%%", cov.get_coverage());
`else
        $display("  covergroup coverage           : skipped under Icarus Verilog");
`endif

        if (!all_modes ||
            !saw_msg_len_zero ||
            !saw_msg_len_partial_word ||
            !saw_msg_len_full_word ||
            !saw_msg_len_block_aligned ||
            !saw_msg_len_rate_minus_one ||
            !saw_msg_len_multi_block ||
            !saw_out_len_partial_word ||
            !saw_out_len_block_aligned ||
            !saw_out_len_multi_block ||
            !saw_input_stall ||
            !saw_output_stall) begin
            $fatal(1, "Manual coverage goals were not met");
        end
    endtask

    initial begin
        $timeformat(-9, 0, " ns", 10);
        reset_dut();

        run_one_test("sha3_224_empty",      M_SHA3_224,      0,   fixed_digest_bytes(M_SHA3_224),      0,  0);
        run_one_test("sha3_256_abc",        M_SHA3_256,      3,   fixed_digest_bytes(M_SHA3_256),      10, 10);
        run_one_test("sha3_384_one_block",  M_SHA3_384,      SHA3_384_RATE, fixed_digest_bytes(M_SHA3_384), 15, 15);
        run_one_test("sha3_512_rate_m1",    M_SHA3_512,      SHA3_512_RATE - 1, fixed_digest_bytes(M_SHA3_512), 20, 20);
        run_one_test("shake128_long_out",   M_SHAKE128,      17,  SHAKE128_RATE + 9,                 20, 35);
        run_one_test("shake256_multi_in",   M_SHAKE256,      SHAKE256_RATE + 5, SHAKE256_RATE,       35, 20);
        run_one_test("turbo128_partial",    M_TURBOSHAKE128, 31,  33,                              25, 25);
        run_one_test("turbo256_multi_out",  M_TURBOSHAKE256, SHAKE256_RATE + 1, SHAKE256_RATE + 7,  25, 35);

        for (int mode_i = 0; mode_i < 8; mode_i++) begin
            int rate;
            rate = mode_rate(mode_i);
            run_one_test($sformatf("random_%0d_short", mode_i), mode_i,
                         $urandom_range(1, 2*DATA_BYTES + 1),
                         $urandom_range(1, 2*DATA_BYTES + 3),
                         20, 20);
            run_one_test($sformatf("random_%0d_boundary", mode_i), mode_i,
                         rate + $urandom_range(0, 3),
                         rate + $urandom_range(0, 3),
                         25, 30);
        end

        report_manual_coverage();
        $display("");
        $display("All SHA-3 tests passed: tests=%0d bytes_checked=%0d",
                 tests_run, bytes_checked);
        $finish;
    end

endmodule
