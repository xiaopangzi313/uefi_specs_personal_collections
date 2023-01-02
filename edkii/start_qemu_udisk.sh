qemu-system-x86_64 -bios ./Build/OvmfX64/DEBUG_GCC48/FV/OVMF.fd -serial stdio -usb -drive if=none,format=raw,id=disk1,file=HDD_BOOT.img -device usb-storage,drive=disk1
