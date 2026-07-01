// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1

`timescale 1ns/1ps
`include "sha3_defines.vh"

module keccak_f1600 (
    input  [1599:0] state_i,
    input  [4:0]    round_cnt_i,
    output [1599:0] state_o
);

    reg [63:0] state_s [0:4][0:4];
    reg [63:0] theta   [0:4][0:4];
    reg [63:0] pi      [0:4][0:4];
    reg [63:0] chi     [0:4][0:4];
    reg [63:0] iota    [0:4][0:4];
    reg [1599:0] state_o_r;

    integer x;
    integer y;
    integer z;
    integer xn;
    integer xp;
    integer zn;
    integer rot;

    assign state_o = state_o_r;

    function integer sc;
        input integer x_i;
        input integer y_i;
        begin
            case (x_i)
                0: begin
                    case (y_i)
                        0: sc = 0;
                        1: sc = 36;
                        2: sc = 3;
                        3: sc = 41;
                        default: sc = 18;
                    endcase
                end
                1: begin
                    case (y_i)
                        0: sc = 1;
                        1: sc = 44;
                        2: sc = 10;
                        3: sc = 45;
                        default: sc = 2;
                    endcase
                end
                2: begin
                    case (y_i)
                        0: sc = 62;
                        1: sc = 6;
                        2: sc = 43;
                        3: sc = 15;
                        default: sc = 61;
                    endcase
                end
                3: begin
                    case (y_i)
                        0: sc = 28;
                        1: sc = 55;
                        2: sc = 25;
                        3: sc = 21;
                        default: sc = 56;
                    endcase
                end
                default: begin
                    case (y_i)
                        0: sc = 27;
                        1: sc = 20;
                        2: sc = 39;
                        3: sc = 8;
                        default: sc = 14;
                    endcase
                end
            endcase
        end
    endfunction

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
                5'd10: rc = 64'h0000000080008009;
                5'd11: rc = 64'h000000008000000a;
                5'd12: rc = 64'h000000008000808b;
                5'd13: rc = 64'h800000000000008b;
                5'd14: rc = 64'h8000000000008089;
                5'd15: rc = 64'h8000000000008003;
                5'd16: rc = 64'h8000000000008002;
                5'd17: rc = 64'h8000000000000080;
                5'd18: rc = 64'h000000000000800a;
                5'd19: rc = 64'h800000008000000a;
                5'd20: rc = 64'h8000000080008081;
                5'd21: rc = 64'h8000000000008080;
                5'd22: rc = 64'h0000000080000001;
                5'd23: rc = 64'h8000000080008008;
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

    always @* begin
        for (x = 0; x < 5; x = x + 1) begin
            for (y = 0; y < 5; y = y + 1) begin
                for (z = 0; z < 8; z = z + 1) begin
                    state_s[x][y][8*z +: 8] = state_i[8*(x*8 + y*40 + z) +: 8];
                end
            end
        end

        for (x = 0; x < 5; x = x + 1) begin
            xn = (5 + x - 1) % 5;
            xp = (x + 1) % 5;
            for (y = 0; y < 5; y = y + 1) begin
                for (z = 0; z < 64; z = z + 1) begin
                    zn = (64 + z - 1) % 64;
                    theta[x][y][z] = state_s[x][y][z]
                                    ^ (state_s[xn][0][z] ^ state_s[xn][1][z] ^ state_s[xn][2][z] ^ state_s[xn][3][z] ^ state_s[xn][4][z])
                                    ^ (state_s[xp][0][zn] ^ state_s[xp][1][zn] ^ state_s[xp][2][zn] ^ state_s[xp][3][zn] ^ state_s[xp][4][zn]);
                end
            end
        end

        for (x = 0; x < 5; x = x + 1) begin
            for (y = 0; y < 5; y = y + 1) begin
                rot = sc(x, y);
                if (rot == 0) begin
                    pi[y][(2*x + 3*y) % 5] = theta[x][y];
                end else begin
                    pi[y][(2*x + 3*y) % 5] = rol64(theta[x][y], rot);
                end
            end
        end

        for (x = 0; x < 5; x = x + 1) begin
            for (y = 0; y < 5; y = y + 1) begin
                chi[x][y] = pi[x][y] ^ (~pi[(x+1) % 5][y] & pi[(x+2) % 5][y]);
            end
        end

        for (x = 0; x < 5; x = x + 1) begin
            for (y = 0; y < 5; y = y + 1) begin
                if (x == 0 && y == 0)
                    iota[x][y] = chi[x][y] ^ rc(round_cnt_i);
                else
                    iota[x][y] = chi[x][y];
            end
        end

        state_o_r = 1600'd0;
        for (x = 0; x < 5; x = x + 1) begin
            for (y = 0; y < 5; y = y + 1) begin
                for (z = 0; z < 8; z = z + 1) begin
                    state_o_r[8*(x*8 + y*40 + z) +: 8] = iota[x][y][8*z +: 8];
                end
            end
        end
    end

endmodule
