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
