
import os
import sys

root_work_space = os.path.abspath (os.getcwd())

build_cmd_win = """
call edk2\edksetup.bat
set WORKSPACE={}\Csdn
set PACKAGES_PATH={}\edk2;{}\Csdn;
cd Csdn
cmd /c build -a  X64  -p CsdnPcPkg/CsdnPcPkg.dsc  -D DEBUG_ON_SERIAL_PORT
pause
""".format(root_work_space, root_work_space, root_work_space)

lauch_script_win = "{qemu_exe}  -bios {root}\Csdn\Build\OvmfX64\DEBUG_VS2019\FV\OVMF.fd" \
" -M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc -usbdevice   disk:HDD_BOOT.img -serial stdio".format (
    qemu_exe="\"C:\Program Files\qemu\qemu-system-x86_64.exe\"",
    root=root_work_space
)

lauch_script_win_tcp = "{qemu_exe}  -bios {root}\Csdn\Build\OvmfX64\DEBUG_VS2019\FV\OVMF.fd" \
" -M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc -usbdevice   disk:HDD_BOOT.img  -serial telnet:localhost:4321,server,nowait".format (
    qemu_exe="\"C:\Program Files\qemu\qemu-system-x86_64.exe\"",
    root=root_work_space
)

lauch_script_win_busybox = "{qemu_exe}  -bios {root}\Csdn\Build\OvmfX64\DEBUG_VS2019\FV\OVMF.fd" \
" -M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc  -hda csdn_busybox2.img -serial stdio".format (
    qemu_exe="\"C:\Program Files\qemu\qemu-system-x86_64.exe\"",
    root=root_work_space
)

build_cmd_linux = """
call edk2/edksetup.sh
make -C {}/edk2/BaseTools/Source/C
PACKAGES_PATH={}/edk2::{}/Csdn
cd Csdn
build -a  X64  -p CsdnPcPkg/CsdnPcPkg.dsc  -D DEBUG_ON_SERIAL_PORT
pause
""".format(root_work_space, root_work_space, root_work_space)

lauch_script_linux = "{qemu_exe}  -bios {root}/Csdn/Build/OvmfX64/DEBUG_GCC48/FV/OVMF.fd" \
"-M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc -usbdevice   disk:HDD_BOOT.img -serial stdio".format (
    qemu_exe="qemu-system-x86_64",
    root=root_work_space
)

lauch_script_linux_tcp = "{qemu_exe}  -bios {root}/Csdn/Build/OvmfX64/DEBUG_GCC48/FV/OVMF.fd" \
"-M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc -usbdevice   disk:HDD_BOOT.img -serial telnet:localhost:4321,server,nowait".format (
    qemu_exe="qemu-system-x86_64",
    root=root_work_space
)

lauch_script_linux_busybox = "{qemu_exe}  -bios {root}/Csdn/Build/OvmfX64/DEBUG_GCC48/FV/OVMF.fd" \
" -M \"pc\" -m 512 -cpu \"qemu64\"  -boot order=dc  -hda csdn_busybox2.img -serial stdio".format (
    qemu_exe="qemu-system-x86_64",
    root=root_work_space
)

#  "C:\Program Files\qemu\qemu-system-x86_64.exe" -bios "Csdn\Build\OvmfX64\DEBUG_VS2019\FV\OVMF.fd"   
def write_script(_cmd, ofile):
    with open (ofile,  "w") as fw:
        fw.write(_cmd)
    print ("generate {} success!".format(ofile))

def extract_images():
    hdd_7z = os.path.join (root_work_space, "utility", "HDD_BOOT.7z")
    out_hdd_img = os.path.join (root_work_space, "HDD_BOOT.img")

    busybox_7z = os.path.join (root_work_space, "utility", "csdn_busybox.7z")
    out_busybox_7z = os.path.join (root_work_space, "csdn_busybox2.img")
    unzip_7z_exe_x64 =  'C:\\Program\" \"Files\\7-Zip\\7z.exe'
    if not os.path.exists (out_hdd_img):
        print (out_hdd_img)
        decompress_cmd = "{} x {} -o{}".format(
            unzip_7z_exe_x64,
            hdd_7z,
            root_work_space
        )
        os.system(decompress_cmd)
    if not os.path.exists (out_busybox_7z):
        decompress_cmd = "{} x {} -o{}".format(
            unzip_7z_exe_x64,
            busybox_7z,
            root_work_space
        )
        os.system(decompress_cmd)

if sys.platform == 'win32':
    build_script = "0_build_fw.bat"
    lauch_script = "1_lauch_fw.bat"
    lauch_script_tcp = "2_lauch_fw_tcp.bat"
    lauch_script_busybox = "3_lauch_fw_busybox.bat"

    build_script_str = build_cmd_win
    lauch_script_str = lauch_script_win
    lauch_script_tcp_str = lauch_script_win_tcp
    lauch_script_busybox_str = lauch_script_win_busybox
else:
    build_script = "0_build_fw.sh"
    lauch_script = "1_lauch_fw.sh"
    lauch_script_tcp = "2_lauch_fw_tcp.sh"
    lauch_script_busybox = "3_lauch_fw_busybox.sh"

    build_script_str = build_cmd_linux
    lauch_script_str = lauch_script_linux
    lauch_script_tcp_str = lauch_script_linux_tcp
    lauch_script_busybox_str = lauch_script_win_busybox
    
if __name__ == "__main__":
    write_script (build_script_str, build_script)
    write_script (lauch_script_str, lauch_script)
    write_script (lauch_script_tcp_str, lauch_script_tcp)
    write_script (lauch_script_busybox_str, lauch_script_busybox)
    extract_images()