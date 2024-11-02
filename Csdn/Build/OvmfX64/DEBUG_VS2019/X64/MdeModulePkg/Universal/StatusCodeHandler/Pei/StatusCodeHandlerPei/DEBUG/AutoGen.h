/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9D225237_FA01_464C_A949_BAABC02D31D0
#define _AUTOGENH_9D225237_FA01_464C_A949_BAABC02D31D0

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9D225237, 0xFA01, 0x464C, {0xA9, 0x49, 0xBA, 0xAB, 0xC0, 0x2D, 0x31, 0xD0}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gMemoryStatusCodeRecordGuid;
extern EFI_GUID gEfiStatusCodeDataTypeStringGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// PPIs
extern EFI_GUID gEfiPeiRscHandlerPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdStatusCodeUseSerial  0U
#define _PCD_SIZE_PcdStatusCodeUseSerial 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseSerial  _PCD_SIZE_PcdStatusCodeUseSerial 
#define _PCD_VALUE_PcdStatusCodeUseSerial  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseSerial  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseSerial  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeUseMemory  0U
#define _PCD_SIZE_PcdStatusCodeUseMemory 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseMemory  _PCD_SIZE_PcdStatusCodeUseMemory 
#define _PCD_VALUE_PcdStatusCodeUseMemory  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseMemory  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeMemorySize  0U
#define _PCD_SIZE_PcdStatusCodeMemorySize 2
#define _PCD_GET_MODE_SIZE_PcdStatusCodeMemorySize  _PCD_SIZE_PcdStatusCodeMemorySize 
#define _PCD_VALUE_PcdStatusCodeMemorySize  1U
extern const  UINT16  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize;
#define _PCD_GET_MODE_16_PcdStatusCodeMemorySize  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize
//#define _PCD_SET_MODE_16_PcdStatusCodeMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
StatusCodeHandlerPeiEntry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
