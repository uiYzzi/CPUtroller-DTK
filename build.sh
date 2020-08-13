#!/bin/bash
cd `dirname $0`
mkdir -p build
qmake ./Cputroller-DTK.pro -spec linux-g++ CONFIG+=qtquickcompiler -o build/
cd build/
make
