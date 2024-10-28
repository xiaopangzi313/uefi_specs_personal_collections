  #
  # Application  modules
  #
  CsdnPkg/DumpHobs/DumpHobs.inf
  CsdnPkg/HelloWorldPci/HelloWorldPci.inf
  CsdnPkg/MyHelloWorldAcpiDump/MyHelloWorldAcpiDump.inf
  # CsdnPkg/MyHelloWorldStdLibC/MyHelloWorldStdLibC.inf
  ShellPkg/Application/ShellSortTestApp/ShellSortTestApp.inf

  CsdnPkg/MyHelloWorldFileIO/MyHelloWorldFileIO.inf
  CsdnPkg/MyHelloWorldPCD/MyHelloWorldPCD.inf
  CsdnPkg/MyHelloWorldEvent/MyHelloWorldEvent.inf
  CsdnPkg/HelloWorld/HelloWorld.inf
  CsdnPkg/MyMemMap/MyMemMap.inf
  CsdnPkg/MyVariable/MyVariable.inf

  #
  # PEI Phase modules
  #
  CsdnPkg/MyHelloWorldPEIMHob/MyHelloWorldPEIMHob.inf
  CsdnPkg/MyHelloWorldPEIMDriver/MyHelloWorldPEIMDriver.inf
  CsdnPkg/MyHelloWorldInstallPPI/MyHelloWorldInstallPPI.inf
  CsdnPkg/MyHelloWorldLocatePPI/MyHelloWorldLocatePPI.inf

  #
  # DXE Phase modules
  #
  CsdnPkg/MyHelloWorldDXEHob/MyHelloWorldDXEHob.inf
  CsdnPkg/MyHelloWorldAppProtocol/MyHelloWorldAppProtocol.inf
  CsdnPkg/MyHelloWorldDXEDriver/MyHelloWorldDXEDriver.inf
  CsdnPkg/MyHelloworldInstallAcpiDxe/MyHelloworldInstallAcpiDxe.inf
  CsdnPkg/MyHelloWorldDXEProtocol/MyHelloWorldDXEProtocol.inf

  #
  # SMM Phase modules
  #
  # CsdnPkg/CsdnDxeCommunication/CsdnDxeCommunication.inf
  CsdnPkg/CsdnDxeIO/CsdnDxeSmiIO.inf
  CsdnPkg/CsdnRTIODebug/CsdnRTIODebug.inf
  CsdnPkg/CsdnSmm/CsdnSmm.inf
  CsdnPkg/CsdnSmmCommunication/CsdnSmmCommunication.inf