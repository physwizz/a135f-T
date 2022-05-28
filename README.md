
# a135f-T
=======

a127 a217 m127 f127 a135f

1. Edit makefile to 


CROSS_COMPILE= ~/toolchains-for-exynos-850/aarch64-linux-android-4.9/bin/aarch64-linux-android-

CC= ~/toolchains/toolchains-for-exynos-850/android_prebuilts_clang_host_linux-x86_clang-5484270-9.0/bin/clang

CLANG_TRIPLE=aarch64-linux-gnu-

2. Build


sudo apt install pip

pip install virtualenv

export PATH=$PATH:/home/physwizz/.local/bin

apt install python3-virtualenv

sudo apt install python2.7

sudo -s

which python2.7

which python3


virtualenv -p /usr/bin/python2.7 Vpy27


source Vpy27/bin/activate


make clean && make mrproper
export PLATFORM_VERSION=13
export ANDROID_MAJOR_VERSION=t
export ARCH=arm64
make physwizz_defconfig
make

 dtb
=========

make clean && make mrproper
export PLATFORM_VERSION=11
export ANDROID_MAJOR_VERSION=r
export ARCH=arm64
export DTB_LOC= ~/a127f/arch/arm64/boot/dts
export TOOLS_LOC=$(pwd)/scripts/tools/bin
make physwizz_defconfig
make

$TOOLS_LOC/mkdtboimg.py cfg_create $DTB_LOC/dtb.img --dtb-dir $DTB_LOC/exynos $TOOLS_LOC/dtb.cfg

