/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F6697AC4_A776_4EE1_B643_1FEFF2B615BB
#define _AUTOGENH_F6697AC4_A776_4EE1_B643_1FEFF2B615BB

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xF6697AC4, 0xA776, 0x4EE1, {0xB6, 0x43, 0x1F, 0xEF, 0xF2, 0xB6, 0x15, 0xBB}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiIncompatiblePciDeviceSupportProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciMmio64Size  20U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
