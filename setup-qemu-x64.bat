qemu-system-x86_64.exe -bios "Build\OvmfX64\DEBUG_VS2013x86\FV\OVMF.fd"   -M "pc" -m 512 -cpu "qemu64"  -boot order=dc -usbdevice   disk:HDD_BOOT.img -serial stdio 
