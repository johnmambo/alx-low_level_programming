#!/bin/bash
wget -P .. https://github.com/johnmambo/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../0x18.c/libgiga.so"
