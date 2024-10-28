#include <Library/TimerLib.h>   
#include <Library/IoLib.h>     
#include <Library/DebugLib.h>     

#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>

VOID
PutChar(
    UINT8 data
){
  if (data >=0 && data<=9){
    IoWrite8(0x3f8, data + 48);
  }else if (data >=10 && data<=15)
  {
    IoWrite8(0x3f8, data -10 + 65);
  }else{
    IoWrite8(0x3f8, '#');
  }
  MicroSecondDelay (5000);  //fix mess code
}


// VOID
// DumpVirtAddr(
//     VOID   *ConvertAddress
//     ){
//   UINT32                  Temp =  0;
//   EFI_PHYSICAL_ADDRESS    VirtImageBase;

//   VirtImageBase = (EFI_PHYSICAL_ADDRESS) (UINTN) ConvertAddress;
//   Temp =  (UINT32) (VirtImageBase & 0xFFFFFFFF);

//   PutChar((UINT8)((Temp & 0xF0000000) >> 28));
//   PutChar((UINT8)((Temp & 0x0F000000) >> 24));
//   PutChar((UINT8)((Temp & 0x00F00000) >> 20));
//   PutChar((UINT8)((Temp & 0x000F0000) >> 16));
//   PutChar((UINT8)((Temp & 0x0000F000) >> 12));
//   PutChar((UINT8)((Temp & 0x00000F00) >> 8));
//   PutChar((UINT8)((Temp & 0x000000F0) >> 4));
//   PutChar((UINT8)((Temp & 0x0000000F) ));
  
//   IoWrite8(0x3f8, '\n');
// }

VOID
DumpUint32(
    UINTN intvar
    ){
  UINT32                  Temp =  0;

  Temp =  (UINT32) (intvar & 0xFFFFFFFF);

  PutChar((UINT8)((Temp & 0xF0000000) >> 28));
  PutChar((UINT8)((Temp & 0x0F000000) >> 24));
  PutChar((UINT8)((Temp & 0x00F00000) >> 20));
  PutChar((UINT8)((Temp & 0x000F0000) >> 16));
  PutChar((UINT8)((Temp & 0x0000F000) >> 12));
  PutChar((UINT8)((Temp & 0x00000F00) >> 8));
  PutChar((UINT8)((Temp & 0x000000F0) >> 4));
  PutChar((UINT8)((Temp & 0x0000000F) ));
  IoWrite8(0x3f8, '\n');
}

VOID
AsciiPutChar(
    UINT8 data
){
  IoWrite8(0x3f8, data);
  MicroSecondDelay (5000);   
}

VOID
AsciiPrintSerialString(
    CHAR8 * string
){
  UINT16 i = 0;
  UINTN length;
  length = AsciiStrSize(string);

  if ((string == NULL) || (length < 1))
     return;

  for (i = 0; i < length; i ++){
    IoWrite8(0x3f8, string[i]);
    MicroSecondDelay (5000);
  }
  IoWrite8(0x3f8, '\n');
}

EFI_STATUS
EFIAPI
CsdnRTIODebugEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{   
  EFI_STATUS  Status = EFI_SUCCESS;
  DEBUG((EFI_D_ERROR, "[Csdn] %a Enter"));
  
  AsciiPrintSerialString("[Csdn] RT IO Debug");

  DEBUG((EFI_D_ERROR, "[Csdn] %a Enter"));
  
  return Status;
}


