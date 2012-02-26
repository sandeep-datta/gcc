#!/bin/bash
cd build
echo $PWD
make -j6  install-binutils install-gas install-ld install-gcc \
	install-target-newlib install-target-libgloss install-gdb

cd ..