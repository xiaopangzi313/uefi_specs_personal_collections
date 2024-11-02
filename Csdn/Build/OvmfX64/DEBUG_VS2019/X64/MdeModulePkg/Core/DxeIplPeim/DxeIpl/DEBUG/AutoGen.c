/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x86D70125, 0xBAA3, 0x4296, {0xA6, 0x2F, 0x60, 0x2B, 0xEB, 0xBB, 0x90, 0x81}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "DxeIpl";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgTokenSpaceGuid = {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDxeIplPpiGuid = {0xae8ce5d, 0xe448, 0x4437, {0xa8, 0xd7, 0xeb, 0xf5, 0xf1, 0x94, 0xf7, 0x31 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiDecompressPpiGuid = { 0x1a36e4e7, 0xfab6, 0x476a, { 0x8e, 0x75, 0x69, 0x5a, 0x5, 0x76, 0xfd, 0xd7 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEndOfPeiSignalPpiGuid = {0x605EA650, 0xC65C, 0x42e1, {0xBA, 0x80, 0x91, 0xA5, 0x2A, 0xB6, 0x18, 0xC6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiLoadFilePpiGuid = { 0xb9e0abfe, 0x5979, 0x4914, { 0x97, 0x7f, 0x6d, 0xee, 0x78, 0xc2, 0x78, 0xa6 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiS3Resume2PpiGuid = { 0x6D582DBC, 0xDB85, 0x4514, {0x8F, 0xCC, 0x5A, 0xDF, 0x62, 0x27, 0xB1, 0x47 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiRecoveryModulePpiGuid = { 0xFB6D9542, 0x612D, 0x4f45, { 0x87, 0x2f, 0x5c, 0xff, 0x52, 0xe9, 0x3d, 0xcf }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVectorHandoffInfoPpiGuid = { 0x3cd652b4, 0x6d33, 0x4dce, { 0x89, 0xdb, 0x83, 0xdf, 0x97, 0x66, 0xfc, 0xca }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid = {0xf894643d, 0xc449, 0x42d1, {0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPeiBootInCapsuleOnDiskModePpiGuid = { 0xb08a11e4, 0xe2b7, 0x4b75, { 0xb5, 0x15, 0xaf, 0x61, 0x6, 0x68, 0xbf, 0xd1  } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPeiCapsuleOnDiskPpiGuid = { 0x71a9ea61, 0x5a35, 0x4a5d, { 0xac, 0xef, 0x9c, 0xf8, 0x6d, 0x6d, 0x67, 0xe0 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiMemoryAttributePpiGuid = { 0x1be840de, 0x2d92, 0x41ec, { 0xb6, 0xd3, 0x19, 0x64, 0x13, 0x50, 0x51, 0xfb } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDxeIplBuildPageTables = _PCD_VALUE_PcdDxeIplBuildPageTables;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDxeIplSupportUefiDecompress = _PCD_VALUE_PcdDxeIplSupportUefiDecompress;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUse1GPageTable = _PCD_VALUE_PcdUse1GPageTable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask = _PCD_VALUE_PcdNullPointerDetectionPropertyMask;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask = _PCD_VALUE_PcdHeapGuardPropertyMask;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdCpuStackGuard = _PCD_VALUE_PcdCpuStackGuard;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUse5LevelPageTable = _PCD_VALUE_PcdUse5LevelPageTable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy = _PCD_VALUE_PcdDxeNxMemoryProtectionPolicy;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdImageProtectionPolicy = _PCD_VALUE_PcdImageProtectionPolicy;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase = _PCD_VALUE_PcdOvmfWorkAreaBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumGuidedExtractHandler  0U
#define _PCD_SIZE_PcdMaximumGuidedExtractHandler 4
#define _PCD_GET_MODE_SIZE_PcdMaximumGuidedExtractHandler  _PCD_SIZE_PcdMaximumGuidedExtractHandler 
#define _PCD_VALUE_PcdMaximumGuidedExtractHandler  0x10U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler = _PCD_VALUE_PcdMaximumGuidedExtractHandler;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler;
#define _PCD_GET_MODE_32_PcdMaximumGuidedExtractHandler  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler
//#define _PCD_SET_MODE_32_PcdMaximumGuidedExtractHandler  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdReportStatusCodePropertyMask  0U
#define _PCD_SIZE_PcdReportStatusCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdReportStatusCodePropertyMask  _PCD_SIZE_PcdReportStatusCodePropertyMask 
#define _PCD_VALUE_PcdReportStatusCodePropertyMask  0x07U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask = _PCD_VALUE_PcdReportStatusCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask;
#define _PCD_GET_MODE_8_PcdReportStatusCodePropertyMask  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask
//#define _PCD_SET_MODE_8_PcdReportStatusCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  0U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return PeimInitializeDxeIpl (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
