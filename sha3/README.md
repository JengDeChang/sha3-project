# SHA-3 Implementation

This directory contains a simple, proof-of-concept SHA-3 implementation in SystemVerilog with additional support for TURBOShake128 and TURBOShake256.

The top-level ports 'inblocks', 'inlen_partial', 'outblocks' and 'outlen_partial' are by default 16-bit values for convenient alignment and need to be adjusted
accordingly if the width is not sufficient.
