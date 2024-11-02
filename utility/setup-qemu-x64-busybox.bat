chcp 65001 && "C:\Program Files\qemu\qemu-system-x86_64.exe" -bios "Build\OvmfX64\DEBUG_VS2013x86\FV\OVMF.fd" -M "pc" -m 256 -cpu "qemu64" -boot order=dc -serial stdio -hda csdn_busybox.img
