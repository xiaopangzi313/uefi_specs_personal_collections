#undef MIN
#undef MAX
DefinitionBlock ("csdn.asl","CSDN",2,"ICSDN","PLATCSDN",3)
{

  Scope (\_SB) {
    Name(TEMP,0)   
  
    Device(CSDN) {
      Name(_HID,EISAID("PNP0C03"))
      #ifdef CSDN_ENABLE
        Name(_UID,"CSDNRESV")
      #endif
  
      Method(_STA, 0)
      {
        Return (0)
      }
    }
  }

} // end of DSDT