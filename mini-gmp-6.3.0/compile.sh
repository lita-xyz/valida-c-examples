#!/bin/bash

set -e
set -x

# execute this script with env so that path of delendum toolchain is prepended to PATH

clang -O0 -std=c11 -DMINI_GMP_DONT_USE_FLOAT_H -target delendum -I. -c mini-gmp.c -o mini-gmp.o
clang -O0 -std=c11 -DMINI_GMP_DONT_USE_FLOAT_H -target delendum -I. -c mini-mpq.c -o mini-mpq.o

