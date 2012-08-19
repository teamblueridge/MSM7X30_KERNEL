#!/bin/bash

echo "****Start building****"
echo "****Cleaning****"

rm output/primoc-ics/boot.img-kernel
rm output/primoc-ics/out/ramdisk-new.gz
rm output/primocfiles/system/lib/modules/bcmdhd.ko
rm output/primocfiles/boot.img
rm output/primoc/boot_new.img
make clean mrproper

START=$(date +%s)
echo "****Building****"

make ARCH=arm primoc_defconfig
make -j16

echo "****Creating boot image****"
cp arch/arm/boot/zImage output/primoc-ics/boot.img-kernel
cp drivers/net/wireless/bcmdhd/bcmdhd.ko output/primocfiles/system/lib/modules/bcmdhd.ko
cd output/primoc-ics
./packboot
cd ..
cd ..
cp output/primoc-ics/boot_new.img output/primocfiles/boot.img
cd output/primocfiles
zip -q -r Jmz-Kernel-primoc-$(date +%m%d%y).zip .
cd ..
cd ..
mv output/primocfiles/Jmz-Kernel-primoc-$(date +%m%d%y).zip output/Jmz-Kernel-primoc-$(date +%m%d%y).zip

echo "****Compile done****"
echo "****Kernel and modules are in output/****"
END=$(date +%s)
ELAPSED=$((END - START))
E_MIN=$((ELAPSED / 60))
E_SEC=$((ELAPSED - E_MIN * 60))
printf "Elapsed: "
[ $E_MIN != 0 ] && printf "%d min(s) " $E_MIN
printf "%d sec(s)\n" $E_SEC
read -n 1 -p "Press any key to continue"
