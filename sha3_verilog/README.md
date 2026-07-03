# SHA-3 Verilog Implementation

This directory is a Verilog-oriented rewrite of `../sha3`.

The top-level module and port names are preserved:

- `sha3`
- `keccak_f1600`
- AXI-style stream ports such as `s_axis_tdata`, `s_axis_tkeep`, `s_axis_tvalid`, `s_axis_tready`, `m_axis_tdata`, `m_axis_tkeep`, `m_axis_tvalid`, and `m_axis_tready`

The original package constants, mode names, FSM state names, round constants, timing control, counters, and FSM transitions are kept in Verilog-compatible form.

## Icarus Verilog

Run simulations from this directory:

```sh
cd sha3_verilog
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

### Regression Test

The regression test reads external test vectors from `sim/vectors/` and covers
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
