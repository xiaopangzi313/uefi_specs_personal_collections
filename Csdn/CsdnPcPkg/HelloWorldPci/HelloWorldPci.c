#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/ShellCEntryLib.h>
#include <Library/DebugLib.h>

#include <Protocol/PciIo.h>
#include <Protocol/PciRootBridgeIo.h>
#include <IndustryStandard/Pci.h>


EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL *gPciRootBridgeIo;

EFI_STATUS LocatePciRootBridgeIo(void);

EFI_STATUS PciDevicePresent(
  IN EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL * PciRootBridgeIo,
  OUT PCI_TYPE00 * Pci,
  IN UINT8 Bus,
  IN UINT8 Device,
  IN UINT8 Func
  );

EFI_STATUS ListPciInformation(void);


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS Status;


  Status = LocatePciRootBridgeIo();
  if(EFI_ERROR(Status))
  {
    DEBUG((DEBUG_ERROR, "[CSDN]Call LocatePciRootBridgeIo failed,Can't find protocol!\n"));
  }
  else
  {
    DEBUG((DEBUG_ERROR, "[CSDN]Call LocatePciRootBridgeIo successed,Find protocol!\n"));
  }


  ListPciInformation();
  
  return EFI_SUCCESS;
}

EFI_STATUS LocatePciRootBridgeIo()
{
  EFI_STATUS Status;
  EFI_HANDLE *PciHandleBuffer = NULL;
  UINTN      HandleIndex = 0;
  UINTN      HandleCount = 0;

  Status = gBS->LocateHandleBuffer(
    ByProtocol,
    &gEfiPciRootBridgeIoProtocolGuid,
    NULL,
    &HandleCount,
    &PciHandleBuffer 
    );
  if(EFI_ERROR(Status))  return Status;

  for(HandleIndex = 0; HandleIndex < HandleCount; HandleIndex++)
  {
    Status = gBS->HandleProtocol(
      PciHandleBuffer[HandleIndex],
      &gEfiPciRootBridgeIoProtocolGuid,
      (VOID **)&gPciRootBridgeIo
      );
    if(EFI_ERROR(Status))  continue;
    else                   return EFI_SUCCESS;
  }

  return Status;
  
}

EFI_STATUS ListPciInformation()
{
  EFI_STATUS Status = EFI_SUCCESS;
  PCI_TYPE00 Pci;
  UINT16 Dev,Func,Bus,PciDevicecount = 0;

  DEBUG((DEBUG_ERROR, "[CSDN] PciDeviceNo\tBus\tDev\tFunc | Vendor.Device.ClassCode\n"));
  for(Bus=0; Bus<256; Bus++)
    for(Dev=0; Dev<= PCI_MAX_DEVICE; Dev++)
      for(Func=0; Func<=PCI_MAX_FUNC; Func++)
      {
        Status = PciDevicePresent(gPciRootBridgeIo,&Pci,(UINT8)Bus,(UINT8)Dev,(UINT8)Func);
          if(Status == EFI_SUCCESS)
          {
            PciDevicecount++;
             DEBUG((DEBUG_ERROR, "[CSDN] %d\t\t%x\t%x\t%x\t",PciDevicecount,(UINT8)Bus,(UINT8)Dev,(UINT8)Func));
             DEBUG((DEBUG_ERROR, "%x\t%x\t%x\n",Pci.Hdr.VendorId,Pci.Hdr.DeviceId,Pci.Hdr.ClassCode[0]));
          }
      }

  return EFI_SUCCESS;
}

EFI_STATUS
PciDevicePresent (
  IN  EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL     *PciRootBridgeIo,
  OUT PCI_TYPE00                          *Pci,
  IN  UINT8                               Bus,
  IN  UINT8                               Device,
  IN  UINT8                               Func
  )
{
  UINT64      Address;
  EFI_STATUS  Status;

  //
  // Create PCI address map in terms of Bus, Device and Func
  //
  Address = EFI_PCI_ADDRESS (Bus, Device, Func, 0);

  //
  // Read the Vendor ID register
  //
  Status = PciRootBridgeIo->Pci.Read (
                                  PciRootBridgeIo,
                                  EfiPciWidthUint32,
                                  Address,
                                  1,
                                  Pci
                                  );

  if (!EFI_ERROR (Status) && (Pci->Hdr).VendorId != 0xffff) {
    //
    // Read the entire config header for the device
    //
    Status = PciRootBridgeIo->Pci.Read (
                                    PciRootBridgeIo,
                                    EfiPciWidthUint32,
                                    Address,
                                    sizeof (PCI_TYPE00) / sizeof (UINT32),
                                    Pci
                                    );

    return EFI_SUCCESS;
  }

  return EFI_NOT_FOUND;
}
