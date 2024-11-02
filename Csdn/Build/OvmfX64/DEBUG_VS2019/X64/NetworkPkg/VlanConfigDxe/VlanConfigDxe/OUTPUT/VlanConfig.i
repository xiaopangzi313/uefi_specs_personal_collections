#line 1 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfig.vfr"
#line 1 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\VlanConfigDxe\\VlanConfigDxe\\DEBUG\\VlanConfigDxeStrDefs.h"




































extern unsigned char VlanConfigDxeStrings[];




























#line 67 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\VlanConfigDxe\\VlanConfigDxe\\DEBUG\\VlanConfigDxeStrDefs.h"

#line 69 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\VlanConfigDxe\\VlanConfigDxe\\DEBUG\\VlanConfigDxeStrDefs.h"
#line 1 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfig.vfr"








#line 1 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfigNvData.h"











#line 1 "D:\\uefi_specs_personal_collections\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"



























extern EFI_GUID  gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID  gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID  gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID  gEfiHiiRestStyleFormsetGuid;

#line 34 "D:\\uefi_specs_personal_collections\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"
#line 13 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfigNvData.h"
#line 1 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\Include\\Guid/VlanConfigHii.h"
















extern EFI_GUID  { 0xd79df6b0, 0xef44, 0x43bd, { 0x97, 0x97, 0x43, 0xe9, 0x3b, 0xcf, 0x5f, 0xa8 }};

#line 20 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\Include\\Guid/VlanConfigHii.h"
#line 14 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfigNvData.h"




















typedef struct {
  UINT16    VlanId;
  UINT8     Priority;
  UINT8     VlanList[100];
} VLAN_CONFIGURATION;

#line 41 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfigNvData.h"
#line 10 "D:\\uefi_specs_personal_collections\\edk2\\NetworkPkg\\VlanConfigDxe\\VlanConfig.vfr"

formset
  guid      = { 0xd79df6b0, 0xef44, 0x43bd, {0x97, 0x97, 0x43, 0xe9, 0x3b, 0xcf, 0x5f, 0xa8 } },
  title     = STRING_TOKEN(0x0002),
  help      = STRING_TOKEN(0x0003),
  classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },

  varstore VLAN_CONFIGURATION,
    varid = 0x0001,
    name  = VlanNvData,
    guid  = { 0xd79df6b0, 0xef44, 0x43bd, {0x97, 0x97, 0x43, 0xe9, 0x3b, 0xcf, 0x5f, 0xa8 } };

  form formid = 0x0002,
    title  = STRING_TOKEN(0x0004);

    goto 0x0001,
    prompt = STRING_TOKEN (0x0012),
    help   = STRING_TOKEN (0x0013),
    flags  = INTERACTIVE,
    key    = 0x3000;

  endform;

  form formid = 0x0001,
    title = STRING_TOKEN(0x0004);

    subtitle text = STRING_TOKEN(0x0006);

    numeric varid   = VlanNvData.VlanId,
            prompt  = STRING_TOKEN(0x0007),
            help    = STRING_TOKEN(0x0008),
            minimum = 0,
            maximum = 4094,
    endnumeric;

    numeric varid   = VlanNvData.Priority,
            prompt  = STRING_TOKEN(0x0009),
            help    = STRING_TOKEN(0x000A),
            minimum = 0,
            maximum = 7,
    endnumeric;

    text
      help   = STRING_TOKEN(0x000C),
      text   = STRING_TOKEN(0x000B),
      flags  = INTERACTIVE,
      key    = 0x1000;

    subtitle text = STRING_TOKEN(0x0011);
    subtitle text = STRING_TOKEN(0x000D);

    label 0x0001;
    label 0xffff;

    text
      help   = STRING_TOKEN(0x0010),
      text   = STRING_TOKEN(0x000F),
      flags  = INTERACTIVE,
      key    = 0x2000;

  endform;

endformset;
