#!/bin/bash

set -e

# execute this script with env so that path of delendum toolchain is prepended to PATH

cd blst
CC=clang CFLAGS="-target delendum" ./build.sh -D__BLST_PORTABLE__
