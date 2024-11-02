#line 1 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\PlatformForms.vfr"
#line 1 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\OvmfPkg\\PlatformDxe\\Platform\\DEBUG\\PlatformDxeStrDefs.h"



























extern unsigned char PlatformDxeStrings[];
























#line 54 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\OvmfPkg\\PlatformDxe\\Platform\\DEBUG\\PlatformDxeStrDefs.h"

#line 56 "d:\\uefi_specs_personal_collections\\csdn\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\OvmfPkg\\PlatformDxe\\Platform\\DEBUG\\PlatformDxeStrDefs.h"
#line 1 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\PlatformForms.vfr"

















#line 1 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\Include\\Guid/OvmfPlatformConfig.h"















extern EFI_GUID  {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}};

#line 19 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\Include\\Guid/OvmfPlatformConfig.h"
#line 19 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\PlatformForms.vfr"
#line 1 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\Platform.h"































typedef struct {
  UINT16    CurrentPreferredResolution[16];
  UINT32    NextPreferredResolution;
} MAIN_FORM_STATE;

#line 38 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\Platform.h"
#line 20 "D:\\uefi_specs_personal_collections\\edk2\\OvmfPkg\\PlatformDxe\\PlatformForms.vfr"

formset
  guid  = {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}},
  title = STRING_TOKEN(0x0002),
  help  = STRING_TOKEN(0x0003),

  varstore MAIN_FORM_STATE,
    varid = 1,
    name  = MainFormState,
    guid  = {0x7235c51c, 0x0c80, 0x4cab, {0x87, 0xac, 0x3b, 0x08, 0x4a, 0x63, 0x04, 0xb1}};

  form
    formid = 1,
    title  = STRING_TOKEN(0x0004);

    
    
    
    string
      varid      = MainFormState.CurrentPreferredResolution,
      questionid = 1,
      prompt     = STRING_TOKEN(0x0005),
      help       = STRING_TOKEN(0x0006),
      flags      = READ_ONLY,
      minsize    = 0,
      maxsize    = 16,
    endstring;

    
    
    
    label 1;

    text
      help  = STRING_TOKEN(0x0009),
      text  = STRING_TOKEN(0x0009),
      flags = INTERACTIVE,
      key   = 3;

    text
      help  = STRING_TOKEN(0x000A),
      text  = STRING_TOKEN(0x000A),
      flags = INTERACTIVE,
      key   = 4;

  endform;

endformset;
