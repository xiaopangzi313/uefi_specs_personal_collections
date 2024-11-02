/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_df1ccef6_f301_4a63_9661_fc6030dcc880
#define _AUTOGENH_df1ccef6_f301_4a63_9661_fc6030dcc880

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdf1ccef6, 0xf301, 0x4a63, {0x96, 0x61, 0xfc, 0x60, 0x30, 0xdc, 0xc8, 0x80}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEdkiiRngAlgorithmUnSafe;
extern EFI_GUID gLzmaCustomDecompressGuid;
extern EFI_GUID gCcEventEntryHobGuid;

// PPIs
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gEfiPeiMpInitLibMpDepPpiGuid;
extern EFI_GUID gEfiPeiMpInitLibUpDepPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSmmSmramRequire  0U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsWorkAreaBase  0U
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase  _PCD_SIZE_PcdSevEsWorkAreaBase 
#define _PCD_VALUE_PcdSevEsWorkAreaBase  8433668U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  0U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  0U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress  _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress  0x00807000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  0U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize  _PCD_SIZE_PcdGuidedExtractHandlerTableSize 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDecompressionScratchEnd  0U
#define _PCD_SIZE_PcdOvmfDecompressionScratchEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDecompressionScratchEnd  _PCD_SIZE_PcdOvmfDecompressionScratchEnd 
#define _PCD_VALUE_PcdOvmfDecompressionScratchEnd  27328512U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd;
#define _PCD_GET_MODE_32_PcdOvmfDecompressionScratchEnd  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd
//#define _PCD_SET_MODE_32_PcdOvmfDecompressionScratchEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitValueInTempStack  0U
#define _PCD_SIZE_PcdInitValueInTempStack 4
#define _PCD_GET_MODE_SIZE_PcdInitValueInTempStack  _PCD_SIZE_PcdInitValueInTempStack 
#define _PCD_VALUE_PcdInitValueInTempStack  0x5AA55AA5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInitValueInTempStack;
#define _PCD_GET_MODE_32_PcdInitValueInTempStack  _gPcd_FixedAtBuild_PcdInitValueInTempStack
//#define _PCD_SET_MODE_32_PcdInitValueInTempStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfConfidentialComputingWorkAreaHeader  0U
#define _PCD_SIZE_PcdOvmfConfidentialComputingWorkAreaHeader 4
#define _PCD_GET_MODE_SIZE_PcdOvmfConfidentialComputingWorkAreaHeader  _PCD_SIZE_PcdOvmfConfidentialComputingWorkAreaHeader 
#define _PCD_VALUE_PcdOvmfConfidentialComputingWorkAreaHeader  4U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfConfidentialComputingWorkAreaHeader;
#define _PCD_GET_MODE_32_PcdOvmfConfidentialComputingWorkAreaHeader  _gPcd_FixedAtBuild_PcdOvmfConfidentialComputingWorkAreaHeader
//#define _PCD_SET_MODE_32_PcdOvmfConfidentialComputingWorkAreaHeader  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecValidatedStart  0U
#define _PCD_SIZE_PcdOvmfSecValidatedStart 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedStart  _PCD_SIZE_PcdOvmfSecValidatedStart 
#define _PCD_VALUE_PcdOvmfSecValidatedStart  8519680U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedStart  _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecValidatedEnd  0U
#define _PCD_SIZE_PcdOvmfSecValidatedEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedEnd  _PCD_SIZE_PcdOvmfSecValidatedEnd 
#define _PCD_VALUE_PcdOvmfSecValidatedEnd  27328512U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedEnd  _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupBase  _PCD_SIZE_PcdOvmfSecGhcbBackupBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupBase  0x0080C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTdxAcceptPageSize  0U
#define _PCD_SIZE_PcdTdxAcceptPageSize 4
#define _PCD_GET_MODE_SIZE_PcdTdxAcceptPageSize  _PCD_SIZE_PcdTdxAcceptPageSize 
#define _PCD_VALUE_PcdTdxAcceptPageSize  0x200000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize;
#define _PCD_GET_MODE_32_PcdTdxAcceptPageSize  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize
//#define _PCD_SET_MODE_32_PcdTdxAcceptPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecApicPageTableBase  0U
#define _PCD_SIZE_PcdOvmfSecApicPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecApicPageTableBase  _PCD_SIZE_PcdOvmfSecApicPageTableBase 
#define _PCD_VALUE_PcdOvmfSecApicPageTableBase  0x00810000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecApicPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecApicPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecApicPageTableSize  0U
#define _PCD_SIZE_PcdOvmfSecApicPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecApicPageTableSize  _PCD_SIZE_PcdOvmfSecApicPageTableSize 
#define _PCD_VALUE_PcdOvmfSecApicPageTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecApicPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecApicPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c

// ProcessLibraryConstructorList() declared here because SEC has no standard entry point.
VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
