#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/ShellCEntryLib.h>
#include <Library/DebugLib.h>

#include <Protocol/PciIo.h>
#include <Protocol/PciRootBridgeIo.h>
#include <IndustryStandard/Pci.h>

UINT32 
LocateExtCap (
  EFI_PCI_IO_PROTOCOL                      *PciIo,
  UINT16                                   ExtCapId
 )
{
  UINT32                      CapabilityEntry;
  UINT16                      CapabilityPtr;
  UINT32                      CapabilityID;
  EFI_STATUS                  Status;

  while ((CapabilityPtr >= EFI_PCIE_CAPABILITY_BASE_OFFSET) && ((CapabilityPtr & 0xffc) != 0xffc)) {
    Status = PciIo->Pci.Read (
                            PciIo,
                            EfiPciIoWidthUint32,
                            CapabilityPtr,
                            1,
                            &CapabilityEntry
                            );

    CapabilityID = (UINT16)CapabilityEntry;

    if (CapabilityID == ExtCapId) {
      return CapabilityPtr;
    }
    //
    // Certain PCI device may incorrectly have capability pointing to itself,
    // break to avoid dead loop.
    //
    if (CapabilityPtr == (UINT32)((CapabilityEntry >> 20) & (~(BIT0 | BIT1)))) {
      break;
    }
    CapabilityPtr = (UINT32)((CapabilityEntry >> 20) & ~(BIT0 | BIT1));
  }
}

VOID
CsdnCallBackPciIo (
  IN EFI_EVENT                Event,
  IN VOID                     *Context
)
{
  UINTN                                    PciIoHandleCount;
  EFI_HANDLE                               *PciIoHandleBuffer;
  UINTN                                    PciIoIndex;
  EFI_PCI_IO_PROTOCOL                      *PciIo;
  UINTN                                    SegmentNumber;
  UINTN                                    BusNumber;
  UINTN                                    DeviceNumber;
  UINTN                                    FunctionNumber;
  UINT16                                   TmpVendorId;
  UINT16                                   TmpDeviceId;
  EFI_STATUS                               Status;

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));

  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEfiPciIoProtocolGuid,
                  NULL,
                  &PciIoHandleCount,
                  &PciIoHandleBuffer
                  );
  if (EFI_ERROR (Status) || (PciIoHandleCount == 0)) {
    DEBUG ((DEBUG_ERROR, "[PCI] ERROR: Locate gEfiPciIoProtocolGuid HandleBuffer Fail\n"));
    ASSERT_EFI_ERROR (Status);
    ASSERT(PciIoHandleCount != 0);
    return ;
  }
  for (PciIoIndex = 0; PciIoIndex < PciIoHandleCount; PciIoIndex++) {
    Status = gBS->HandleProtocol (PciIoHandleBuffer[PciIoIndex], &gEfiPciIoProtocolGuid, (VOID **) &PciIo);
    Status = PciIo->GetLocation (
                  PciIo,
                  &SegmentNumber,
                  &BusNumber,
                  &DeviceNumber,
                  &FunctionNumber
                  );
    //
    // Read and check VendorId.
    //
    Status = PciIo->Pci.Read (
                          PciIo,
                          EfiPciIoWidthUint16,
                          PCI_VENDOR_ID_OFFSET,
                          1,
                          &TmpVendorId
                          );
    if (EFI_ERROR (Status)) {
      goto Error;
    }

    //
    // Read DeviceId and RevisionId.
    //
    Status = PciIo->Pci.Read (
                          PciIo,
                          EfiPciIoWidthUint16,
                          PCI_DEVICE_ID_OFFSET,
                          1,
                          &TmpDeviceId
                          );
    if (EFI_ERROR (Status)) {
      goto Error;
    }
    DEBUG ((
          DEBUG_ERROR,
          " [Csdn]: [%02x:%02x:%02x:%02x] VendorId:%02x DeviceId:%02x \n",
          TmpVendorId,
          TmpDeviceId,
          SegmentNumber,
          BusNumber,
          DeviceNumber,
          FunctionNumber
          ));
  }

Error:
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
}


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS Status;
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__));

  Status = EFI_SUCCESS;

  EFI_EVENT   ReadyToBootEvent; 
  Status = gBS->CreateEventEx (
                EVT_NOTIFY_SIGNAL,
                TPL_CALLBACK,
                CsdnCallBackPciIo,
                NULL,
                &gEfiEventReadyToBootGuid,
                &ReadyToBootEvent
                );
  ASSERT_EFI_ERROR (Status);

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__));
  return Status;
}

