`timescale 1ns/1ps
`include "sha3_defines.vh"

module tb;
    localparam DATA_WIDTH = 32;
    localparam DATA_BYTES = DATA_WIDTH / 8;
    localparam CLK_PERIOD = 10;

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

    integer cycles;
    integer out_words;
    reg [31:0] expected_word;

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
        $dumpfile("sha3_verilog/sim/sha3_verilog.vcd");
        $dumpvars(0, tb);
    end

    task reset_dut;
        begin
            rst_n          = 1'b0;
            inblocks       = 16'd0;
            inlen_partial  = 16'd0;
            outblocks      = 16'd0;
            outlen_partial = 16'd0;
            mode           = `M_SHA3_256;
            s_axis_tdata   = 32'd0;
            s_axis_tkeep   = 4'd0;
            s_axis_tvalid  = 1'b0;
            m_axis_tready  = 1'b0;
            repeat (5) @(posedge clk);
            rst_n = 1'b1;
            repeat (2) @(posedge clk);
        end
    endtask

    task start_empty_sha3_256;
        begin
            mode           = `M_SHA3_256;
            inblocks       = 16'd0;
            inlen_partial  = 16'd0;
            outblocks      = 16'd1;
            outlen_partial = 16'd32;
            @(posedge clk);
            s_axis_tvalid  <= 1'b1;
            s_axis_tkeep   <= 4'b0000;
            s_axis_tdata   <= 32'd0;
            @(posedge clk);
            s_axis_tvalid  <= 1'b0;
            s_axis_tkeep   <= 4'b0000;
            s_axis_tdata   <= 32'd0;
        end
    endtask

    task start_abc_sha3_256;
        begin
            mode           = `M_SHA3_256;
            inblocks       = 16'd1;
            inlen_partial  = 16'd3;
            outblocks      = 16'd1;
            outlen_partial = 16'd32;
            @(posedge clk);
            s_axis_tvalid  <= 1'b1;
            s_axis_tkeep   <= 4'b0111;
            s_axis_tdata   <= 32'h00636261;
            while (!s_axis_tready)
                @(posedge clk);
            @(posedge clk);
            s_axis_tvalid  <= 1'b0;
            s_axis_tkeep   <= 4'b0000;
            s_axis_tdata   <= 32'd0;
        end
    endtask

    function [31:0] digest_word;
        input integer test_id;
        input integer word_id;
        begin
            if (test_id == 0) begin
                case (word_id)
                    0: digest_word = 32'hf8c6ffa7;
                    1: digest_word = 32'h66d71ebf;
                    2: digest_word = 32'h5647c151;
                    3: digest_word = 32'h62d661a0;
                    4: digest_word = 32'h4dff80f5;
                    5: digest_word = 32'hfa493be4;
                    6: digest_word = 32'h4b0ad882;
                    7: digest_word = 32'h4a43f880;
                    default: digest_word = 32'h00000000;
                endcase
            end else begin
                case (word_id)
                    0: digest_word = 32'ha75d983a;
                    1: digest_word = 32'hb225e24f;
                    2: digest_word = 32'h2d175c04;
                    3: digest_word = 32'hbd90d36b;
                    4: digest_word = 32'h6e085f85;
                    5: digest_word = 32'h5b529d3e;
                    6: digest_word = 32'h45e2bf46;
                    7: digest_word = 32'h32154311;
                    default: digest_word = 32'h00000000;
                endcase
            end
        end
    endfunction

    task collect_sha3_256_digest;
        input integer test_id;
        begin
            cycles = 0;
            out_words = 0;
            m_axis_tready = 1'b1;
            while (out_words < 8) begin
                @(posedge clk);
                cycles = cycles + 1;
                if (cycles > 1000) begin
                    $display("ERROR: timeout waiting for SHA3-256 digest output");
                    $finish;
                end
                if (m_axis_tvalid && m_axis_tready) begin
                    expected_word = digest_word(test_id, out_words);
                    $display("TEST[%0d] OUT[%0d] data=%08x keep=%b", test_id, out_words, m_axis_tdata, m_axis_tkeep);
                    if (m_axis_tkeep !== 4'b1111) begin
                        $display("ERROR: unexpected tkeep on full SHA3-256 digest word");
                        $finish;
                    end
                    if (m_axis_tdata !== expected_word) begin
                        $display("ERROR: digest mismatch at word %0d expected=%08x got=%08x",
                                 out_words, expected_word, m_axis_tdata);
                        $finish;
                    end
                    out_words = out_words + 1;
                end
            end
            m_axis_tready = 1'b0;
            repeat (5) @(posedge clk);
        end
    endtask

    initial begin
        reset_dut();
        start_empty_sha3_256();
        collect_sha3_256_digest(0);

        reset_dut();
        start_abc_sha3_256();
        collect_sha3_256_digest(1);

        $display("SHA3 Verilog smoke test passed");
        $finish;
    end
endmodule
