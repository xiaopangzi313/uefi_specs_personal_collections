#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/SmmServicesTableLib.h>
#include <Protocol/SmmSwDispatch2.h>

EFI_GUID gEfiSmmSwDispatch2ProtocolGuid = { 0x18a3c6dc, 0x5eea, 0x48c8, {0xa1, 0xc1, 0xb5, 0x33, 0x89, 0xf9, 0x89, 0x99 }};

#define CSDN_SW_SMI_NO 0x70

EFI_STATUS
EFIAPI
CsdnSmiHandler (
  IN EFI_HANDLE DispatchHandle,
  IN CONST VOID *Context        OPTIONAL,
  IN OUT VOID   *CommBuffer     OPTIONAL,
  IN OUT UINTN  *CommBufferSize OPTIONAL
  )
{
    DEBUG((EFI_D_ERROR, "[CSDN] %a Enter\n", __FUNCTION__));

   

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
CsdnSmmEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
)
{
    EFI_STATUS Status;
    DEBUG((EFI_D_ERROR,"[CSDN] %a Enter\n", __FUNCTION__));

    EFI_SMM_SW_REGISTER_CONTEXT    SwContext;
    EFI_SMM_SW_DISPATCH2_PROTOCOL  *SwDispatch;
    EFI_HANDLE                     SwSmiHandle;

    Status = gSmst->SmmLocateProtocol(
        &gEfiSmmSwDispatch2ProtocolGuid,
        NULL,
        (VOID **)&SwDispatch
        );

    ASSERT_EFI_ERROR(Status);

    if (!EFI_ERROR(Status)){
        SwContext.SwSmiInputValue = CSDN_SW_SMI_NO;
        ASSERT_EFI_ERROR(SwContext.SwSmiInputValue < SwDispatch->MaximumSwiValue);
        
        Status = SwDispatch->Register(
                SwDispatch,
                CsdnSmiHandler,
                &SwContext,
                &SwSmiHandle
            );
        ASSERT_EFI_ERROR(Status);
    }

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return Status;
}
