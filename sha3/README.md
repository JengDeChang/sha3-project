# SHA-3 Implementation

## Reference / Attribution

This SystemVerilog SHA-3 hardware design is based on the `crypto-implementations`
project from TUEISEC at the Technical University of Munich:

https://gitlab.lrz.de/tueisec/crypto-implementations

The original source files in this directory retain their copyright and SPDX
license headers from the upstream project. See `LICENSE` in this directory for
the included Solderpad Hardware License v2.1 / Apache-2.0 license text.

This directory contains a simple, proof-of-concept SHA-3 implementation in SystemVerilog with additional support for TURBOShake128 and TURBOShake256.

The top-level ports 'inblocks', 'inlen_partial', 'outblocks' and 'outlen_partial' are by default 16-bit values for convenient alignment and need to be adjusted
accordingly if the width is not sufficient.

## Verilator Simulation

Run the SystemVerilog regression testbench from the `sha3` directory:

```sh
cd /home/edmund/Projects/sha3-project/sha3
source ~/EDA/oss-cad-suite/environment
```

Build the testbench:

```sh
verilator --binary --timing -Wno-fatal -I. \
  --Mdir obj_dir \
  sha3_pkg.sv \
  keccak_f1600.sv \
  sha3.sv \
  sim/tb.sv \
  --top-module tb
```

Run the default regression vector set:

```sh
./obj_dir/Vtb
```

The default vector set is `t1`, which is the boundary/regression test set.
Select a vector set explicitly with `+vector_set`:

```sh
./obj_dir/Vtb +vector_set=t1
./obj_dir/Vtb +vector_set=t2
```

Run a single vector by index:

```sh
./obj_dir/Vtb +vector_set=t2 +case=13
```

Enable waveform dumping only when debugging:

```sh
./obj_dir/Vtb +vector_set=t2 +case=13 +dump
```

The testbench reads vectors from:

- `sim/vectors/t1/`
- `sim/vectors/t2/`

Each vector directory contains:

- `regression_count.hex`: number of active vectors
- `regression_meta.hex`: flags, mode, input length, and output length
- `regression_input.hex`: input bytes, fixed-size slots per vector
- `regression_expected.hex`: expected output bytes, fixed-size slots per vector

## Regression Vector Generation

Generate vectors from the `sha3` directory:

```sh
cd /home/edmund/Projects/sha3-project/sha3
python3 sim/scripts/generate_regression_vectors.py --vector-set t1
python3 sim/scripts/generate_regression_vectors.py --vector-set t2
```

Generate both vector sets at once:

```sh
python3 sim/scripts/generate_regression_vectors.py --vector-set all
```

Vector set meaning:

- `t1`: existing boundary/regression cases covering all modes, rate-boundary
  lengths, multi-block input, XOF multi-block output, input bubbles, output
  backpressure, and partial output checks.
- `t2`: exhaustive input-length sweep for every mode from `input_len = 0` to
  `input_len = rate + 1`.

Golden-data provenance:

- SHA3-224/256/384/512 and SHAKE128/256 vectors are generated with Python
  `hashlib`, which implements the FIPS 202 SHA-3/SHAKE functions.
- TurboSHAKE128/256 vectors are generated with the Keccak-p[1600,12] sponge
  model in `sim/scripts/generate_regression_vectors.py`, following RFC 9861.
- The generator runs known-answer self-checks before writing vector files.
