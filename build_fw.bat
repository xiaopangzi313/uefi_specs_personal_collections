
call edk2\edksetup.bat
set PACKAGES_PATH=D:\uefi_specs_personal_collections\edk2;D:\uefi_specs_personal_collections\Csdn;
cd Csdn
build -a  X64  -p CsdnPcPkg/CsdnPcPkg.dsc  -D DEBUG_ON_SERIAL_PORT
pause
