// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1

`timescale 1ns/1ps
`include "sha3_defines.vh"

module sha3 #(
    parameter DATA_WIDTH = 32
) (
    input                       clk,
    input                       rst_n,

    input      [15:0]           inblocks,
    input      [15:0]           inlen_partial,
    input      [15:0]           outblocks,
    input      [15:0]           outlen_partial,
    input      [2:0]            mode,

    input      [DATA_WIDTH-1:0] s_axis_tdata,
    input      [DATA_WIDTH/8-1:0] s_axis_tkeep,
    input                       s_axis_tvalid,
    output                     s_axis_tready,

    output     [DATA_WIDTH-1:0] m_axis_tdata,
    output reg [DATA_WIDTH/8-1:0] m_axis_tkeep,
    output                     m_axis_tvalid,
    input                      m_axis_tready
);

    localparam DATA_BYTES = DATA_WIDTH / 8;

    reg [2:0] state_n;
    reg [2:0] state_r;

    reg  [1599:0] kstate_n;
    reg  [1599:0] kstate_r;
    wire [1599:0] kstate_out;

    wire m_axis_tvalid_int;
    wire s_axis_tready_int;

    reg  [4:0] round_cnt_r;
    wire [4:0] round_cnt_int;
    reg  [4:0] round_cnt_offset;
    reg  [7:0] byte_cnt_r;
    reg  [5:0] block_cnt_r;

    wire [DATA_WIDTH-1:0] rdata_mask;
    wire [DATA_WIDTH-1:0] rdata_masked;
    reg  [DATA_WIDTH-1:0] rdata_suffix_mask;
    wire [DATA_WIDTH-1:0] suffix_word_masked;
    reg  [2:0] valid_inbits;

    reg  [7:0]  sha3_rate;
    reg  [7:0]  sha3_suffix;
    reg  [31:0] sha3_suffix_word;
    reg  [4:0]  rounds;

    integer i;
    integer byte_index;

    always @* begin
        case (mode)
            `M_SHA3_224: begin
                sha3_rate        = `SHA3_224_RATE;
                sha3_suffix      = `SHA3_SUFFIX;
                sha3_suffix_word = `SHA3_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_SHA3_256: begin
                sha3_rate        = `SHA3_256_RATE;
                sha3_suffix      = `SHA3_SUFFIX;
                sha3_suffix_word = `SHA3_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_SHA3_384: begin
                sha3_rate        = `SHA3_384_RATE;
                sha3_suffix      = `SHA3_SUFFIX;
                sha3_suffix_word = `SHA3_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_SHA3_512: begin
                sha3_rate        = `SHA3_512_RATE;
                sha3_suffix      = `SHA3_SUFFIX;
                sha3_suffix_word = `SHA3_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_SHAKE128: begin
                sha3_rate        = `SHAKE128_RATE;
                sha3_suffix      = `SHAKE_SUFFIX;
                sha3_suffix_word = `SHAKE_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_SHAKE256: begin
                sha3_rate        = `SHAKE256_RATE;
                sha3_suffix      = `SHAKE_SUFFIX;
                sha3_suffix_word = `SHAKE_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
            `M_TURBOSHAKE128: begin
                sha3_rate        = `SHAKE128_RATE;
                sha3_suffix      = `SHAKE_SUFFIX;
                sha3_suffix_word = `SHAKE_SUFFIX_WORD;
                rounds           = `TURBO_ROUNDS;
                round_cnt_offset = `ROUNDS - `TURBO_ROUNDS;
            end
            `M_TURBOSHAKE256: begin
                sha3_rate        = `SHAKE256_RATE;
                sha3_suffix      = `SHAKE_SUFFIX;
                sha3_suffix_word = `SHAKE_SUFFIX_WORD;
                rounds           = `TURBO_ROUNDS;
                round_cnt_offset = `ROUNDS - `TURBO_ROUNDS;
            end
            default: begin
                sha3_rate        = `SHA3_512_RATE;
                sha3_suffix      = `SHA3_SUFFIX;
                sha3_suffix_word = `SHA3_SUFFIX_WORD;
                rounds           = `ROUNDS;
                round_cnt_offset = 5'd0;
            end
        endcase
    end

    keccak_f1600 keccak_f1600_inst (
        .state_i(kstate_r),
        .round_cnt_i(round_cnt_int),
        .state_o(kstate_out)
    );

    assign round_cnt_int = round_cnt_r + round_cnt_offset;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            kstate_r <= 1600'd0;
        else
            kstate_r <= kstate_n;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state_r <= `S_IDLE;
        else
            state_r <= state_n;
    end

    always @* begin
        state_n = state_r;

        case (state_r)
            `S_IDLE:
                if (s_axis_tvalid) begin
                    if (inblocks == 16'd0 && inlen_partial == 16'd0)
                        state_n = `S_PADD;
                    else
                        state_n = `S_ABSORB;
                end

            `S_ABSORB:
                if (s_axis_tvalid && s_axis_tready_int) begin
                    if (block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial && inlen_partial > 0)
                        state_n = `S_FINALIZE;
                    else if (byte_cnt_r + valid_inbits >= sha3_rate)
                        state_n = `S_PERMUTE_A;
                end

            `S_PERMUTE_A:
                if (round_cnt_r >= rounds - 1) begin
                    if (block_cnt_r >= inblocks - 1 && inlen_partial == 0)
                        state_n = `S_PADD;
                    else
                        state_n = `S_ABSORB;
                end

            `S_PADD:
                state_n = `S_FINALIZE;

            `S_FINALIZE:
                if (round_cnt_r >= rounds - 1)
                    state_n = `S_SQUEEZE;

            `S_SQUEEZE:
                if (m_axis_tvalid_int && m_axis_tready) begin
                    if (outlen_partial > 0) begin
                        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial)
                            state_n = `S_IDLE;
                        else if (byte_cnt_r + DATA_BYTES >= sha3_rate)
                            state_n = `S_PERMUTE_S;
                    end else begin
                        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= sha3_rate)
                            state_n = `S_IDLE;
                        else if (byte_cnt_r + DATA_BYTES >= sha3_rate)
                            state_n = `S_PERMUTE_S;
                    end
                end

            `S_PERMUTE_S:
                if (round_cnt_r >= rounds - 1)
                    state_n = `S_SQUEEZE;

            default:
                state_n = `S_IDLE;
        endcase
    end

    always @* begin
        kstate_n = kstate_r;

        case (state_r)
            `S_IDLE: begin
                kstate_n = 1600'd0;
            end

            `S_ABSORB: begin
                if (s_axis_tvalid) begin
                    for (i = 0; i < DATA_BYTES; i = i + 1) begin
                        byte_index = {byte_cnt_r[7:2], 2'b00} + i;
                        kstate_n[8*byte_index +: 8] = kstate_r[8*byte_index +: 8] ^ rdata_masked[8*i +: 8];
                    end

                    if (block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial && inlen_partial > 0) begin
                        if (inlen_partial == sha3_rate - 1) begin
                            kstate_n[8*(sha3_rate-1) +: 8] = kstate_r[8*(sha3_rate-1) +: 8] ^ (sha3_suffix | `SHA3_PADD);
                        end else if (rdata_mask == {DATA_WIDTH{1'b1}}) begin
                            byte_index = {byte_cnt_r[7:2], 2'b00} + DATA_BYTES;
                            kstate_n[8*byte_index +: 8] = kstate_r[8*byte_index +: 8] ^ sha3_suffix;
                            kstate_n[8*(sha3_rate-1) +: 8] = kstate_r[8*(sha3_rate-1) +: 8] ^ `SHA3_PADD;
                        end else begin
                            for (i = 0; i < DATA_BYTES; i = i + 1) begin
                                byte_index = {byte_cnt_r[7:2], 2'b00} + i;
                                kstate_n[8*byte_index +: 8] = kstate_r[8*byte_index +: 8] ^ rdata_masked[8*i +: 8] ^ suffix_word_masked[8*i +: 8];
                            end
                            kstate_n[8*(sha3_rate-1) +: 8] = kstate_r[8*(sha3_rate-1) +: 8] ^ `SHA3_PADD;
                        end
                    end
                end
            end

            `S_PADD: begin
                kstate_n[7:0] = kstate_r[7:0] ^ sha3_suffix;
                kstate_n[8*(sha3_rate-1) +: 8] = kstate_r[8*(sha3_rate-1) +: 8] ^ `SHA3_PADD;
            end

            `S_PERMUTE_A,
            `S_FINALIZE,
            `S_PERMUTE_S: begin
                kstate_n = kstate_out;
            end

            default: begin
                kstate_n = kstate_r;
            end
        endcase
    end

    always @* begin
        casez (s_axis_tkeep)
            4'b0001: rdata_suffix_mask = 32'h0000ff00;
            4'b001?: rdata_suffix_mask = 32'h00ff0000;
            4'b01??: rdata_suffix_mask = 32'hff000000;
            default: rdata_suffix_mask = {DATA_WIDTH{1'b0}};
        endcase
    end

    genvar gi;
    generate
        for (gi = 0; gi < DATA_BYTES; gi = gi + 1) begin : gen_rdata_mask
            assign rdata_mask[8*gi +: 8] = {8{s_axis_tkeep[gi]}};
        end
    endgenerate

    assign suffix_word_masked = sha3_suffix_word & rdata_suffix_mask;
    assign rdata_masked       = s_axis_tdata & rdata_mask;

    always @* begin
        valid_inbits = 3'd0;
        for (i = 0; i < DATA_BYTES; i = i + 1)
            valid_inbits = valid_inbits + s_axis_tkeep[i];
    end

    assign s_axis_tready_int = (state_r == `S_ABSORB) ? 1'b1 : 1'b0;
    assign s_axis_tready     = s_axis_tready_int;

    generate
        for (gi = 0; gi < DATA_BYTES; gi = gi + 1) begin : gen_m_axis_data
            assign m_axis_tdata[8*gi +: 8] = kstate_r[8*(byte_cnt_r + gi) +: 8];
        end
    endgenerate

    always @* begin
        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial && outlen_partial > 0) begin
            for (i = 0; i < DATA_BYTES; i = i + 1) begin
                if (byte_cnt_r + i < outlen_partial)
                    m_axis_tkeep[i] = 1'b1;
                else
                    m_axis_tkeep[i] = 1'b0;
            end
        end else begin
            m_axis_tkeep = {DATA_BYTES{1'b1}};
        end
    end

    assign m_axis_tvalid_int = (state_r == `S_SQUEEZE) ? 1'b1 : 1'b0;
    assign m_axis_tvalid     = m_axis_tvalid_int;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            byte_cnt_r <= 8'd0;
        end else begin
            case (state_r)
                `S_ABSORB:
                    if (s_axis_tvalid && s_axis_tready_int) begin
                        if (inlen_partial > 0) begin
                            if ((block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial) || byte_cnt_r + valid_inbits >= sha3_rate)
                                byte_cnt_r <= 8'd0;
                            else
                                byte_cnt_r <= byte_cnt_r + valid_inbits;
                        end else begin
                            if (byte_cnt_r + valid_inbits >= sha3_rate)
                                byte_cnt_r <= 8'd0;
                            else
                                byte_cnt_r <= byte_cnt_r + valid_inbits;
                        end
                    end

                `S_SQUEEZE:
                    if (m_axis_tvalid_int && m_axis_tready) begin
                        if (outlen_partial > 0) begin
                            if ((block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial) || byte_cnt_r + DATA_BYTES >= sha3_rate)
                                byte_cnt_r <= 8'd0;
                            else
                                byte_cnt_r <= byte_cnt_r + DATA_BYTES;
                        end else begin
                            if (byte_cnt_r + DATA_BYTES >= sha3_rate)
                                byte_cnt_r <= 8'd0;
                            else
                                byte_cnt_r <= byte_cnt_r + DATA_BYTES;
                        end
                    end

                default:
                    byte_cnt_r <= 8'd0;
            endcase
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            block_cnt_r <= 6'd0;
        end else begin
            case (state_r)
                `S_IDLE,
                `S_FINALIZE:
                    block_cnt_r <= 6'd0;

                `S_PERMUTE_A:
                    if (round_cnt_r >= rounds - 1) begin
                        if (block_cnt_r >= inblocks - 1)
                            block_cnt_r <= 6'd0;
                        else
                            block_cnt_r <= block_cnt_r + 1'b1;
                    end

                `S_PERMUTE_S:
                    if (round_cnt_r >= rounds - 1) begin
                        if (block_cnt_r >= outblocks - 1)
                            block_cnt_r <= 6'd0;
                        else
                            block_cnt_r <= block_cnt_r + 1'b1;
                    end

                default:
                    block_cnt_r <= block_cnt_r;
            endcase
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            round_cnt_r <= 5'd0;
        end else begin
            case (state_r)
                `S_PERMUTE_A,
                `S_FINALIZE,
                `S_PERMUTE_S:
                    if (round_cnt_r >= rounds - 1)
                        round_cnt_r <= 5'd0;
                    else
                        round_cnt_r <= round_cnt_r + 1'b1;

                default:
                    round_cnt_r <= 5'd0;
            endcase
        end
    end

endmodule
