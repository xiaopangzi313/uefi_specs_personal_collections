  #
  # Application  modules
  #
  CsdnPcPkg/DumpHobs/DumpHobs.inf
  CsdnPcPkg/HelloWorldPci/HelloWorldPci.inf
  CsdnPcPkg/MyHelloWorldAcpiDump/MyHelloWorldAcpiDump.inf
  # CsdnPcPkg/MyHelloWorldStdLibC/MyHelloWorldStdLibC.inf
  ShellPkg/Application/ShellSortTestApp/ShellSortTestApp.inf

  CsdnPcPkg/MyHelloWorldFileIO/MyHelloWorldFileIO.inf
  CsdnPcPkg/MyHelloWorldPCD/MyHelloWorldPCD.inf
  CsdnPcPkg/MyHelloWorldEvent/MyHelloWorldEvent.inf
  CsdnPcPkg/HelloWorld/HelloWorld.inf
  CsdnPcPkg/MyMemMap/MyMemMap.inf
  CsdnPcPkg/MyVariable/MyVariable.inf

  #
  # PEI Phase modules
  #
  CsdnPcPkg/MyHelloWorldPEIMHob/MyHelloWorldPEIMHob.inf
  CsdnPcPkg/MyHelloWorldPEIMDriver/MyHelloWorldPEIMDriver.inf
  CsdnPcPkg/MyHelloWorldInstallPPI/MyHelloWorldInstallPPI.inf
  CsdnPcPkg/MyHelloWorldLocatePPI/MyHelloWorldLocatePPI.inf
  CsdnPcPkg/MpServicePei/MpServicePei.inf

  #
  # DXE Phase modules
  #
  CsdnPcPkg/MyHelloWorldDXEHob/MyHelloWorldDXEHob.inf
  CsdnPcPkg/MyHelloWorldAppProtocol/MyHelloWorldAppProtocol.inf
  CsdnPcPkg/MyHelloWorldDXEDriver/MyHelloWorldDXEDriver.inf
  CsdnPcPkg/MyHelloworldInstallAcpiDxe/MyHelloworldInstallAcpiDxe.inf
  CsdnPcPkg/MyHelloWorldDXEProtocol/MyHelloWorldDXEProtocol.inf
  CsdnPcPkg/PlatformSmbiosTable/PlatformSmbiosTable.inf


  #
  # SMM Phase modules
  #
  # CsdnPcPkg/CsdnDxeCommunication/CsdnDxeCommunication.inf
  CsdnPcPkg/CsdnDxeIO/CsdnDxeSmiIO.inf
  CsdnPcPkg/CsdnRTIODebug/CsdnRTIODebug.inf
  CsdnPcPkg/CsdnSmm/CsdnSmm.inf
  CsdnPcPkg/CsdnSmmCommunication/CsdnSmmCommunication.inf