# SHA-3 Verilog Implementation

This directory is a Verilog-oriented rewrite of `../sha3`.

The top-level module and port names are preserved:

- `sha3`
- `keccak_f1600`
- AXI-style stream ports such as `s_axis_tdata`, `s_axis_tkeep`, `s_axis_tvalid`, `s_axis_tready`, `m_axis_tdata`, `m_axis_tkeep`, `m_axis_tvalid`, and `m_axis_tready`

The original package constants, mode names, FSM state names, round constants, timing control, counters, and FSM transitions are kept in Verilog-compatible form.

## Icarus Verilog

```sh
source ~/EDA/oss-cad-suite/environment
iverilog -g2012 -I sha3_verilog -o /tmp/sha3_verilog_tb.vvp \
  sha3_verilog/keccak_f1600.v \
  sha3_verilog/sha3.v \
  sha3_verilog/sim/tb.v
vvp /tmp/sha3_verilog_tb.vvp
```

The included smoke test checks SHA3-256 empty-message and `"abc"` digest paths.
