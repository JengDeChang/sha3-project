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

module keccak_f1600
    import sha3_pkg::*;
(
    input   logic [7:0] state_i [X*Y*Z/8],
    input   logic [4:0] round_cnt_i,
    output  logic [7:0] state_o [X*Y*Z/8]
);

    /* Intermediate state variables */
    keccak_state_t state_s, theta, rho, pi, chi, iota;

    /* Convert between internal and external state formats */
    for (genvar x=0; x<X; x++) begin
        for (genvar y=0; y<Y; y++) begin
            for (genvar z=0; z<Z/8; z++) begin
                assign state_s[x][y][8*z+7 -: 8] = state_i[x*(Z/8)+ y*(X*Z/8) + z];
                assign state_o[x*(Z/8) + y*(X*Z/8) + z] = iota[x][y][8*z+7 -: 8];
            end
        end
    end

    /* THETA */
    generate
        for (genvar x=0; x<X; x++) begin
            localparam xn = (X+x-1) % X;
            localparam xp = (x+1) % X;
            for (genvar y=0; y<Y; y++) begin
                for (genvar z=0; z<Z; z++) begin
                    localparam zn = (Z+z-1) % Z;
                    assign theta[x][y][z] = state_s[x][y][z]
                                        ^ (state_s[xn][0][z] ^ state_s[xn][1][z] ^ state_s[xn][2][z] ^ state_s[xn][3][z] ^ state_s[xn][4][z])
                                        ^ (state_s[xp][0][zn] ^ state_s[xp][1][zn] ^ state_s[xp][2][zn] ^ state_s[xp][3][zn] ^ state_s[xp][4][zn]);
                end
            end
        end
    endgenerate

    /* RHO + PI */
    generate
        for (genvar x=0; x<X; x++) begin
            for (genvar y=0; y<Y; y++) begin
                localparam int ROT = sc(x, y);
                if (ROT == 0) begin
                    assign pi[y][(2*x + 3*y) % Y] = theta[x][y];
                end else begin
                    assign pi[y][(2*x + 3*y) % Y] =
                        {theta[x][y][Z-1-ROT : 0], theta[x][y][Z-1 -: ROT]};
                end
            end
        end
    endgenerate

    /* CHI */
    generate
        for (genvar x=0; x<X; x++) begin
            for (genvar y=0; y<Y; y++) begin
                assign chi[x][y] = pi[x][y] ^ (~pi[(x+1) % X][y] & pi[(x+2) % X][y]);
            end
        end
    endgenerate

    /* IOTA */
    for (genvar x=0; x<X; x++) begin
        for (genvar y=0; y<Y; y++) begin
            if (x == 0 && y == 0)
                assign iota[x][y] = chi[x][y] ^ rc(round_cnt_i);
            else
                assign iota[x][y] = chi[x][y];
        end
    end
   
endmodule


