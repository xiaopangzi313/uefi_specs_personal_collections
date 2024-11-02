/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f6937495_1f44_4a8a_8a1b_5a669f9396f6
#define _AUTOGENH_f6937495_1f44_4a8a_8a1b_5a669f9396f6

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
__Cons_construct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__Cons_deconstruct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
