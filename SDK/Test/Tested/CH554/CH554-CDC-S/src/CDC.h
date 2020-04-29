#include "CH554.H"                                                          
#include "Debug.H"
#include "GPIO.H"
#include "stdio.h"


#define UsbSetupBuf     ((PUSB_SETUP_REQ)Ep0Buffer)

#define  SET_LINE_CODING                0X20            // Configures DTE rate, stop-bits, parity, and number-of-character
#define  GET_LINE_CODING                0X21            // This request allows the host to find out the currently configured line coding.
#define  SET_CONTROL_LINE_STATE         0X22            // This request generates RS-232/V.24 style control signals.



void USBDeviceCfg();

void USBDeviceIntCfg();
void USBDeviceEndPointCfg();


void Config_Uart1(UINT8 *cfg_uart);


void    DeviceInterrupt( void );
void Uart1_ISR(void);
void CDC();