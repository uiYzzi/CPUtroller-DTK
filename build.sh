#!/bin/bash
cd `dirname $0`

# 编译
echo "开始编译"
mkdir -p build
qmake ./Cputroller-DTK.pro -spec linux-g++ CONFIG+=qtquickcompiler -o build/
cd build/
make
cd ..
echo "编译完成"
echo "-------------------"
#echo "更新翻译"
#lrelease ./translations/*.ts

#打包
echo "构建软件包"
mv build/CPUtrollerDTK dabao/extract/opt/apps/top.yzzi.cputroller/files/
rm -rf build
sh dabao/dabao.sh
mkdir -p outdeb
mv dabao/build/* outdeb/
rm -rf dabao/build
