
/********************************** (C) COPYRIGHT *******************************

*******************************************************************************/
#include "CH554.H"
#include "Debug.H"
#include "GPIO.H"

#include <stdio.h>

sbit	LED=P1^4;
main( )
{
	CfgFsys( );                                                                //CH554 ±÷”—°‘Ò≈‰÷√
	mDelaymS(5);
	Port1Cfg(1, 4);  
	
	UART1Setup();
	while(1)
  {
		mDelaymS(500);
		LED=!LED;
		CH554UART1SendByte('R');

 
  }
}