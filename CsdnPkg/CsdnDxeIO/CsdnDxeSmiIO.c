#include <Library/IoLib.h>
#include <Library/DebugLib.h>

#define CSDN_SW_SMI_NO 0x70


EFI_STATUS
EFIAPI
CsdnDxeSmiIOEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
)
{
    EFI_STATUS Status = EFI_SUCCESS;
    DEBUG((EFI_D_ERROR,"[CSDN] %a Enter\n", __FUNCTION__));

    IoWrite8 (0xB2, CSDN_SW_SMI_NO);

    DEBUG((EFI_D_ERROR,"[CSDN] %a Exit\n", __FUNCTION__));
    return Status;
}
