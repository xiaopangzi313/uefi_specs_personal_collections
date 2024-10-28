#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiRuntimeLib.h>


EFI_STATUS MyHelloWorldEventEntry(
        IN EFI_HANDLE           ImageHandle,
        IN EFI_SYSTEM_TABLE     *SystemTable
		)
{
    EFI_STATUS Status;

    UINTN        Index=0;
	EFI_INPUT_KEY      Key;
    EFI_EVENT myEvents[2] = {0};
    

	Print (L"[MyHelloWorldEvent] MyHelloWorldEventEntry Start..\n");
	// 1. �����¼�
	// ���ɰ����¼�
	myEvents[0] = gST->ConIn->WaitForKey;
	 

	
	// ����Timer�¼�
	Status = gBS->CreateEvent(EVT_TIMER , TPL_CALLBACK, (EFI_EVENT_NOTIFY)NULL, (VOID*)NULL, &myEvents[1]);
	if(EFI_ERROR(Status)){
	  Print (L"[MyHelloWorldEvent] CreateEvent %r ...\n",Status);
	  return Status;
	}
	
	Status = gBS->SetTimer(myEvents[1],TimerPeriodic , 100 * 1000 * 1000);//����10�붨ʱ
	if(EFI_ERROR(Status)){
	  Print (L"[MyHelloWorldEvent] SetTimer %r ...\n",Status);
	  return Status;
	}
	
	while (1){
		//2. �������ȴ��¼�������
		Status = gBS->WaitForEvent(2, myEvents, &Index);
		if(EFI_ERROR(Status)){
		  Print (L"[MyHelloWorldEvent] WaitForEvent %r ...\n",Status);
		  return Status;
		}
	
		if (Index == 0){
			// ��ȡ������ֵ����ʾ
		    Status = gST->ConIn->ReadKeyStroke (gST->ConIn, &Key); 
			switch (Key.ScanCode){
			  case SCAN_UP:
				Print (L"[MyHelloWorldEvent]  Key UP is Pressed..\n");
				break;
		   
			  case SCAN_DOWN:
				Print (L"[MyHelloWorldEvent]  Key Down is Pressed..\n");
				break;
			  
			  case SCAN_RIGHT:
				Print (L"[MyHelloWorldEvent]  Key RIGHT is Pressed..\n");
				break;
			  
			  case SCAN_LEFT:
			    Print (L"[MyHelloWorldEvent]  Key LEFT is Pressed..\n");
			    break;
			  
			  case SCAN_F1:
				Print (L"[MyHelloWorldEvent]  Key F1 is Pressed..\n");
				break;
			  
			  case SCAN_F2:
				Print (L"[MyHelloWorldEvent]  Key F2 is Pressed..\n");
				break;
			  
			  case SCAN_F3:
				Print (L"[MyHelloWorldEvent]  Key F3 is Pressed..\n");
				break;
			  
			  case SCAN_F4:
				Print (L"[MyHelloWorldEvent]  Key F4 is Pressed..\n");
				break;
				
		      case SCAN_ESC:
				Print (L"[MyHelloWorldEvent]  Key ESC is Pressed..\n");
				goto End;
				
			  default:
				Print (L"[MyHelloWorldEvent] Key %a is Pressed..\n",(CHAR8 *)&Key.UnicodeChar);
				break;
			}
		}else{
			Print (L"[MyHelloWorldEvent]  Timer event is trigered ..\n");
		}
	}
	
End:
    Status = gBS->CloseEvent(myEvents[0]);
    Status = gBS->CloseEvent(myEvents[1]);
	  
	Print (L"[MyHelloWorldEvent] MyHelloWorldEventEntry End..\n");
	return Status;
}
