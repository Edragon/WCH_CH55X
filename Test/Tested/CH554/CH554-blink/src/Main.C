
/********************************** (C) COPYRIGHT *******************************

*******************************************************************************/
#include "CH554.H"
#include "Debug.H"
#include "GPIO.H"

// for printf
#include <stdio.h>

sbit	LED1=P1^4;
sbit	LED3=P3^3;



main( )
{
	CfgFsys();                                                                //CH554 ±÷”—°‘Ò≈‰÷√
	mDelaymS(5);
	
	mInitSTDIO(); // init uart0
	UART1Setup(); // init uart1
	
	Port1Cfg(1, 4);  // port 1 pin 4 P1^4
	Port3Cfg(1, 3);  // port 3 pin 3 P3^3
	
	
	while(1)
  {
		mDelaymS(500);
		LED1=!LED1;
		LED3=!LED3;
		
		
		CH554UART1SendByte('R'); // this is uart1
		
		CH554UART0SendByte('U'); // this is uart0
		
		printf("this is a print test..."); // string print to uart0 debug
		
  }
	
}