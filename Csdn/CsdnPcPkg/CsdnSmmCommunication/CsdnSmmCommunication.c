#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/SmmServicesTableLib.h>

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

EFI_STATUS
EFIAPI
SmmCsdnSmiHandler (
  IN EFI_HANDLE DispatchHandle,
  IN CONST VOID *Context        OPTIONAL,
  IN OUT VOID   *CommBuffer     OPTIONAL,
  IN OUT UINTN  *CommBufferSize OPTIONAL
  )
{
    DEBUG((EFI_D_ERROR, "[CSDN] %a Enter\n", __FUNCTION__));

    SMI_HANDLER_CSDN_PARAMETER_HEADER  *SmiHandlerCsdnParameterHeader;
    UINTN                              TempCommBufferSize;

    if (CommBuffer == NULL || CommBufferSize == NULL){
        return EFI_SUCCESS;
    }

    TempCommBufferSize = *CommBufferSize;
    if (TempCommBufferSize < sizeof(SMI_HANDLER_CSDN_PARAMETER_HEADER)){
        DEBUG((EFI_D_ERROR,"[CSDN] %a SMM csdn communication buffer size is invalid\n", __FUNCTION__));
        return EFI_SUCCESS;
    }

    SmiHandlerCsdnParameterHeader = (SMI_HANDLER_CSDN_PARAMETER_HEADER *)((UINTN)CommBuffer);
    SmiHandlerCsdnParameterHeader->ReturnStatus = (UINT64)-1;
    switch (SmiHandlerCsdnParameterHeader->Command){
        case SMI_HANDLER_CSDN_COMMAND_GET_INFO:
            if (TempCommBufferSize != sizeof(SMI_HANDLER_CSDN_PARAMETER_GET_INFO)){
                DEBUG((EFI_D_ERROR,"[CSDN] %a SMI_HANDLER_CSDN_COMMAND_GET_INFO communication buffer size is invalid\n", __FUNCTION__));
                return EFI_SUCCESS;
            }
            DEBUG((EFI_D_ERROR,"[CSDN] %a SMI_HANDLER_CSDN_COMMAND_GET_INFO Entry!\n", __FUNCTION__));
            SMI_HANDLER_CSDN_PARAMETER_GET_INFO *SmiHandlerCsdnParameterGetInfo = (SMI_HANDLER_CSDN_PARAMETER_GET_INFO *)((UINTN)CommBuffer);
	  UINTN len = 10;
	  CONST CHAR16 src[11] = L"Hello Csdn";
            CopyMem((VOID *)SmiHandlerCsdnParameterGetInfo->CsdnString, (VOID *)src, len);
            SmiHandlerCsdnParameterGetInfo->Header.ReturnStatus = 0;
            DEBUG((EFI_D_ERROR,"[CSDN] %a SMI_HANDLER_CSDN_COMMAND_GET_INFO Success!\n", __FUNCTION__));
    }

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
CsdnSmmCommunicationEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
)
{
    EFI_STATUS Status;
    EFI_HANDLE DispatchHandle;

    DEBUG((EFI_D_ERROR,"[CSDN] %a Enter\n", __FUNCTION__));

    Status = gSmst->SmiHandlerRegister(
        SmmCsdnSmiHandler,
        &gCsdnSmmGuid,
        &DispatchHandle
    );

    ASSERT_EFI_ERROR(Status);

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return Status;
}
