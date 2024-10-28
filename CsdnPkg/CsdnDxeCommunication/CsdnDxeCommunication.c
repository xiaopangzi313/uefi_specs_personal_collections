#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/BaseMemoryLib.h>
#include <Protocol/SmmCommunication.h>
#include <Guid/PiSmmCommunicationRegionTable.h>
#include <Library/UefiDriverEntryPoint.h>

EFI_GUID gCsdnSmmGuid = {0xb8160562,0xb8bd, 0x4d45, {0x88, 0x67, 0xbb, 0xcc, 0xa2, 0xb3, 0xc4, 0xd5 }};

typedef struct 
{
    UINT32   Command;
    UINT32   DataLength;
    UINT64   ReturnStatus;
}SMI_HANDLER_CSDN_PARAMETER_HEADER;

typedef struct 
{
    SMI_HANDLER_CSDN_PARAMETER_HEADER Header;
    CHAR16   CsdnString[128];
}SMI_HANDLER_CSDN_PARAMETER_GET_INFO;

#define SMI_HANDLER_CSDN_COMMAND_GET_INFO 1

VOID 
CsdnGetSmmServiceInfo(
    CHAR16 *SmmString
)
{
    EFI_STATUS                                         Status;
    EFI_SMM_COMMUNICATION_PROTOCOL                     *SmmCommunication;
    UINTN                                              CommSize;
    UINT8                                              *CommBuffer;
    EFI_SMM_COMMUNICATE_HEADER                        *CommHeader;
    SMI_HANDLER_CSDN_PARAMETER_GET_INFO                *CommGetInfo;
    UINTN                                              MinimalSizeNeeded;
    EDKII_PI_SMM_COMMUNICATION_REGION_TABLE            *PiSmmCommunicationRegionTable;
    EFI_MEMORY_DESCRIPTOR                              *Entry;
    UINTN                                              Size;
    UINT8                                              Index;

    Status = gBS->LocateProtocol(&gEfiSmmCommunicationProtocolGuid, NULL, (VOID **)&SmmCommunication);
    if (EFI_ERROR(Status)){
        DEBUG((EFI_D_ERROR, "[CSDN][%a]:  Locate Communication Protocol  %r\n", Status));
        return;
    }

    MinimalSizeNeeded = EFI_PAGE_SIZE;
    Status = EfiGetSystemConfigurationTable(
            &gEdkiiPiSmmCommunicationRegionTableGuid,
            (VOID **)&PiSmmCommunicationRegionTable
        );
    if (EFI_ERROR(Status)){
        DEBUG((EFI_D_ERROR, "[CSDN][%a]:  GetSystemConfigurationTable   %r\n", Status));
        return;
    }
    ASSERT(PiSmmCommunicationRegionTable != NULL);
    Entry = (EFI_MEMORY_DESCRIPTOR *)(PiSmmCommunicationRegionTable + 1);
    Size = 0;
    for (Index = 0; Index < PiSmmCommunicationRegionTable->NumberOfEntries; Index ++ ){
        if (Entry->Type == EfiConventionalMemory){
            Size = EFI_PAGES_TO_SIZE((UINTN)Entry->NumberOfPages);
            if (Size > MinimalSizeNeeded){
                break;
            }
        }
        Entry = (EFI_MEMORY_DESCRIPTOR *)((UINT8 *)Entry + PiSmmCommunicationRegionTable->DescriptorSize);
    }
    ASSERT(Index < PiSmmCommunicationRegionTable->NumberOfEntries);
    CommBuffer = (UINT8 *)(UINTN) Entry->PhysicalStart;

    Status = gBS->LocateProtocol(&gEfiSmmCommunicationProtocolGuid, NULL, (VOID **)&SmmCommunication);
    if (EFI_ERROR(Status)){
        DEBUG((EFI_D_ERROR, "[CSDN][%a]:  LocateProtocol gEfiSmmCommunicationProtocolGuid  %r\n", Status));
        return;
    }

    CommHeader = (EFI_SMM_COMMUNICATE_HEADER *)&CommBuffer[0];
    CopyMem(&CommHeader->HeaderGuid, &gCsdnSmmGuid, sizeof(gCsdnSmmGuid));
    CommHeader->MessageLength = sizeof(SMI_HANDLER_CSDN_PARAMETER_GET_INFO);
    CommGetInfo = (SMI_HANDLER_CSDN_PARAMETER_GET_INFO *)&CommBuffer[OFFSET_OF(EFI_SMM_COMMUNICATE_HEADER, Data)];

    CommGetInfo->Header.Command = SMI_HANDLER_CSDN_COMMAND_GET_INFO;
    CommGetInfo->Header.DataLength = sizeof(*CommGetInfo);
    CommGetInfo->Header.ReturnStatus = (UINT64)-1;

    CommSize = sizeof(EFI_GUID) + sizeof(UINTN) + CommHeader->MessageLength;
    Status = SmmCommunication->Communicate(SmmCommunication, CommBuffer, &CommSize);
    if (EFI_ERROR(Status)){
        DEBUG((EFI_D_ERROR, "[CSDN][%a]:  SmmCommunication   %r\n", Status));
        return;
    }

    DEBUG((EFI_D_ERROR, "[CSDN][%a]: CommGetInfo->CsdnString:%s  %r\n", CommGetInfo->CsdnString, Status));
    if (SmmString != NULL){
        CopyMem(SmmString, CommGetInfo->CsdnString, StrLen(CommGetInfo->CsdnString));
    }

    if (CommGetInfo->Header.ReturnStatus != 0){
        DEBUG((EFI_D_ERROR, "[CSDN][%a]: CommGetInfo   %r\n", CommGetInfo->Header.ReturnStatus));
        return;
    } 

    return ;
}

EFI_STATUS
EFIAPI
CsdnDxeCommunicationEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
)
{
    EFI_STATUS Status = EFI_SUCCESS;

    DEBUG((EFI_D_ERROR,"[CSDN] %a Enter\n", __FUNCTION__));

    CHAR16 SmmString[128] = {0};
    CsdnGetSmmServiceInfo(SmmString);
    DEBUG((EFI_D_ERROR,"[CSDN] %a CsdnGetSmmServiceInfo SmmString:%s \n", __FUNCTION__, SmmString));

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return Status;
}

