#!/bin/sh

echo $PWD;

mkdir cmake-build-Release
cd cmake-build-Release
cmake ..
make

