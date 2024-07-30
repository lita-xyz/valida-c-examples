#!/bin/bash

set -e

# execute this script with env so that path of delendum toolchain is prepended to PATH

opt="--sysroot=/delendum-toolchain/ -target delendum -isystem /delendum-toolchain/include"

cd blst
CC=/delendum-toolchain/bin/clang CFLAGS="$opt" ./build.sh -D__BLST_PORTABLE__
