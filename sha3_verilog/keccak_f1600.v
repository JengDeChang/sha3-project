// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1

`timescale 1ns/1ps
`include "sha3_defines.vh"

module keccak_f1600 (
    input  [1599:0] state_i,
    input  [4:0]    round_cnt_i,
    output [1599:0] state_o
);

    function [63:0] rc;
        input [4:0] round;
        begin
            case (round)
                5'd0:  rc = 64'h0000000000000001;
                5'd1:  rc = 64'h0000000000008082;
                5'd2:  rc = 64'h800000000000808a;
                5'd3:  rc = 64'h8000000080008000;
                5'd4:  rc = 64'h000000000000808b;
                5'd5:  rc = 64'h0000000080000001;
                5'd6:  rc = 64'h8000000080008081;
                5'd7:  rc = 64'h8000000000008009;
                5'd8:  rc = 64'h000000000000008a;
                5'd9:  rc = 64'h0000000000000088;
                5'd10:  rc = 64'h0000000080008009;
                5'd11:  rc = 64'h000000008000000a;
                5'd12:  rc = 64'h000000008000808b;
                5'd13:  rc = 64'h800000000000008b;
                5'd14:  rc = 64'h8000000000008089;
                5'd15:  rc = 64'h8000000000008003;
                5'd16:  rc = 64'h8000000000008002;
                5'd17:  rc = 64'h8000000000000080;
                5'd18:  rc = 64'h000000000000800a;
                5'd19:  rc = 64'h800000008000000a;
                5'd20:  rc = 64'h8000000080008081;
                5'd21:  rc = 64'h8000000000008080;
                5'd22:  rc = 64'h0000000080000001;
                5'd23:  rc = 64'h8000000080008008;
                default: rc = 64'h0000000000000000;
            endcase
        end
    endfunction

    function [63:0] rol64;
        input [63:0] value;
        input integer sh;
        begin
            if (sh == 0)
                rol64 = value;
            else
                rol64 = (value << sh) | (value >> (64 - sh));
        end
    endfunction

    // Convert the flat 1600-bit state into 25 synthesis-friendly 64-bit lanes.
    wire [63:0] state_s_0_0 = state_i[0 +: 64];
    wire [63:0] state_s_0_1 = state_i[320 +: 64];
    wire [63:0] state_s_0_2 = state_i[640 +: 64];
    wire [63:0] state_s_0_3 = state_i[960 +: 64];
    wire [63:0] state_s_0_4 = state_i[1280 +: 64];
    wire [63:0] state_s_1_0 = state_i[64 +: 64];
    wire [63:0] state_s_1_1 = state_i[384 +: 64];
    wire [63:0] state_s_1_2 = state_i[704 +: 64];
    wire [63:0] state_s_1_3 = state_i[1024 +: 64];
    wire [63:0] state_s_1_4 = state_i[1344 +: 64];
    wire [63:0] state_s_2_0 = state_i[128 +: 64];
    wire [63:0] state_s_2_1 = state_i[448 +: 64];
    wire [63:0] state_s_2_2 = state_i[768 +: 64];
    wire [63:0] state_s_2_3 = state_i[1088 +: 64];
    wire [63:0] state_s_2_4 = state_i[1408 +: 64];
    wire [63:0] state_s_3_0 = state_i[192 +: 64];
    wire [63:0] state_s_3_1 = state_i[512 +: 64];
    wire [63:0] state_s_3_2 = state_i[832 +: 64];
    wire [63:0] state_s_3_3 = state_i[1152 +: 64];
    wire [63:0] state_s_3_4 = state_i[1472 +: 64];
    wire [63:0] state_s_4_0 = state_i[256 +: 64];
    wire [63:0] state_s_4_1 = state_i[576 +: 64];
    wire [63:0] state_s_4_2 = state_i[896 +: 64];
    wire [63:0] state_s_4_3 = state_i[1216 +: 64];
    wire [63:0] state_s_4_4 = state_i[1536 +: 64];

    // THETA
    wire [63:0] theta_mix_0 = (state_s_4_0 ^ state_s_4_1 ^ state_s_4_2 ^ state_s_4_3 ^ state_s_4_4) ^ (rol64(state_s_1_0, 1) ^ rol64(state_s_1_1, 1) ^ rol64(state_s_1_2, 1) ^ rol64(state_s_1_3, 1) ^ rol64(state_s_1_4, 1));
    wire [63:0] theta_mix_1 = (state_s_0_0 ^ state_s_0_1 ^ state_s_0_2 ^ state_s_0_3 ^ state_s_0_4) ^ (rol64(state_s_2_0, 1) ^ rol64(state_s_2_1, 1) ^ rol64(state_s_2_2, 1) ^ rol64(state_s_2_3, 1) ^ rol64(state_s_2_4, 1));
    wire [63:0] theta_mix_2 = (state_s_1_0 ^ state_s_1_1 ^ state_s_1_2 ^ state_s_1_3 ^ state_s_1_4) ^ (rol64(state_s_3_0, 1) ^ rol64(state_s_3_1, 1) ^ rol64(state_s_3_2, 1) ^ rol64(state_s_3_3, 1) ^ rol64(state_s_3_4, 1));
    wire [63:0] theta_mix_3 = (state_s_2_0 ^ state_s_2_1 ^ state_s_2_2 ^ state_s_2_3 ^ state_s_2_4) ^ (rol64(state_s_4_0, 1) ^ rol64(state_s_4_1, 1) ^ rol64(state_s_4_2, 1) ^ rol64(state_s_4_3, 1) ^ rol64(state_s_4_4, 1));
    wire [63:0] theta_mix_4 = (state_s_3_0 ^ state_s_3_1 ^ state_s_3_2 ^ state_s_3_3 ^ state_s_3_4) ^ (rol64(state_s_0_0, 1) ^ rol64(state_s_0_1, 1) ^ rol64(state_s_0_2, 1) ^ rol64(state_s_0_3, 1) ^ rol64(state_s_0_4, 1));
    wire [63:0] theta_0_0 = state_s_0_0 ^ theta_mix_0;
    wire [63:0] theta_0_1 = state_s_0_1 ^ theta_mix_0;
    wire [63:0] theta_0_2 = state_s_0_2 ^ theta_mix_0;
    wire [63:0] theta_0_3 = state_s_0_3 ^ theta_mix_0;
    wire [63:0] theta_0_4 = state_s_0_4 ^ theta_mix_0;
    wire [63:0] theta_1_0 = state_s_1_0 ^ theta_mix_1;
    wire [63:0] theta_1_1 = state_s_1_1 ^ theta_mix_1;
    wire [63:0] theta_1_2 = state_s_1_2 ^ theta_mix_1;
    wire [63:0] theta_1_3 = state_s_1_3 ^ theta_mix_1;
    wire [63:0] theta_1_4 = state_s_1_4 ^ theta_mix_1;
    wire [63:0] theta_2_0 = state_s_2_0 ^ theta_mix_2;
    wire [63:0] theta_2_1 = state_s_2_1 ^ theta_mix_2;
    wire [63:0] theta_2_2 = state_s_2_2 ^ theta_mix_2;
    wire [63:0] theta_2_3 = state_s_2_3 ^ theta_mix_2;
    wire [63:0] theta_2_4 = state_s_2_4 ^ theta_mix_2;
    wire [63:0] theta_3_0 = state_s_3_0 ^ theta_mix_3;
    wire [63:0] theta_3_1 = state_s_3_1 ^ theta_mix_3;
    wire [63:0] theta_3_2 = state_s_3_2 ^ theta_mix_3;
    wire [63:0] theta_3_3 = state_s_3_3 ^ theta_mix_3;
    wire [63:0] theta_3_4 = state_s_3_4 ^ theta_mix_3;
    wire [63:0] theta_4_0 = state_s_4_0 ^ theta_mix_4;
    wire [63:0] theta_4_1 = state_s_4_1 ^ theta_mix_4;
    wire [63:0] theta_4_2 = state_s_4_2 ^ theta_mix_4;
    wire [63:0] theta_4_3 = state_s_4_3 ^ theta_mix_4;
    wire [63:0] theta_4_4 = state_s_4_4 ^ theta_mix_4;

    // RHO + PI
    wire [63:0] pi_0_0 = theta_0_0;
    wire [63:0] pi_1_3 = rol64(theta_0_1, 36);
    wire [63:0] pi_2_1 = rol64(theta_0_2, 3);
    wire [63:0] pi_3_4 = rol64(theta_0_3, 41);
    wire [63:0] pi_4_2 = rol64(theta_0_4, 18);
    wire [63:0] pi_0_2 = rol64(theta_1_0, 1);
    wire [63:0] pi_1_0 = rol64(theta_1_1, 44);
    wire [63:0] pi_2_3 = rol64(theta_1_2, 10);
    wire [63:0] pi_3_1 = rol64(theta_1_3, 45);
    wire [63:0] pi_4_4 = rol64(theta_1_4, 2);
    wire [63:0] pi_0_4 = rol64(theta_2_0, 62);
    wire [63:0] pi_1_2 = rol64(theta_2_1, 6);
    wire [63:0] pi_2_0 = rol64(theta_2_2, 43);
    wire [63:0] pi_3_3 = rol64(theta_2_3, 15);
    wire [63:0] pi_4_1 = rol64(theta_2_4, 61);
    wire [63:0] pi_0_1 = rol64(theta_3_0, 28);
    wire [63:0] pi_1_4 = rol64(theta_3_1, 55);
    wire [63:0] pi_2_2 = rol64(theta_3_2, 25);
    wire [63:0] pi_3_0 = rol64(theta_3_3, 21);
    wire [63:0] pi_4_3 = rol64(theta_3_4, 56);
    wire [63:0] pi_0_3 = rol64(theta_4_0, 27);
    wire [63:0] pi_1_1 = rol64(theta_4_1, 20);
    wire [63:0] pi_2_4 = rol64(theta_4_2, 39);
    wire [63:0] pi_3_2 = rol64(theta_4_3, 8);
    wire [63:0] pi_4_0 = rol64(theta_4_4, 14);

    // CHI
    wire [63:0] chi_0_0 = pi_0_0 ^ (~pi_1_0 & pi_2_0);
    wire [63:0] chi_0_1 = pi_0_1 ^ (~pi_1_1 & pi_2_1);
    wire [63:0] chi_0_2 = pi_0_2 ^ (~pi_1_2 & pi_2_2);
    wire [63:0] chi_0_3 = pi_0_3 ^ (~pi_1_3 & pi_2_3);
    wire [63:0] chi_0_4 = pi_0_4 ^ (~pi_1_4 & pi_2_4);
    wire [63:0] chi_1_0 = pi_1_0 ^ (~pi_2_0 & pi_3_0);
    wire [63:0] chi_1_1 = pi_1_1 ^ (~pi_2_1 & pi_3_1);
    wire [63:0] chi_1_2 = pi_1_2 ^ (~pi_2_2 & pi_3_2);
    wire [63:0] chi_1_3 = pi_1_3 ^ (~pi_2_3 & pi_3_3);
    wire [63:0] chi_1_4 = pi_1_4 ^ (~pi_2_4 & pi_3_4);
    wire [63:0] chi_2_0 = pi_2_0 ^ (~pi_3_0 & pi_4_0);
    wire [63:0] chi_2_1 = pi_2_1 ^ (~pi_3_1 & pi_4_1);
    wire [63:0] chi_2_2 = pi_2_2 ^ (~pi_3_2 & pi_4_2);
    wire [63:0] chi_2_3 = pi_2_3 ^ (~pi_3_3 & pi_4_3);
    wire [63:0] chi_2_4 = pi_2_4 ^ (~pi_3_4 & pi_4_4);
    wire [63:0] chi_3_0 = pi_3_0 ^ (~pi_4_0 & pi_0_0);
    wire [63:0] chi_3_1 = pi_3_1 ^ (~pi_4_1 & pi_0_1);
    wire [63:0] chi_3_2 = pi_3_2 ^ (~pi_4_2 & pi_0_2);
    wire [63:0] chi_3_3 = pi_3_3 ^ (~pi_4_3 & pi_0_3);
    wire [63:0] chi_3_4 = pi_3_4 ^ (~pi_4_4 & pi_0_4);
    wire [63:0] chi_4_0 = pi_4_0 ^ (~pi_0_0 & pi_1_0);
    wire [63:0] chi_4_1 = pi_4_1 ^ (~pi_0_1 & pi_1_1);
    wire [63:0] chi_4_2 = pi_4_2 ^ (~pi_0_2 & pi_1_2);
    wire [63:0] chi_4_3 = pi_4_3 ^ (~pi_0_3 & pi_1_3);
    wire [63:0] chi_4_4 = pi_4_4 ^ (~pi_0_4 & pi_1_4);

    // IOTA
    wire [63:0] iota_0_0 = chi_0_0 ^ rc(round_cnt_i);
    wire [63:0] iota_0_1 = chi_0_1;
    wire [63:0] iota_0_2 = chi_0_2;
    wire [63:0] iota_0_3 = chi_0_3;
    wire [63:0] iota_0_4 = chi_0_4;
    wire [63:0] iota_1_0 = chi_1_0;
    wire [63:0] iota_1_1 = chi_1_1;
    wire [63:0] iota_1_2 = chi_1_2;
    wire [63:0] iota_1_3 = chi_1_3;
    wire [63:0] iota_1_4 = chi_1_4;
    wire [63:0] iota_2_0 = chi_2_0;
    wire [63:0] iota_2_1 = chi_2_1;
    wire [63:0] iota_2_2 = chi_2_2;
    wire [63:0] iota_2_3 = chi_2_3;
    wire [63:0] iota_2_4 = chi_2_4;
    wire [63:0] iota_3_0 = chi_3_0;
    wire [63:0] iota_3_1 = chi_3_1;
    wire [63:0] iota_3_2 = chi_3_2;
    wire [63:0] iota_3_3 = chi_3_3;
    wire [63:0] iota_3_4 = chi_3_4;
    wire [63:0] iota_4_0 = chi_4_0;
    wire [63:0] iota_4_1 = chi_4_1;
    wire [63:0] iota_4_2 = chi_4_2;
    wire [63:0] iota_4_3 = chi_4_3;
    wire [63:0] iota_4_4 = chi_4_4;

    // Convert lanes back into the flat output state.
    assign state_o[0 +: 64] = iota_0_0;
    assign state_o[320 +: 64] = iota_0_1;
    assign state_o[640 +: 64] = iota_0_2;
    assign state_o[960 +: 64] = iota_0_3;
    assign state_o[1280 +: 64] = iota_0_4;
    assign state_o[64 +: 64] = iota_1_0;
    assign state_o[384 +: 64] = iota_1_1;
    assign state_o[704 +: 64] = iota_1_2;
    assign state_o[1024 +: 64] = iota_1_3;
    assign state_o[1344 +: 64] = iota_1_4;
    assign state_o[128 +: 64] = iota_2_0;
    assign state_o[448 +: 64] = iota_2_1;
    assign state_o[768 +: 64] = iota_2_2;
    assign state_o[1088 +: 64] = iota_2_3;
    assign state_o[1408 +: 64] = iota_2_4;
    assign state_o[192 +: 64] = iota_3_0;
    assign state_o[512 +: 64] = iota_3_1;
    assign state_o[832 +: 64] = iota_3_2;
    assign state_o[1152 +: 64] = iota_3_3;
    assign state_o[1472 +: 64] = iota_3_4;
    assign state_o[256 +: 64] = iota_4_0;
    assign state_o[576 +: 64] = iota_4_1;
    assign state_o[896 +: 64] = iota_4_2;
    assign state_o[1216 +: 64] = iota_4_3;
    assign state_o[1536 +: 64] = iota_4_4;

endmodule
