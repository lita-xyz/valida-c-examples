#!/bin/bash

set -e
set -x

# execute this script with env so that path of delendum toolchain is prepended to PATH

CC=../../llvm-valida/build/bin/clang
CFLAGS="-std=c11 -nostdinc -DMINI_GMP_DONT_USE_FLOAT_H -target delendum -I../../llvm-valida/build-libc/projects/libc/include -O0"
$CC $CFLAGS -c mini-gmp.c -o mini-gmp.o
$CC $CFLAGS -std=c11 -DMINI_GMP_DONT_USE_FLOAT_H -target delendum -I. -c mini-mpq.c -o mini-mpq.o

