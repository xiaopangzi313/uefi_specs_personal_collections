/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4
#define _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x222c386d, 0x5abc, 0x4fb4, {0xb1, 0x24, 0xfb, 0xb8, 0x24, 0x88, 0xac, 0xf4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gFdtHobGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gGhcbApicIdsGuid;
extern EFI_GUID gTcg800155PlatformIdEventHobGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiSmmSmramMemoryGuid;
extern EFI_GUID gEfiAcpiVariableGuid;
extern EFI_GUID gSmmBaseHobGuid;
extern EFI_GUID gCcEventEntryHobGuid;

// PPIs
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiMpServicesPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEdkiiPeiMpServices2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdOvmfCpuidBase  0U
#define _PCD_SIZE_PcdOvmfCpuidBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidBase  _PCD_SIZE_PcdOvmfCpuidBase 
#define _PCD_VALUE_PcdOvmfCpuidBase  0x0080E000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidBase;
#define _PCD_GET_MODE_32_PcdOvmfCpuidBase  _gPcd_FixedAtBuild_PcdOvmfCpuidBase
//#define _PCD_SET_MODE_32_PcdOvmfCpuidBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfCpuidSize  0U
#define _PCD_SIZE_PcdOvmfCpuidSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidSize  _PCD_SIZE_PcdOvmfCpuidSize 
#define _PCD_VALUE_PcdOvmfCpuidSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidSize;
#define _PCD_GET_MODE_32_PcdOvmfCpuidSize  _gPcd_FixedAtBuild_PcdOvmfCpuidSize
//#define _PCD_SET_MODE_32_PcdOvmfCpuidSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  0U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS  _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS  0x80U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  0U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory  _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory  0x12U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  0U
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType  _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType  0x80U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  0U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode  0x100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  0U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData  0x100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupBase  _PCD_SIZE_PcdOvmfSecGhcbBackupBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupBase  0x0080C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupSize  _PCD_SIZE_PcdOvmfSecGhcbBackupSize 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecSvsmCaaBase  0U
#define _PCD_SIZE_PcdOvmfSecSvsmCaaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecSvsmCaaBase  _PCD_SIZE_PcdOvmfSecSvsmCaaBase 
#define _PCD_VALUE_PcdOvmfSecSvsmCaaBase  0x0080F000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaBase;
#define _PCD_GET_MODE_32_PcdOvmfSecSvsmCaaBase  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaBase
//#define _PCD_SET_MODE_32_PcdOvmfSecSvsmCaaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecSvsmCaaSize  0U
#define _PCD_SIZE_PcdOvmfSecSvsmCaaSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecSvsmCaaSize  _PCD_SIZE_PcdOvmfSecSvsmCaaSize 
#define _PCD_VALUE_PcdOvmfSecSvsmCaaSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaSize;
#define _PCD_GET_MODE_32_PcdOvmfSecSvsmCaaSize  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaSize
//#define _PCD_SET_MODE_32_PcdOvmfSecSvsmCaaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaSize  0U
#define _PCD_SIZE_PcdOvmfWorkAreaSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaSize  _PCD_SIZE_PcdOvmfWorkAreaSize 
#define _PCD_VALUE_PcdOvmfWorkAreaSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaSize  _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSnpSecretsBase  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsBase  _PCD_SIZE_PcdOvmfSnpSecretsBase 
#define _PCD_VALUE_PcdOvmfSnpSecretsBase  0x0080D000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsBase  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSnpSecretsSize  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsSize  _PCD_SIZE_PcdOvmfSnpSecretsSize 
#define _PCD_VALUE_PcdOvmfSnpSecretsSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsSize  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmmSmramRequire  0U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvBase  0U
#define _PCD_SIZE_PcdOvmfPeiMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvBase  _PCD_SIZE_PcdOvmfPeiMemFvBase 
#define _PCD_VALUE_PcdOvmfPeiMemFvBase  0x00820000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvBase  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvSize  0U
#define _PCD_SIZE_PcdOvmfPeiMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvSize  _PCD_SIZE_PcdOvmfPeiMemFvSize 
#define _PCD_VALUE_PcdOvmfPeiMemFvSize  0x000E0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvSize  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvBase  0U
#define _PCD_SIZE_PcdOvmfDxeMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvBase  _PCD_SIZE_PcdOvmfDxeMemFvBase 
#define _PCD_VALUE_PcdOvmfDxeMemFvBase  0x00900000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvBase  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvSize  0U
#define _PCD_SIZE_PcdOvmfDxeMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvSize  _PCD_SIZE_PcdOvmfDxeMemFvSize 
#define _PCD_VALUE_PcdOvmfDxeMemFvSize  0x00E80000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvSize  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  0U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase  _PCD_SIZE_PcdOvmfSecPeiTempRamBase 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase  0x00811000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  0U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize  _PCD_SIZE_PcdOvmfSecPeiTempRamSize 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize  0x0000F000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  0U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  0U
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize  _PCD_SIZE_PcdOvmfSecPageTablesSize 
#define _PCD_VALUE_PcdOvmfSecPageTablesSize  0x00006000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableBase  _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableBase  0x00808000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableSize  _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase  _PCD_SIZE_PcdOvmfSecGhcbBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBase  0x00809000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbSize  _PCD_SIZE_PcdOvmfSecGhcbSize 
#define _PCD_VALUE_PcdOvmfSecGhcbSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageBase  0U
#define _PCD_SIZE_PcdOvmfLockBoxStorageBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageBase  _PCD_SIZE_PcdOvmfLockBoxStorageBase 
#define _PCD_VALUE_PcdOvmfLockBoxStorageBase  0x00806000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageBase  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageSize  0U
#define _PCD_SIZE_PcdOvmfLockBoxStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageSize  _PCD_SIZE_PcdOvmfLockBoxStorageSize 
#define _PCD_VALUE_PcdOvmfLockBoxStorageSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageSize  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  0U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize  _PCD_SIZE_PcdGuidedExtractHandlerTableSize 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdPciIoBase  15U
#define _PCD_GET_MODE_64_PcdPciIoBase  LibPcdGet64(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_GET_MODE_SIZE_PcdPciIoBase  LibPcdGetSize(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_SET_MODE_64_PcdPciIoBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoBase, (Value))

#define _PCD_TOKEN_PcdPciIoSize  16U
#define _PCD_GET_MODE_64_PcdPciIoSize  LibPcdGet64(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_GET_MODE_SIZE_PcdPciIoSize  LibPcdGetSize(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_SET_MODE_64_PcdPciIoSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoSize, (Value))

#define _PCD_TOKEN_PcdPciMmio32Base  17U
#define _PCD_GET_MODE_64_PcdPciMmio32Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_SET_MODE_64_PcdPciMmio32Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Base, (Value))

#define _PCD_TOKEN_PcdPciMmio32Size  18U
#define _PCD_GET_MODE_64_PcdPciMmio32Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_SET_MODE_64_PcdPciMmio32Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Size, (Value))

#define _PCD_TOKEN_PcdPciMmio64Base  19U
#define _PCD_GET_MODE_64_PcdPciMmio64Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_SET_MODE_64_PcdPciMmio64Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Base, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  20U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

#define _PCD_TOKEN_PcdOvmfDecompressionScratchEnd  0U
#define _PCD_SIZE_PcdOvmfDecompressionScratchEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDecompressionScratchEnd  _PCD_SIZE_PcdOvmfDecompressionScratchEnd 
#define _PCD_VALUE_PcdOvmfDecompressionScratchEnd  27328512U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd;
#define _PCD_GET_MODE_32_PcdOvmfDecompressionScratchEnd  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd
//#define _PCD_SET_MODE_32_PcdOvmfDecompressionScratchEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdQ35TsegMbytes  22U
#define _PCD_GET_MODE_16_PcdQ35TsegMbytes  LibPcdGet16(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_GET_MODE_SIZE_PcdQ35TsegMbytes  LibPcdGetSize(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_SET_MODE_16_PcdQ35TsegMbytes(Value)  LibPcdSet16(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))
#define _PCD_SET_MODE_16_S_PcdQ35TsegMbytes(Value)  LibPcdSet16S(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))

#define _PCD_TOKEN_PcdQ35SmramAtDefaultSmbase  21U
#define _PCD_GET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase  LibPcdGetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_GET_MODE_SIZE_PcdQ35SmramAtDefaultSmbase  LibPcdGetSize(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_SET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))

#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtr  0U
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtr 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtr  _PCD_SIZE_PcdXenPvhStartOfDayStructPtr 
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtr  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtr  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtrSize  0U
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtrSize  _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize 
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtrSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSecureBootSupported  0U
#define _PCD_SIZE_PcdSecureBootSupported 1
#define _PCD_GET_MODE_SIZE_PcdSecureBootSupported  _PCD_SIZE_PcdSecureBootSupported 
#define _PCD_VALUE_PcdSecureBootSupported  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSecureBootSupported;
#define _PCD_GET_MODE_BOOL_PcdSecureBootSupported  _gPcd_FixedAtBuild_PcdSecureBootSupported
//#define _PCD_SET_MODE_BOOL_PcdSecureBootSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  0U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress  _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress  0x00807000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBaseAddress  0U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xE0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x42000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvStoreReserved  2U
#define _PCD_GET_MODE_64_PcdEmuVariableNvStoreReserved  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvStoreReserved  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_SET_MODE_64_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  0U
#define _PCD_SIZE_PcdDxeIplSwitchToLongMode 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSwitchToLongMode  _PCD_SIZE_PcdDxeIplSwitchToLongMode 
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  0U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSetNxForStack  6U
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  LibPcdGetBool(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  LibPcdGetSize(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_SET_MODE_BOOL_PcdSetNxForStack(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSetNxForStack, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSetNxForStack(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSetNxForStack, (Value))

#define _PCD_TOKEN_PcdAcpiS3Enable  1U
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  LibPcdGetBool(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  LibPcdGetSize(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdAcpiS3Enable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdAcpiS3Enable, (Value))

#define _PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask  5U
#define _PCD_GET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  LibPcdGet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_GET_MODE_SIZE_PcdPteMemoryEncryptionAddressOrMask  LibPcdGetSize(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_SET_MODE_64_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))
#define _PCD_SET_MODE_64_S_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))

#define _PCD_TOKEN_PcdGhcbBase  3U
#define _PCD_GET_MODE_64_PcdGhcbBase  LibPcdGet64(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_GET_MODE_SIZE_PcdGhcbBase  LibPcdGetSize(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_SET_MODE_64_PcdGhcbBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbBase, (Value))

#define _PCD_TOKEN_PcdGhcbSize  4U
#define _PCD_GET_MODE_64_PcdGhcbSize  LibPcdGet64(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_GET_MODE_SIZE_PcdGhcbSize  LibPcdGetSize(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_SET_MODE_64_PcdGhcbSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbSize, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbSize, (Value))

#define _PCD_TOKEN_PcdOptionRomImageVerificationPolicy  9U
#define _PCD_GET_MODE_32_PcdOptionRomImageVerificationPolicy  LibPcdGet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_GET_MODE_SIZE_PcdOptionRomImageVerificationPolicy  LibPcdGetSize(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_SET_MODE_32_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))
#define _PCD_SET_MODE_32_S_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32S(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  0U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  11U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuBootLogicalProcessorNumber  10U
#define _PCD_GET_MODE_32_PcdCpuBootLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuBootLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuApStackSize  0U
#define _PCD_SIZE_PcdCpuApStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuApStackSize  _PCD_SIZE_PcdCpuApStackSize 
#define _PCD_VALUE_PcdCpuApStackSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuApStackSize;
#define _PCD_GET_MODE_32_PcdCpuApStackSize  _gPcd_FixedAtBuild_PcdCpuApStackSize
//#define _PCD_SET_MODE_32_PcdCpuApStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsIsEnabled  13U
#define _PCD_GET_MODE_BOOL_PcdSevEsIsEnabled  LibPcdGetBool(_PCD_TOKEN_PcdSevEsIsEnabled)
#define _PCD_GET_MODE_SIZE_PcdSevEsIsEnabled  LibPcdGetSize(_PCD_TOKEN_PcdSevEsIsEnabled)
#define _PCD_SET_MODE_BOOL_PcdSevEsIsEnabled(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSevEsIsEnabled, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSevEsIsEnabled(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSevEsIsEnabled, (Value))

#define _PCD_TOKEN_PcdConfidentialComputingGuestAttr  8U
#define _PCD_GET_MODE_64_PcdConfidentialComputingGuestAttr  LibPcdGet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_GET_MODE_SIZE_PcdConfidentialComputingGuestAttr  LibPcdGetSize(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_SET_MODE_64_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_SET_MODE_64_S_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64S(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))

#define _PCD_TOKEN_PcdGhcbHypervisorFeatures  12U
#define _PCD_GET_MODE_64_PcdGhcbHypervisorFeatures  LibPcdGet64(_PCD_TOKEN_PcdGhcbHypervisorFeatures)
#define _PCD_GET_MODE_SIZE_PcdGhcbHypervisorFeatures  LibPcdGetSize(_PCD_TOKEN_PcdGhcbHypervisorFeatures)
#define _PCD_SET_MODE_64_PcdGhcbHypervisorFeatures(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbHypervisorFeatures, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbHypervisorFeatures(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbHypervisorFeatures, (Value))

#define _PCD_TOKEN_PcdTdxSharedBitMask  7U
#define _PCD_GET_MODE_64_PcdTdxSharedBitMask  LibPcdGet64(_PCD_TOKEN_PcdTdxSharedBitMask)
#define _PCD_GET_MODE_SIZE_PcdTdxSharedBitMask  LibPcdGetSize(_PCD_TOKEN_PcdTdxSharedBitMask)
#define _PCD_SET_MODE_64_PcdTdxSharedBitMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdTdxSharedBitMask, (Value))
#define _PCD_SET_MODE_64_S_PcdTdxSharedBitMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdTdxSharedBitMask, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePlatform (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
