/********************************** (C) COPYRIGHT *******************************
* File Name          : CDC.C
* Author             : WCH
* Version            : V1.0
* Date               : 2017/03/01
* Description        : CH554��CDC�豸ת���ڣ�ѡ�񴮿�1
*******************************************************************************/
#include "CH554.H"
#include "DEBUG.H"
#include <stdio.h>
#include <string.h>

#include "gpio.h"
#include "touchkey.h"

#pragma  NOAREGS

UINT8X  Ep0Buffer[DEFAULT_ENDP0_SIZE] _at_ 0x0000;                                 //�˵�0 OUT&IN��������������ż��ַ
UINT8X  Ep1Buffer[8] _at_ 0x0040;                                                  //�˵�1�ϴ�������
UINT8X  Ep2Buffer[2*MAX_PACKET_SIZE] _at_ 0x0080;                                  //�˵�2 IN & OUT������,������ż��ַ

UINT16 SetupLen;
UINT8   SetupReq,Count,UsbConfig;
PUINT8  pDescr;                                                                //USB���ñ�־
USB_SETUP_REQ   SetupReqBuf;                                                   //�ݴ�Setup��
#define UsbSetupBuf     ((PUSB_SETUP_REQ)Ep0Buffer)

#define  SET_LINE_CODING                0X20            // Configures DTE rate, stop-bits, parity, and number-of-character
#define  GET_LINE_CODING                0X21            // This request allows the host to find out the currently configured line coding.
#define  SET_CONTROL_LINE_STATE         0X22            // This request generates RS-232/V.24 style control signals.


/*�豸������*/
UINT8C DevDesc[] = {0x12,0x01,0x10,0x01,0x02,0x00,0x00,DEFAULT_ENDP0_SIZE,
                    0x86,0x1a,0x22,0x57,0x00,0x01,0x01,0x02,
                    0x03,0x01
                   };
UINT8C CfgDesc[] = {
	0x09,0x02,0x43,0x00,0x02,0x01,0x00,0xa0,0x32,             //�����������������ӿڣ�
	//����Ϊ�ӿ�0��CDC�ӿڣ�������
	0x09,0x04,0x00,0x00,0x01,0x02,0x02,0x01,0x00,             //CDC�ӿ�������(һ���˵�)
	//����Ϊ����������
	0x05,0x24,0x00,0x10,0x01,                                 //����������(ͷ)
	0x05,0x24,0x01,0x00,0x00,                                 //����������(û��������ӿ�) 03 01
	0x04,0x24,0x02,0x02,                                      //֧��Set_Line_Coding��Set_Control_Line_State��Get_Line_Coding��Serial_State
	0x05,0x24,0x06,0x00,0x01,                                 //���Ϊ0��CDC�ӿ�;���1��������ӿ�
	0x07,0x05,0x81,0x03,0x08,0x00,0xFF,                       //�ж��ϴ��˵�������
	//����Ϊ�ӿ�1�����ݽӿڣ�������
	0x09,0x04,0x01,0x00,0x02,0x0a,0x00,0x00,0x00,             //���ݽӿ�������
	0x07,0x05,0x02,0x02,0x40,0x00,0x00,                       //�˵�������
	0x07,0x05,0x82,0x02,0x40,0x00,0x00,                       //�˵�������
};
/*�ַ���������*/
unsigned char  code LangDes[]= {0x04,0x03,0x09,0x04};          //����������
unsigned char  code SerDes[]= {                                //���к��ַ���������
	0x14,0x03,
	0x32,0x00,0x30,0x00,0x31,0x00,0x37,0x00,0x2D,0x00,
	0x32,0x00,0x2D,0x00,
	0x32,0x00,0x35,0x00
};
unsigned char  code Prod_Des[]= {                               //��Ʒ�ַ���������
	0x14,0x03,
	0x43,0x00,0x48,0x00,0x35,0x00,0x35,0x00,0x34,0x00,0x5F,0x00,
	0x43,0x00,0x44,0x00,0x43,0x00,
};
unsigned char  code Manuf_Des[]= {
	0x0A,0x03,
	0x5F,0x6c,0xCF,0x82,0x81,0x6c,0x52,0x60,
};

//cdc����
UINT8X LineCoding[7]= {0x00,0xe1,0x00,0x00,0x00,0x00,0x08};  //��ʼ��������Ϊ57600��1ֹͣλ����У�飬8����λ��

#define UART_REV_LEN  64                 //���ڽ��ջ�������С
UINT8I Receive_Uart_Buf[UART_REV_LEN];   //���ڽ��ջ�����
volatile UINT8I Uart_Input_Point = 0;   //ѭ��������д��ָ�룬���߸�λ��Ҫ��ʼ��Ϊ0
volatile UINT8I Uart_Output_Point = 0;  //ѭ��������ȡ��ָ�룬���߸�λ��Ҫ��ʼ��Ϊ0
volatile UINT8I UartByteCount = 0;      //��ǰ������ʣ���ȡ�ֽ���


volatile UINT8I USBByteCount = 0;      //����USB�˵���յ�������
volatile UINT8I USBBufOutPoint = 0;    //ȡ����ָ��

volatile UINT8I UpPoint2_Busy  = 0;   //�ϴ��˵��Ƿ�æ��־


/*******************************************************************************
* Function Name  : USBDeviceCfg()
* Description    : USB�豸ģʽ����
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceCfg() {
	USB_CTRL = 0x00;                                                           	//���USB���ƼĴ���
	USB_CTRL &= ~bUC_HOST_MODE;                                                	//��λΪѡ���豸ģʽ
	USB_CTRL |=  bUC_DEV_PU_EN | bUC_INT_BUSY | bUC_DMA_EN;                    	//USB�豸���ڲ�����ʹ��,���ж��ڼ��жϱ�־δ���ǰ�Զ�����NAK
	USB_DEV_AD = 0x00;                                                         	//�豸��ַ��ʼ��
//     USB_CTRL |= bUC_LOW_SPEED;
//     UDEV_CTRL |= bUD_LOW_SPEED;                                              //ѡ�����1.5Mģʽ
	USB_CTRL &= ~bUC_LOW_SPEED;
	UDEV_CTRL &= ~bUD_LOW_SPEED;                                             		//ѡ��ȫ��12Mģʽ��Ĭ�Ϸ�ʽ
	UDEV_CTRL = bUD_PD_DIS;  																										// ��ֹDP/DM��������
	UDEV_CTRL |= bUD_PORT_EN;                                                  	//ʹ�������˿�
}
/*******************************************************************************
* Function Name  : USBDeviceIntCfg()
* Description    : USB�豸ģʽ�жϳ�ʼ��
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceIntCfg() {
	USB_INT_EN |= bUIE_SUSPEND;                                               //ʹ���豸�����ж�
	USB_INT_EN |= bUIE_TRANSFER;                                              //ʹ��USB��������ж�
	USB_INT_EN |= bUIE_BUS_RST;                                               //ʹ���豸ģʽUSB���߸�λ�ж�
	USB_INT_FG |= 0x1F;                                                       //���жϱ�־
	IE_USB = 1;                                                               //ʹ��USB�ж�
	EA = 1;                                                                   //������Ƭ���ж�
}
/*******************************************************************************
* Function Name  : USBDeviceEndPointCfg()
* Description    : USB�豸ģʽ�˵����ã�ģ�����HID�豸�����˶˵�0�Ŀ��ƴ��䣬�������˵�2�������´�
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceEndPointCfg() {
	UEP1_DMA = Ep1Buffer;                                                      //�˵�1 �������ݴ����ַ
	UEP2_DMA = Ep2Buffer;                                                      //�˵�2 IN���ݴ����ַ
	UEP2_3_MOD = 0xCC;                                                         //�˵�2/3 �������շ�ʹ��
	UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;                 //�˵�2�Զ���תͬ����־λ��IN���񷵻�NAK��OUT����ACK

	UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;                                 //�˵�1�Զ���תͬ����־λ��IN���񷵻�NAK
	UEP0_DMA = Ep0Buffer;                                                      //�˵�0���ݴ����ַ
	UEP4_1_MOD = 0X40;                                                         //�˵�1�ϴ����������˵�0��64�ֽ��շ�������
	UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;                                 //�ֶ���ת��OUT���񷵻�ACK��IN���񷵻�NAK
}
/*******************************************************************************
* Function Name  : Config_Uart1(UINT8 *cfg_uart)
* Description    : ���ô���1����
* Input          : �������ò��� ��λ�����ʡ�ֹͣλ��У�顢����λ
* Output         : None
* Return         : None
*******************************************************************************/
void Config_Uart1(UINT8 *cfg_uart) {
	UINT32 uart1_buad = 0;
	*((UINT8 *)&uart1_buad) = cfg_uart[3];
	*((UINT8 *)&uart1_buad+1) = cfg_uart[2];
	*((UINT8 *)&uart1_buad+2) = cfg_uart[1];
	*((UINT8 *)&uart1_buad+3) = cfg_uart[0];
	IE_UART1 = 0;
	SBAUD1 = 0 - FREQ_SYS/16/uart1_buad;
	IE_UART1 = 1;
}
/*******************************************************************************
* Function Name  : DeviceInterrupt()
* Description    : CH559USB�жϴ�������
*******************************************************************************/
void    DeviceInterrupt( void ) interrupt INT_NO_USB {                     //USB�жϷ������,ʹ�üĴ�����1
	UINT16 len;
	if(UIF_TRANSFER) {                                                          //USB������ɱ�־
		switch (USB_INT_ST & (MASK_UIS_TOKEN | MASK_UIS_ENDP)) {
		case UIS_TOKEN_IN | 1:                                                  //endpoint 1# �˵��ж��ϴ�
			UEP1_T_LEN = 0;
			UEP1_CTRL = UEP1_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //Ĭ��Ӧ��NAK
			break;
		case UIS_TOKEN_IN | 2: {                                                //endpoint 2# �˵������ϴ�
			UEP2_T_LEN = 0;                                                    //Ԥʹ�÷��ͳ���һ��Ҫ���
			UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //Ĭ��Ӧ��NAK
			UpPoint2_Busy = 0;                                                  //���æ��־
		}
		break;
		case UIS_TOKEN_OUT | 2:                                                 //endpoint 3# �˵������´�
			if ( U_TOG_OK ) {                                                   // ��ͬ�������ݰ�������
				USBByteCount = USB_RX_LEN;
				USBBufOutPoint = 0;                                             //ȡ����ָ�븴λ
				UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_NAK;       //�յ�һ�����ݾ�NAK�������������꣬���������޸���Ӧ��ʽ
			}
			break;
		case UIS_TOKEN_SETUP | 0:                                                //SETUP����
			len = USB_RX_LEN;
			if(len == (sizeof(USB_SETUP_REQ))) {
				SetupLen = ((UINT16)UsbSetupBuf->wLengthH<<8) | (UsbSetupBuf->wLengthL);
				len = 0;                                                      // Ĭ��Ϊ�ɹ������ϴ�0����
				SetupReq = UsbSetupBuf->bRequest;
				if ( ( UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD ) { //�Ǳ�׼����
					switch( SetupReq ) {
					case GET_LINE_CODING:   //0x21  currently configured
						pDescr = LineCoding;
						len = sizeof(LineCoding);
						len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;  // ���δ��䳤��
						memcpy(Ep0Buffer,pDescr,len);
						SetupLen -= len;
						pDescr += len;
						break;
					case SET_CONTROL_LINE_STATE:  //0x22  generates RS-232/V.24 style control signals
						break;
					case SET_LINE_CODING:      //0x20  Configure
						break;
					default:
						len = 0xFF;  								 					                 /*���֧��*/
						break;
					}
				} else {                                                         //��׼����
					switch(SetupReq) {                                           //������
					case USB_GET_DESCRIPTOR:
						switch(UsbSetupBuf->wValueH) {
						case 1:                                                       //�豸������
							pDescr = DevDesc;                                         //���豸�������͵�Ҫ���͵Ļ�����
							len = sizeof(DevDesc);
							break;
						case 2:                                                        //����������
							pDescr = CfgDesc;                                          //���豸�������͵�Ҫ���͵Ļ�����
							len = sizeof(CfgDesc);
							break;
						case 3:
							if(UsbSetupBuf->wValueL == 0) {
								pDescr = LangDes;
								len = sizeof(LangDes);
							} else if(UsbSetupBuf->wValueL == 1) {
								pDescr = Manuf_Des;
								len = sizeof(Manuf_Des);
							} else if(UsbSetupBuf->wValueL == 2) {
								pDescr = Prod_Des;
								len = sizeof(Prod_Des);
							} else {
								pDescr = SerDes;
								len = sizeof(SerDes);
							}
							break;
						default:
							len = 0xff;                                                //��֧�ֵ�������߳���
							break;
						}
						if ( SetupLen > len ) {
							SetupLen = len;    //�����ܳ���
						}
						len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                            //���δ��䳤��
						memcpy(Ep0Buffer,pDescr,len);                                  //�����ϴ�����
						SetupLen -= len;
						pDescr += len;
						break;
					case USB_SET_ADDRESS:
						SetupLen = UsbSetupBuf->wValueL;                              //�ݴ�USB�豸��ַ
						break;
					case USB_GET_CONFIGURATION:
						Ep0Buffer[0] = UsbConfig;
						if ( SetupLen >= 1 ) {
							len = 1;
						}
						break;
					case USB_SET_CONFIGURATION:
						UsbConfig = UsbSetupBuf->wValueL;
						break;
					case USB_GET_INTERFACE:
						break;
					case USB_CLEAR_FEATURE:                                            //Clear Feature
						if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE ) {                /* ����豸 */
							if( ( ( ( UINT16 )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 ) {
								if( CfgDesc[ 7 ] & 0x20 ) {
									/* ���� */
								} else {
									len = 0xFF;                                        /* ����ʧ�� */
								}
							} else {
								len = 0xFF;                                            /* ����ʧ�� */
							}
						} else if ( ( UsbSetupBuf->bRequestType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP ) { // �˵�
							switch( UsbSetupBuf->wIndexL ) {
							case 0x83:
								UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
								break;
							case 0x03:
								UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
								break;
							case 0x82:
								UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
								break;
							case 0x02:
								UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
								break;
							case 0x81:
								UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
								break;
							case 0x01:
								UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
								break;
							default:
								len = 0xFF;                                         // ��֧�ֵĶ˵�
								break;
							}
						} else {
							len = 0xFF;                                                // ���Ƕ˵㲻֧��
						}
						break;
					case USB_SET_FEATURE:                                          /* Set Feature */
						if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE ) {                /* �����豸 */
							if( ( ( ( UINT16 )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 ) {
								if( CfgDesc[ 7 ] & 0x20 ) {
									/* ���� */
#ifdef DE_PRINTF
									printf( "suspend\n" );                                                             //˯��״̬
#endif
									while ( XBUS_AUX & bUART0_TX ) {
										;    //�ȴ��������
									}
									SAFE_MOD = 0x55;
									SAFE_MOD = 0xAA;
									WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB����RXD0/1���ź�ʱ�ɱ�����
									PCON |= PD;                                                                 //˯��
									SAFE_MOD = 0x55;
									SAFE_MOD = 0xAA;
									WAKE_CTRL = 0x00;
								} else {
									len = 0xFF;                                        /* ����ʧ�� */
								}
							} else {
								len = 0xFF;                                            /* ����ʧ�� */
							}
						} else if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_ENDP ) {         /* ���ö˵� */
							if( ( ( ( UINT16 )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x00 ) {
								switch( ( ( UINT16 )UsbSetupBuf->wIndexH << 8 ) | UsbSetupBuf->wIndexL ) {
								case 0x83:
									UEP3_CTRL = UEP3_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ���ö˵�3 IN STALL */
									break;
								case 0x03:
									UEP3_CTRL = UEP3_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ���ö˵�3 OUT Stall */
									break;
								case 0x82:
									UEP2_CTRL = UEP2_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ���ö˵�2 IN STALL */
									break;
								case 0x02:
									UEP2_CTRL = UEP2_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ���ö˵�2 OUT Stall */
									break;
								case 0x81:
									UEP1_CTRL = UEP1_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ���ö˵�1 IN STALL */
									break;
								case 0x01:
									UEP1_CTRL = UEP1_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ���ö˵�1 OUT Stall */
								default:
									len = 0xFF;                                    /* ����ʧ�� */
									break;
								}
							} else {
								len = 0xFF;                                      /* ����ʧ�� */
							}
						} else {
							len = 0xFF;                                          /* ����ʧ�� */
						}
						break;
					case USB_GET_STATUS:
						Ep0Buffer[0] = 0x00;
						Ep0Buffer[1] = 0x00;
						if ( SetupLen >= 2 ) {
							len = 2;
						} else {
							len = SetupLen;
						}
						break;
					default:
						len = 0xff;                                                    //����ʧ��
						break;
					}
				}
			} else {
				len = 0xff;                                                         //�����ȴ���
			}
			if(len == 0xff) {
				SetupReq = 0xFF;
				UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_STALL | UEP_T_RES_STALL;//STALL
			} else if(len <= DEFAULT_ENDP0_SIZE) {                                                   //�ϴ����ݻ���״̬�׶η���0���Ȱ�
				UEP0_T_LEN = len;
				UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//Ĭ�����ݰ���DATA1������Ӧ��ACK
			} else {
				UEP0_T_LEN = 0;  //��Ȼ��δ��״̬�׶Σ�������ǰԤ���ϴ�0�������ݰ��Է�������ǰ����״̬�׶�
				UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//Ĭ�����ݰ���DATA1,����Ӧ��ACK
			}
			break;
		case UIS_TOKEN_IN | 0:                                                      //endpoint0 IN
			switch(SetupReq) {
			case USB_GET_DESCRIPTOR:
				len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                                 //���δ��䳤��
				memcpy( Ep0Buffer, pDescr, len );                                   //�����ϴ�����
				SetupLen -= len;
				pDescr += len;
				UEP0_T_LEN = len;
				UEP0_CTRL ^= bUEP_T_TOG;                                             //ͬ����־λ��ת
				break;
			case USB_SET_ADDRESS:
				USB_DEV_AD = USB_DEV_AD & bUDA_GP_BIT | SetupLen;
				UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
				break;
			default:
				UEP0_T_LEN = 0;                                                      //״̬�׶�����жϻ�����ǿ���ϴ�0�������ݰ��������ƴ���
				UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
				break;
			}
			break;
		case UIS_TOKEN_OUT | 0:  // endpoint0 OUT
			if(SetupReq ==SET_LINE_CODING) { //���ô�������
				if( U_TOG_OK ) {
					memcpy(LineCoding,UsbSetupBuf,USB_RX_LEN);
//					Config_Uart1(LineCoding);
					UEP0_T_LEN = 0;
					UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_ACK;  // ׼���ϴ�0��
				}
			} else {
				UEP0_T_LEN = 0;
				UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_NAK;  //״̬�׶Σ���IN��ӦNAK
			}
			break;



		default:
			break;
		}
		UIF_TRANSFER = 0;                                                           //д0����ж�
	}
	if(UIF_BUS_RST) {                                                               //�豸ģʽUSB���߸�λ�ж�
#ifdef DE_PRINTF
		printf( "reset\n" );                                                             //˯��״̬
#endif
		UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
		UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
		UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;
		USB_DEV_AD = 0x00;
		UIF_SUSPEND = 0;
		UIF_TRANSFER = 0;
		UIF_BUS_RST = 0;                                                             //���жϱ�־
		Uart_Input_Point = 0;   //ѭ������������ָ��
		Uart_Output_Point = 0;  //ѭ������������ָ��
		UartByteCount = 0;      //��ǰ������ʣ���ȡ�ֽ���
		USBByteCount = 0;       //USB�˵��յ��ĳ���
		UsbConfig = 0;          //�������ֵ
		UpPoint2_Busy = 0;
	}
	if (UIF_SUSPEND) {                                                               //USB���߹���/�������
		UIF_SUSPEND = 0;
		if ( USB_MIS_ST & bUMS_SUSPEND ) {                                           //����
#ifdef DE_PRINTF
			printf( "suspend\n" );                                                             //˯��״̬
#endif
			while ( XBUS_AUX & bUART0_TX ) {
				;    //�ȴ��������
			}
			SAFE_MOD = 0x55;
			SAFE_MOD = 0xAA;
			WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB����RXD0/1���ź�ʱ�ɱ�����
			PCON |= PD;                                                                 //˯��
			SAFE_MOD = 0x55;
			SAFE_MOD = 0xAA;
			WAKE_CTRL = 0x00;
		}
	} else {                                                                           //������ж�,�����ܷ��������
		USB_INT_FG = 0xFF;                                                             //���жϱ�־

	}
}
/*******************************************************************************
* Function Name  : Uart1_ISR()
* Description    : ���ڽ����жϺ�����ʵ��ѭ���������
*******************************************************************************/
void Uart1_ISR(void) interrupt INT_NO_UART1 {
	if(U1RI) { //�յ�����
		Receive_Uart_Buf[Uart_Input_Point++] = SBUF1;
		UartByteCount++;                    //��ǰ������ʣ���ȡ�ֽ���
		if(Uart_Input_Point>=UART_REV_LEN)
			Uart_Input_Point = 0;           //д��ָ��
		U1RI =0;
	}

}

void Fill_Buffer(UINT8 dat) {
	Receive_Uart_Buf[Uart_Input_Point++] = dat;
	UartByteCount++;                    //��ǰ������ʣ���ȡ�ֽ���
	if(Uart_Input_Point>=UART_REV_LEN)
		Uart_Input_Point = 0;           //д��ָ��
}

sbit LED0 = P1^6;
sbit LED1 = P1^7;

//������
main() {
	UINT8 lenth;
	UINT8 Uart_Timeout = 0;
	UINT8	key = 0;
	CfgFsys( );                                                           //CH559ʱ��ѡ������
	mDelaymS(5);                                                          //�޸���Ƶ�ȴ��ڲ������ȶ�,�ؼ�
	mInitSTDIO( );                                                        //����0,�������ڵ���
//		UART1Setup( );                                                        //����CDC

	TK_Init( BIT4+BIT5+BIT6+BIT7,  1, 1 );		/* Choose TIN2, TIN3, TIN4, TIN5 for touchkey input. enable interrupt. */
	TK_SelectChannel(0);											/* NOTICE: ch is not compatible with the IO actually. */

//		Port1Cfg(1,6);                                                             //P16��������ģʽ
//    Port1Cfg(1,7);                                                             //P17��������ģʽ
//    LED0 = 0;
//    LED1 = 0;

#ifdef DE_PRINTF
	printf("start ...\n");
#endif
	USBDeviceCfg();
	USBDeviceEndPointCfg();                                               //�˵�����
	USBDeviceIntCfg();                                                    //�жϳ�ʼ��
	UEP0_T_LEN = 0;
	UEP1_T_LEN = 0;                                                       //Ԥʹ�÷��ͳ���һ��Ҫ���
	UEP2_T_LEN = 0;                                                       //Ԥʹ�÷��ͳ���һ��Ҫ���

	while(1) {
		if( Touch_IN != 0 ) {
			key = Touch_IN;
			Touch_IN = 0;
			Fill_Buffer(key);
		}
		if(UsbConfig) {
			if(USBByteCount) {	//usb ���ն�������
				USBByteCount = 0;
				UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_ACK;	//
			}
			if(UartByteCount)
				Uart_Timeout++;
			if(!UpPoint2_Busy) { //�˵㲻��æ�����к�ĵ�һ�����ݣ�ֻ���������ϴ���
				if(UartByteCount) {
					lenth = UartByteCount;
					if(lenth>0) {
						if(lenth>39 || Uart_Timeout>100) {
							Uart_Timeout = 0;
							if(Uart_Output_Point+lenth>UART_REV_LEN)
								lenth = UART_REV_LEN-Uart_Output_Point;
							UartByteCount -= lenth;
							//д�ϴ��˵�
							memcpy(Ep2Buffer+MAX_PACKET_SIZE,&Receive_Uart_Buf[Uart_Output_Point],lenth);
							Uart_Output_Point+=lenth;
							if(Uart_Output_Point>=UART_REV_LEN)
								Uart_Output_Point = 0;
							UEP2_T_LEN = lenth;                                                    //Ԥʹ�÷��ͳ���һ��Ҫ���
							UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_ACK;            //Ӧ��ACK
							UpPoint2_Busy = 1;
						}
					}
				}
			}
		}
	}
}