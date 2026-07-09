// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
//
// Licensed under the Solderpad Hardware License v 2.1 (the "License");
// you may not use this file except in compliance with the License, or,
// at your option, the Apache License version 2.0. You may obtain a
// copy of the License at
//
// https://solderpad.org/licenses/SHL-2.1/
//
// Unless required by applicable law or agreed to in writing, any work
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// @author: Patrick Karl <patrick.karl@tum.de>

`timescale 1ns/1ps

module sha3
    import sha3_pkg::*;
#(
    parameter DATA_WIDTH  = 32,
    localparam DATA_BYTES = DATA_WIDTH/8
)
(
    input   logic                   clk,            
    input   logic                   rst_n,          // asynchronous active-low reset

    input   logic [15:0]            inblocks,       // total number of input blocks
    input   logic [15:0]            inlen_partial,  // size of last partial block in bytes
    input   logic [15:0]            outblocks,      // total number of output blocks
    input   logic [15:0]            outlen_partial, // size of last partial block in bytes
    input   logic [2:0]             mode,           // mode as defined in sha3_pkg

    input   logic [DATA_WIDTH-1:0]  s_axis_tdata,
    input   logic [DATA_BYTES-1:0]  s_axis_tkeep,
    input   logic                   s_axis_tvalid,
    output  logic                   s_axis_tready,
                 
    output logic [DATA_WIDTH-1:0]   m_axis_tdata,
    output logic [DATA_BYTES-1:0]   m_axis_tkeep,
    output logic                    m_axis_tvalid,
    input  logic                    m_axis_tready
);

    
    fsm_state_t state_n, state_r;

    logic [7:0] kstate_n   [X*Y*Z/8];
    logic [7:0] kstate_r   [X*Y*Z/8];
    logic [7:0] kstate_out [X*Y*Z/8];

    logic m_axis_tvalid_int;
    logic s_axis_tready_int;

    logic [$clog2(ROUNDS)-1:0]          round_cnt_r;
    logic [$clog2(ROUNDS)-1:0]          round_cnt_int;
    logic [$clog2(ROUNDS)-1:0]          round_cnt_offset;
    logic [$clog2(MAX_RATE)-1:0]        byte_cnt_r;
    logic [$clog2(MAX_BLOCK_CNT)-1:0]   block_cnt_r;

    logic [DATA_WIDTH-1:0]              rdata_mask;
    logic [DATA_WIDTH-1:0]              rdata_masked;
    logic [DATA_WIDTH-1:0]              rdata_suffix_mask;
    logic [DATA_WIDTH-1:0]              suffix_word_masked;
    logic [DATA_BYTES-1:0]              wdata_mask_be;
    logic [$clog2(DATA_WIDTH/8):0]      valid_inbits;


    ////////////////////////////////////////////////////////////////////////////
    // Mode configuration 
    ////////////////////////////////////////////////////////////////////////////
    logic [7:0]  sha3_rate;
    logic [7:0]  sha3_suffix;
    logic [31:0] sha3_suffix_word;
    logic [$clog2(ROUNDS)-1:0] rounds;
    always_comb begin
        case (mode)
            M_SHA3_224: begin
                sha3_rate           = SHA3_224_RATE;
                sha3_suffix         = SHA3_SUFFIX;
                sha3_suffix_word    = SHA3_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_SHA3_256: begin
                sha3_rate           = SHA3_256_RATE;
                sha3_suffix         = SHA3_SUFFIX;
                sha3_suffix_word    = SHA3_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_SHA3_384: begin
                sha3_rate           = SHA3_384_RATE;
                sha3_suffix         = SHA3_SUFFIX;
                sha3_suffix_word    = SHA3_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_SHA3_512: begin
                sha3_rate           = SHA3_512_RATE;
                sha3_suffix         = SHA3_SUFFIX;
                sha3_suffix_word    = SHA3_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_SHAKE128: begin
                sha3_rate           = SHAKE128_RATE;
                sha3_suffix         = SHAKE_SUFFIX;
                sha3_suffix_word    = SHAKE_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_SHAKE256: begin
                sha3_rate           = SHAKE256_RATE;
                sha3_suffix         = SHAKE_SUFFIX;
                sha3_suffix_word    = SHAKE_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
            M_TURBOSHAKE128: begin
                sha3_rate           = SHAKE128_RATE;
                sha3_suffix         = SHAKE_SUFFIX;
                sha3_suffix_word    = SHAKE_SUFFIX_WORD;
                rounds              = TURBO_ROUNDS;
                round_cnt_offset    = ROUNDS - TURBO_ROUNDS;
            end
            M_TURBOSHAKE256: begin
                sha3_rate           = SHAKE256_RATE;
                sha3_suffix         = SHAKE_SUFFIX;
                sha3_suffix_word    = SHAKE_SUFFIX_WORD;
                rounds              = TURBO_ROUNDS;
                round_cnt_offset    = ROUNDS - TURBO_ROUNDS;
            end

            default: begin
                sha3_rate           = SHA3_512_RATE;
                sha3_suffix         = SHA3_SUFFIX;
                sha3_suffix_word    = SHA3_SUFFIX_WORD;
                rounds              = ROUNDS;
                round_cnt_offset    = 0;
            end
        endcase
    end


    ////////////////////////////////////////////////////////////////////////////
    // Round Function and Keccak State Register
    ////////////////////////////////////////////////////////////////////////////
    /* Instantiation of round function */
    keccak_f1600 keccak_f1600_inst
    (
        .state_i(kstate_r),
        .round_cnt_i(round_cnt_int),
        .state_o(kstate_out)
    );
    assign round_cnt_int = round_cnt_r + round_cnt_offset;

    /* Keccak state register */
    always_ff @(posedge clk, negedge rst_n) begin
        if (~rst_n) kstate_r <= ZERO_STATE;
        else        kstate_r <= kstate_n;
    end
    


    ////////////////////////////////////////////////////////////////////////////
    // FSM
    ////////////////////////////////////////////////////////////////////////////

    /* FSM state register */
    always_ff @(posedge clk, negedge rst_n) begin
        if (~rst_n) state_r <= S_IDLE;
        else        state_r <= state_n;
    end

    /* Next state logic */
    always_comb begin
        state_n = state_r;

        case (state_r)
            S_IDLE:
                if (s_axis_tvalid) begin
                    if (inblocks == 0 && inlen_partial == 0)
                        state_n = S_PADD;
                    else
                        state_n = S_ABSORB;
                end

            S_ABSORB:
                if (s_axis_tvalid && s_axis_tready_int) begin
                    if (block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial && inlen_partial > 0) 
                        state_n = S_FINALIZE;
                    else if (byte_cnt_r + valid_inbits >= sha3_rate)
                        state_n = S_PERMUTE_A;
                end

            S_PERMUTE_A:
                if (round_cnt_r >= rounds - 1) begin
                    if (block_cnt_r >= inblocks - 1 && inlen_partial == 0)
                        state_n = S_PADD;
                    else
                        state_n = S_ABSORB;
                end

            S_PADD:
                state_n = S_FINALIZE;

            S_FINALIZE:
                if (round_cnt_r >= rounds - 1)
                    state_n = S_SQUEEZE;

            S_SQUEEZE:
                if (m_axis_tvalid_int && m_axis_tready) begin
                    if (outlen_partial > 0) begin
                        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial) 
                            state_n = S_IDLE;
                        else if (byte_cnt_r + DATA_BYTES >= sha3_rate)
                            state_n = S_PERMUTE_S;
                    end else begin
                        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= sha3_rate) 
                            state_n = S_IDLE;
                        else if (byte_cnt_r + DATA_BYTES >= sha3_rate)
                            state_n = S_PERMUTE_S;
                    end
                end

            S_PERMUTE_S:
                if (round_cnt_r >= rounds - 1)
                    state_n = S_SQUEEZE;

            default:
                state_n = S_IDLE;

        endcase
    end

    logic [$clog2(MAX_RATE)-1:0] absorb_pos;
    assign absorb_pos = {byte_cnt_r[$clog2(MAX_RATE)-1:2], 2'b00};

    /* Keccak state logic (absorb) */
    always_comb begin
        kstate_n = kstate_r;

        case (state_r)
            S_IDLE:
                kstate_n = ZERO_STATE;

            S_ABSORB: begin
                if (s_axis_tvalid) begin
                    for (int i=0; i<DATA_BYTES; i++) 
                        kstate_n[absorb_pos+i] = kstate_r[absorb_pos+i] ^ rdata_masked[8*i+7 -: 8];
                    if (block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial && inlen_partial > 0) begin
                        if (inlen_partial == sha3_rate - 1)
                            /* If only one byte in last block is empty, absorb both suffix and padding byte in the same byte */
                            kstate_n[sha3_rate-1] = kstate_r[sha3_rate-1] ^ (sha3_suffix | SHA3_PADD);
                        else if (rdata_mask == {DATA_WIDTH{1'b1}}) begin
                            /* If only one word is to be absorbed but the word is fully set, absorb suffix in next bytes position */
                            kstate_n[absorb_pos+DATA_BYTES] = kstate_r[absorb_pos+DATA_BYTES] ^ sha3_suffix;
                            kstate_n[sha3_rate-1] = kstate_r[sha3_rate-1] ^ SHA3_PADD;
                        end else begin
                            /* Here the current word from memory that is absorbed is only partially set, so add the suffix within the corresponding position */
                            /* Note that the same slice is assigned as above for data absorbtion, so add rdata and rdata_mask here again */
                            for (int i=0; i<DATA_BYTES; i++)
                                kstate_n[absorb_pos+i] = kstate_r[absorb_pos+i] ^ rdata_masked[8*i+7 -: 8] ^ suffix_word_masked[8*i+7 -: 8];
                            kstate_n[sha3_rate-1] = kstate_r[sha3_rate-1] ^ SHA3_PADD;
                        end
                    end
                end
            end

            S_PADD: begin
                kstate_n[0] = kstate_r[0] ^ sha3_suffix;
                kstate_n[sha3_rate-1] = kstate_r[sha3_rate-1] ^ SHA3_PADD;
            end

            S_PERMUTE_A, S_FINALIZE, S_PERMUTE_S:
                kstate_n = kstate_out;

            default:
                kstate_n = kstate_r;
        endcase
    end

    always_comb begin
        casez(s_axis_tkeep)
            4'b0001: rdata_suffix_mask = 32'h0000FF00;
            4'b001?: rdata_suffix_mask = 32'h00FF0000;
            4'b01??: rdata_suffix_mask = 32'hFF000000;
            default: rdata_suffix_mask = '0;
        endcase
    end


    /* DATA ABSORBTION */
    /* Generate mask for absorbing data */
    generate
        for (genvar i=0; i<DATA_BYTES; i++) begin
            assign rdata_mask[8*i+7 -: 8] = {8{s_axis_tkeep[i]}};
        end
    endgenerate
    assign suffix_word_masked   = sha3_suffix_word & rdata_suffix_mask;
    assign rdata_masked         = s_axis_tdata & rdata_mask;

    always_comb begin
        valid_inbits = '0;
        for (int i=0; i<DATA_BYTES; i++) begin
            valid_inbits = valid_inbits + s_axis_tkeep[i];
        end
    end

    assign s_axis_tready_int    = (state_r == S_ABSORB) ? 1'b1 : 1'b0;
    assign s_axis_tready        = s_axis_tready_int;


    /* DATA SQUEEZING */
    generate
        for (genvar i=0; i<DATA_BYTES; i++) begin
            assign m_axis_tdata[8*i+7 -: 8] = kstate_r[byte_cnt_r+i];
        end
    endgenerate

    /* Generate byte enable for squeezed data */
    always_comb begin
        if (block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial && outlen_partial > 0) 
            for (int i=0; i<DATA_BYTES; i++) begin
                if (byte_cnt_r + i < outlen_partial)
                    m_axis_tkeep[i] = 1'b1;
                else
                    m_axis_tkeep[i] = 1'b0;
            end
        else
            m_axis_tkeep = '1;
    end

    assign m_axis_tvalid_int    = (state_r == S_SQUEEZE) ? 1'b1 : 1'b0;
    assign m_axis_tvalid        = m_axis_tvalid_int;


    ////////////////////////////////////////////////////////////////////////////
    // Counter
    ////////////////////////////////////////////////////////////////////////////

    /* byte counter counting to full block rate or partial block */
    always_ff @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            byte_cnt_r <= '0;
        end else begin
            case (state_r)
                S_ABSORB:
                    if (s_axis_tvalid && s_axis_tready_int) begin
                        if (inlen_partial > 0) begin
                            if ((block_cnt_r >= inblocks - 1 && byte_cnt_r + valid_inbits >= inlen_partial) || byte_cnt_r + valid_inbits >= sha3_rate)
                                byte_cnt_r <= '0;
                            else 
                                byte_cnt_r <= byte_cnt_r + valid_inbits;
                        end else begin
                            if (byte_cnt_r + valid_inbits >= sha3_rate)
                                byte_cnt_r <= '0;
                            else 
                                byte_cnt_r <= byte_cnt_r + valid_inbits;
                        end
                    end

                S_SQUEEZE:
                    if (m_axis_tvalid_int && m_axis_tready) begin
                        if (outlen_partial > 0) begin
                            if ((block_cnt_r >= outblocks - 1 && byte_cnt_r + DATA_BYTES >= outlen_partial) || byte_cnt_r + DATA_BYTES >= sha3_rate)
                                byte_cnt_r <= '0;
                            else 
                                byte_cnt_r <= byte_cnt_r + DATA_BYTES;
                        end else begin
                            if (byte_cnt_r + DATA_BYTES >= sha3_rate) 
                                byte_cnt_r <= '0;
                            else 
                                byte_cnt_r <= byte_cnt_r + DATA_BYTES;
                        end
                    end

                default: 
                    byte_cnt_r <= '0;
            endcase
        end
    end

    /* block counter counting full blocks */
    always_ff @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            block_cnt_r <= '0;
        end else begin
            case (state_r)
                S_IDLE, S_FINALIZE:
                    block_cnt_r <= '0;

                S_PERMUTE_A:
                    if (round_cnt_r >= rounds - 1) begin
                        if (block_cnt_r >= inblocks - 1)
                            block_cnt_r <= '0;
                        else
                            block_cnt_r <= block_cnt_r + 1;
                    end

                S_PERMUTE_S:
                    if (round_cnt_r >= rounds - 1) begin
                        if (block_cnt_r >= outblocks - 1)
                            block_cnt_r <= '0;
                        else
                            block_cnt_r <= block_cnt_r + 1;
                    end

                default: 
                    block_cnt_r <= block_cnt_r;
            endcase
        end
    end

    /* round counter */
    always_ff @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            round_cnt_r <= '0;
        end else begin
            case (state_r)
                S_PERMUTE_A, S_FINALIZE, S_PERMUTE_S:
                    if (round_cnt_r >= rounds - 1)
                        round_cnt_r <= '0;
                    else 
                        round_cnt_r <= round_cnt_r + 1;

                default : 
                    round_cnt_r <= '0;
            endcase
        end
    end

endmodule


