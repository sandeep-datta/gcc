#!/bin/bash
if [ ! -d build ];
then
	mkdir build
fi

if [ ! -d srcw ];
then
	./create_srcdir
fi

cd build
TARGET=i386-elf
PREFIX=$HOME/bin/$TARGET
../srcw/configure --target=$TARGET --enable-languages=c,c++ --with-newlib --prefix=$PREFIX

make -j6 all-build all-binutils all-gas all-ld all-gcc all-target-newlib all-target-libgloss all-gdb

cd ..

