/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_778CE4F4_36BD_4ae7_B8F0_10B420B0D174
#define _AUTOGENH_778CE4F4_36BD_4ae7_B8F0_10B420B0D174

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gMeasuredFvHobGuid;

// Protocols
extern EFI_GUID gEfiTcg2ProtocolGuid;
extern EFI_GUID gEfiCcMeasurementProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
DxeTpm2MeasureBootLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
