#!/bin/bash

set -e
set -x

opt="--sysroot=/delendum-toolchain/ -target delendum -isystem /delendum-toolchain/include"

/delendum-toolchain/bin/clang $opt -O3 -std=c11 -DMINI_GMP_DONT_USE_FLOAT_H -I. -c mini-gmp.c -o mini-gmp.o
/delendum-toolchain/bin/clang $opt -O3 -std=c11 -DMINI_GMP_DONT_USE_FLOAT_H -I. -c mini-mpq.c -o mini-mpq.o

