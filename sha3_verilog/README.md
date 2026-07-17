# SHA-3 Verilog Implementation

This directory is a Verilog-oriented rewrite of `../sha3`.

The top-level module and port names are preserved:

- `sha3`
- `keccak_f1600`
- AXI-style stream ports such as `s_axis_tdata`, `s_axis_tkeep`, `s_axis_tvalid`, `s_axis_tready`, `m_axis_tdata`, `m_axis_tkeep`, `m_axis_tvalid`, and `m_axis_tready`

The original package constants, mode names, FSM state names, round constants, timing control, counters, and FSM transitions are kept in Verilog-compatible form.

## Verilator Regression (`tb.sv`)

Run the vector-driven SystemVerilog testbench from the `sha3_verilog`
directory. The
testbench includes `sha3_defines.vh` directly and does not require
`sha3/sha3_pkg.sv`.

```sh
cd /home/edmund/Projects/sha3-project/sha3_verilog
source ~/EDA/oss-cad-suite/environment

verilator --binary --timing --trace -Wno-fatal \
  -I. \
  --Mdir obj_dir \
  keccak_f1600.v \
  sha3.v \
  sim/tb.sv \
  --top-module tb
```

Run the T1 boundary/protocol regression (88 vectors):

```sh
./obj_dir/Vtb +vector_set=t1
```

Run the T2 exhaustive input-length sweep (1,080 vectors):

```sh
./obj_dir/Vtb +vector_set=t2
```

Run one vector or enable waveform dumping for debugging:

```sh
./obj_dir/Vtb +vector_set=t2 +case=13
./obj_dir/Vtb +vector_set=t2 +case=13 +dump
```

The selected vectors are read from `sim/vectors/t1/` or `sim/vectors/t2/`.
The `+dump` option writes `sim/out/tb.vcd`.

## Icarus Verilog

Run simulations from this directory:

```sh
cd /home/edmund/Projects/sha3-project/sha3_verilog
source ~/EDA/oss-cad-suite/environment
mkdir -p sim/out
```

### Smoke Test

The smoke test is a quick SHA3-256 check for the empty message and `"abc"`:

```sh
iverilog -g2012 -I . -o sim/out/smoke_tb.vvp \
  keccak_f1600.v \
  sha3.v \
  sim/smoke_tb.v
vvp sim/out/smoke_tb.vvp
```

`sha3_defines.vh` is required by the RTL and testbench through
`` `include "sha3_defines.vh" ``. It is not passed as a separate source file;
the `-I .` option tells Icarus Verilog to search this directory for the
included header.

The smoke test writes `sim/out/smoke_tb.vcd`.

### Vector Regression (`tb.sv`)

The same `sim/tb.sv` used by Verilator can also be compiled in Icarus
SystemVerilog 2012 mode. Run these commands from the `sha3_verilog` directory:

```sh
cd /home/edmund/Projects/sha3-project/sha3_verilog
source ~/EDA/oss-cad-suite/environment
mkdir -p sim/out

iverilog -g2012 -I . \
  -o sim/out/tb.vvp \
  keccak_f1600.v \
  sha3.v \
  sim/tb.sv
```

Run the complete T1 or T2 vector set:

```sh
vvp sim/out/tb.vvp +vector_set=t1
vvp sim/out/tb.vvp +vector_set=t2
```

Run a single vector or enable waveform dumping:

```sh
vvp sim/out/tb.vvp +vector_set=t2 +case=13
vvp sim/out/tb.vvp +vector_set=t2 +case=13 +dump
```

T1 contains 88 vectors and T2 contains 1,080 vectors. The `+dump` option
writes `sim/out/tb.vcd`.

### Regression Test

The legacy `sim/regression_tb.v` test reads external test vectors from
`sim/vectors/` and covers
all modes, partial input words, rate-boundary lengths, multi-block input,
multi-block SHAKE/TurboSHAKE output, input bubbles, output backpressure, and
partial output `tkeep` checks.

```sh
iverilog -g2012 -I . -o sim/out/regression_tb.vvp \
  keccak_f1600.v \
  sha3.v \
  sim/regression_tb.v
vvp sim/out/regression_tb.vvp
```

Run a single vector by index:

```sh
vvp sim/out/regression_tb.vvp +case=13
```

Enable waveform dumping only when debugging:

```sh
vvp sim/out/regression_tb.vvp +case=13 +dump
```

Regression vectors are split into:

- `sim/vectors/regression_count.hex`: number of active vectors
- `sim/vectors/regression_meta.hex`: flags, mode, input length, and output length
- `sim/vectors/regression_input.hex`: input bytes, fixed-size slots per vector
- `sim/vectors/regression_expected.hex`: expected output bytes, fixed-size slots per vector

Regenerate the vectors and golden outputs with:

```sh
python3 sim/scripts/generate_regression_vectors.py
```

Golden-data provenance:

- SHA3-224/256/384/512 and SHAKE128/256 vectors are generated with Python
  `hashlib`, which implements the FIPS 202 SHA-3/SHAKE functions.
- TurboSHAKE128/256 vectors are generated with the Keccak-p[1600,12] sponge
  model in `sim/scripts/generate_regression_vectors.py`, following RFC 9861.
- The generator runs known-answer self-checks before writing vector files.

Simulation build products and waveforms are written under `sim/out/`.
