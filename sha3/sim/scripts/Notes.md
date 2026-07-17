# SHA-3 Regression Test Report

## Testbench Architecture

- `sim/tb.sv` is a vector-driven SystemVerilog testbench for a 32-bit AXI-stream-style interface.
- Test data is loaded from `sim/vectors/<set>/`:
  - `regression_count.hex`: number of test cases.
  - `regression_meta.hex`: flags, mode, input length, output length, and case ID.
  - `regression_input.hex`: input bytes in fixed 512-byte slots.
  - `regression_expected.hex`: golden output bytes in fixed 512-byte slots.
- Each case resets the DUT, derives the input/output block and partial-length controls, sends the message, and compares every valid output byte and `tkeep` value with the golden data.
- The testbench also checks timeout behavior and output stability while backpressure is applied. `+vector_set=t1|t2`, `+case=<id>`, and `+dump` select a suite, a single case, or waveform dumping.
- Traffic behavior is encoded in the metadata flags:
  - `0x00`: continuous input transfers with output ready asserted.
  - `0x01`: continuous input plus one-cycle bubbles before words whose zero-based index is `1 mod 3`.
  - `0x02`: continuous input plus output backpressure for two cycles in every seven-cycle period.
  - `0x03`: both input bubbles and output backpressure.
- During input stalls, the driver holds `s_axis_tvalid`, data, and `tkeep` stable. During output backpressure, the testbench checks that the DUT holds output data and `tkeep` stable.

## Test Coverage

- **T1 — boundary and protocol regression:**
  - **Vectors:** 88 total. Each of the eight modes has eight input-boundary cases (64 vectors), and the four XOF modes have six additional output-length cases each (24 vectors).
  - **Modes:** SHA3-224/256/384/512, SHAKE128/256, and TurboSHAKE128/256.
  - **Input lengths:** `0`, `1`, `3`, `rate - 1`, `rate`, `rate + 1`, `2 * rate + 3`, and `3 * rate + 5` bytes. These cover empty and familiar short messages, padding boundaries, and multi-block absorption.
  - **Output lengths:** SHA3 modes use their fixed digest lengths. XOF modes also test `1`, `rate - 1`, `rate`, `rate + 1`, `2 * rate + 3`, and `3 * rate + 5` bytes to cover partial, boundary, and multi-block squeezing.
  - **Protocol stress:** Cases without the input-bubble flag use continuous, back-to-back input transfers whenever the DUT is ready. Selected cases insert an idle cycle before input words whose zero-based index is `1 mod 3`; independently, selected cases deassert output ready for two cycles in every seven-cycle period.
  - **Primary coverage:** Continuous input throughput, intentional input bubbles, boundary behavior, multi-block operation, partial input/output words, `tkeep` generation, `valid/ready` stalls, and output stability during backpressure.
- **T2 — exhaustive first-rate input-length sweep:**
  - **Vectors:** 1,080 total. Each mode tests every length from `0` through `rate + 1`; the total reflects the different rates of the eight modes.
  - **Modes:** SHA3-224/256/384/512, SHAKE128/256, and TurboSHAKE128/256.
  - **Input lengths:** Every byte length in the inclusive range `0..rate + 1`, including every possible partial length within one rate block and the first two lengths requiring a second absorption block.
  - **Output lengths:** Each mode uses its normal generator output length: 28/32/48/64 bytes for SHA3, 32/64 bytes for SHAKE, and 64 bytes for both TurboSHAKE modes.
  - **Protocol stress:** Uses the same continuous-input default and deterministic input-bubble/output-backpressure flag pattern as T1 across the length sweep.
  - **Primary coverage:** Exhaustive padding positions, 32-bit input packing and `tkeep` values, empty-message handling, and the one-block-to-two-block absorption transition.
- This is functional scenario coverage inferred from the generated vectors. The current testbench does not define SystemVerilog covergroups or report simulator line/toggle/branch coverage.

## Golden Data Generation

- Run from the `sha3` directory:
  - `python3 sim/scripts/generate_regression_vectors.py --vector-set t1`
  - `python3 sim/scripts/generate_regression_vectors.py --vector-set t2`
  - Use `--vector-set all` to regenerate both sets.
- SHA3 and SHAKE golden outputs are produced by Python `hashlib`, following FIPS 202.
- TurboSHAKE golden outputs are produced by the generator's local Keccak-p[1600,12] sponge model, following RFC 9861.
- Before writing files, the generator runs known-answer checks and cross-checks its local sponge against `hashlib`; this is important because the TurboSHAKE model otherwise serves as the reference implementation.
