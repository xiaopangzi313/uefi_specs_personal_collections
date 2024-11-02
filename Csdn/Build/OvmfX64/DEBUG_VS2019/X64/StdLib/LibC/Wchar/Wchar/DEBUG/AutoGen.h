/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_42c078ef_14a8_4e30_9329_6f12d796e54a
#define _AUTOGENH_42c078ef_14a8_4e30_9329_6f12d796e54a

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
__wchar_construct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
__wchar_deconstruct (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
