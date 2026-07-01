// Copyright 2026, Technical University of Munich
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1

`ifndef SHA3_DEFINES_VH
`define SHA3_DEFINES_VH

`define SHA3_224_RATE       144
`define SHA3_256_RATE       136
`define SHA3_384_RATE       104
`define SHA3_512_RATE       72
`define SHAKE128_RATE       168
`define SHAKE256_RATE       136

`define SHA3_SUFFIX         8'h06
`define SHA3_SUFFIX_WORD    32'h06060606
`define SHAKE_SUFFIX        8'h1f
`define SHAKE_SUFFIX_WORD   32'h1f1f1f1f
`define SHA3_PADD           8'h80

`define M_SHA3_224          3'd0
`define M_SHA3_256          3'd1
`define M_SHA3_384          3'd2
`define M_SHA3_512          3'd3
`define M_SHAKE128          3'd4
`define M_SHAKE256          3'd5
`define M_TURBOSHAKE128     3'd6
`define M_TURBOSHAKE256     3'd7

`define X                   5
`define Y                   5
`define Z                   64
`define ROUNDS              24
`define TURBO_ROUNDS        12
`define MAX_RATE            `SHAKE128_RATE
`define MAX_BLOCK_CNT       57

`define S_IDLE              3'd0
`define S_ABSORB            3'd1
`define S_PERMUTE_A         3'd2
`define S_FINALIZE          3'd3
`define S_PADD              3'd4
`define S_SQUEEZE           3'd5
`define S_PERMUTE_S         3'd6

`endif
