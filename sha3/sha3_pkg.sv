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

`ifndef SHA3_PKG_SV
`define SHA3_PKG_SV

package sha3_pkg;

    /* SHA3 configs */
    localparam int SHA3_224_RATE    = 144;
    localparam int SHA3_256_RATE    = 136;
    localparam int SHA3_384_RATE    = 104;
    localparam int SHA3_512_RATE    = 72;
    localparam int SHAKE128_RATE    = 168;
    localparam int SHAKE256_RATE    = 136;

    /* Suffix to be appended to the message before padding. Used for domain separation  */
    localparam logic [7:0]  SHA3_SUFFIX         = 8'h06;
    localparam logic [31:0] SHA3_SUFFIX_WORD    = 32'h06060606;
    localparam logic [7:0]  SHAKE_SUFFIX        = 8'h1F;
    localparam logic [31:0] SHAKE_SUFFIX_WORD   = 32'h1F1F1F1F;
    localparam logic [7:0]  SHA3_PADD           = 8'h80;

    /* Counted from 0 to 7 */
    typedef enum logic [2:0] {M_SHA3_224, M_SHA3_256, M_SHA3_384, M_SHA3_512, M_SHAKE128, M_SHAKE256, M_TURBOSHAKE128, M_TURBOSHAKE256} sha3_mode_t;


    /* Common Keccak parameters */
    /* Dimensions of 3D Keccak state */
    localparam int X = 5;
    localparam int Y = 5;
    localparam int Z = 64;

    localparam int ROUNDS           = 24;
    localparam int TURBO_ROUNDS     = 12;
    localparam int MAX_BYTES        = 4096; // only required for counter value
    localparam int MAX_BLOCK_CNT    = $ceil(MAX_BYTES/SHA3_512_RATE);
    localparam int MAX_RATE         = SHAKE128_RATE;

    typedef logic [Z-1:0] keccak_state_t [X][Y];
    localparam logic [7:0] ZERO_STATE [X*Y*Z/8] = '{default:'0};

    /* Shift Constants */
    // localparam int SC[X][Y] = '{'{0, 36, 3, 41, 18}, '{1, 44, 10, 45, 2}, '{62, 6, 43, 15, 61}, '{28, 55, 25, 21, 56}, '{27, 20, 39, 8, 14}};
    function automatic int sc(input int x, input int y);    //Changed by JengDe
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
    /* Round Constants */
    // localparam logic [Z-1:0] RC[ROUNDS] = '{ 64'h0000000000000001, 64'h0000000000008082, 64'h800000000000808A, 64'h8000000080008000,
    //                                         64'h000000000000808B, 64'h0000000080000001, 64'h8000000080008081, 64'h8000000000008009,
    //                                         64'h000000000000008A, 64'h0000000000000088, 64'h0000000080008009, 64'h000000008000000A,
    //                                         64'h000000008000808B, 64'h800000000000008B, 64'h8000000000008089, 64'h8000000000008003,
    //                                         64'h8000000000008002, 64'h8000000000000080, 64'h000000000000800A, 64'h800000008000000A,
    //                                         64'h8000000080008081, 64'h8000000000008080, 64'h0000000080000001, 64'h8000000080008008  };
    function automatic logic [Z-1:0] rc(input int round);   //Changed by JengDe
        case (round)
            0:  return 64'h0000000000000001;
            1:  return 64'h0000000000008082;
            2:  return 64'h800000000000808A;
            3:  return 64'h8000000080008000;
            4:  return 64'h000000000000808B;
            5:  return 64'h0000000080000001;
            6:  return 64'h8000000080008081;
            7:  return 64'h8000000000008009;
            8:  return 64'h000000000000008A;
            9:  return 64'h0000000000000088;
            10: return 64'h0000000080008009;
            11: return 64'h000000008000000A;
            12: return 64'h000000008000808B;
            13: return 64'h800000000000008B;
            14: return 64'h8000000000008089;
            15: return 64'h8000000000008003;
            16: return 64'h8000000000008002;
            17: return 64'h8000000000000080;
            18: return 64'h000000000000800A;
            19: return 64'h800000008000000A;
            20: return 64'h8000000080008081;
            21: return 64'h8000000000008080;
            22: return 64'h0000000080000001;
            23: return 64'h8000000080008008;
            default: return 64'h0000000000000000;
        endcase
    endfunction


    typedef enum logic [2:0] {S_IDLE, S_ABSORB, S_PERMUTE_A, S_FINALIZE, S_PADD, S_SQUEEZE, S_PERMUTE_S} fsm_state_t;

endpackage

`endif
