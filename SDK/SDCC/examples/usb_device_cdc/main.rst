                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Manuf_Des
                                     12 	.globl _Prod_Des
                                     13 	.globl _SerDes
                                     14 	.globl _LangDes
                                     15 	.globl _CfgDesc
                                     16 	.globl _DevDesc
                                     17 	.globl _main
                                     18 	.globl _Uart1_ISR
                                     19 	.globl _DeviceInterrupt
                                     20 	.globl _Config_Uart1
                                     21 	.globl _USBDeviceEndPointCfg
                                     22 	.globl _USBDeviceIntCfg
                                     23 	.globl _USBDeviceCfg
                                     24 	.globl _CH554UART1SendByte
                                     25 	.globl _UART1Setup
                                     26 	.globl _mInitSTDIO
                                     27 	.globl _mDelaymS
                                     28 	.globl _CfgFsys
                                     29 	.globl ___memcpy
                                     30 	.globl _UIF_BUS_RST
                                     31 	.globl _UIF_DETECT
                                     32 	.globl _UIF_TRANSFER
                                     33 	.globl _UIF_SUSPEND
                                     34 	.globl _UIF_HST_SOF
                                     35 	.globl _UIF_FIFO_OV
                                     36 	.globl _U_SIE_FREE
                                     37 	.globl _U_TOG_OK
                                     38 	.globl _U_IS_NAK
                                     39 	.globl _ADC_CHAN0
                                     40 	.globl _ADC_CHAN1
                                     41 	.globl _CMP_CHAN
                                     42 	.globl _ADC_START
                                     43 	.globl _ADC_IF
                                     44 	.globl _CMP_IF
                                     45 	.globl _CMPO
                                     46 	.globl _U1RI
                                     47 	.globl _U1TI
                                     48 	.globl _U1RB8
                                     49 	.globl _U1TB8
                                     50 	.globl _U1REN
                                     51 	.globl _U1SMOD
                                     52 	.globl _U1SM0
                                     53 	.globl _S0_R_FIFO
                                     54 	.globl _S0_T_FIFO
                                     55 	.globl _S0_FREE
                                     56 	.globl _S0_IF_BYTE
                                     57 	.globl _S0_IF_FIRST
                                     58 	.globl _S0_IF_OV
                                     59 	.globl _S0_FST_ACT
                                     60 	.globl _CP_RL2
                                     61 	.globl _C_T2
                                     62 	.globl _TR2
                                     63 	.globl _EXEN2
                                     64 	.globl _TCLK
                                     65 	.globl _RCLK
                                     66 	.globl _EXF2
                                     67 	.globl _CAP1F
                                     68 	.globl _TF2
                                     69 	.globl _RI
                                     70 	.globl _TI
                                     71 	.globl _RB8
                                     72 	.globl _TB8
                                     73 	.globl _REN
                                     74 	.globl _SM2
                                     75 	.globl _SM1
                                     76 	.globl _SM0
                                     77 	.globl _IT0
                                     78 	.globl _IE0
                                     79 	.globl _IT1
                                     80 	.globl _IE1
                                     81 	.globl _TR0
                                     82 	.globl _TF0
                                     83 	.globl _TR1
                                     84 	.globl _TF1
                                     85 	.globl _RXD
                                     86 	.globl _PWM1_
                                     87 	.globl _TXD
                                     88 	.globl _PWM2_
                                     89 	.globl _AIN3
                                     90 	.globl _VBUS1
                                     91 	.globl _INT0
                                     92 	.globl _TXD1_
                                     93 	.globl _INT1
                                     94 	.globl _T0
                                     95 	.globl _RXD1_
                                     96 	.globl _PWM2
                                     97 	.globl _T1
                                     98 	.globl _UDP
                                     99 	.globl _UDM
                                    100 	.globl _TIN0
                                    101 	.globl _CAP1
                                    102 	.globl _T2
                                    103 	.globl _AIN0
                                    104 	.globl _VBUS2
                                    105 	.globl _TIN1
                                    106 	.globl _CAP2
                                    107 	.globl _T2EX
                                    108 	.globl _RXD_
                                    109 	.globl _TXD_
                                    110 	.globl _AIN1
                                    111 	.globl _UCC1
                                    112 	.globl _TIN2
                                    113 	.globl _SCS
                                    114 	.globl _CAP1_
                                    115 	.globl _T2_
                                    116 	.globl _AIN2
                                    117 	.globl _UCC2
                                    118 	.globl _TIN3
                                    119 	.globl _PWM1
                                    120 	.globl _MOSI
                                    121 	.globl _TIN4
                                    122 	.globl _RXD1
                                    123 	.globl _MISO
                                    124 	.globl _TIN5
                                    125 	.globl _TXD1
                                    126 	.globl _SCK
                                    127 	.globl _IE_SPI0
                                    128 	.globl _IE_TKEY
                                    129 	.globl _IE_USB
                                    130 	.globl _IE_ADC
                                    131 	.globl _IE_UART1
                                    132 	.globl _IE_PWMX
                                    133 	.globl _IE_GPIO
                                    134 	.globl _IE_WDOG
                                    135 	.globl _PX0
                                    136 	.globl _PT0
                                    137 	.globl _PX1
                                    138 	.globl _PT1
                                    139 	.globl _PS
                                    140 	.globl _PT2
                                    141 	.globl _PL_FLAG
                                    142 	.globl _PH_FLAG
                                    143 	.globl _EX0
                                    144 	.globl _ET0
                                    145 	.globl _EX1
                                    146 	.globl _ET1
                                    147 	.globl _ES
                                    148 	.globl _ET2
                                    149 	.globl _E_DIS
                                    150 	.globl _EA
                                    151 	.globl _P
                                    152 	.globl _F1
                                    153 	.globl _OV
                                    154 	.globl _RS0
                                    155 	.globl _RS1
                                    156 	.globl _F0
                                    157 	.globl _AC
                                    158 	.globl _CY
                                    159 	.globl _UEP1_DMA_H
                                    160 	.globl _UEP1_DMA_L
                                    161 	.globl _UEP1_DMA
                                    162 	.globl _UEP0_DMA_H
                                    163 	.globl _UEP0_DMA_L
                                    164 	.globl _UEP0_DMA
                                    165 	.globl _UEP2_3_MOD
                                    166 	.globl _UEP4_1_MOD
                                    167 	.globl _UEP3_DMA_H
                                    168 	.globl _UEP3_DMA_L
                                    169 	.globl _UEP3_DMA
                                    170 	.globl _UEP2_DMA_H
                                    171 	.globl _UEP2_DMA_L
                                    172 	.globl _UEP2_DMA
                                    173 	.globl _USB_DEV_AD
                                    174 	.globl _USB_CTRL
                                    175 	.globl _USB_INT_EN
                                    176 	.globl _UEP4_T_LEN
                                    177 	.globl _UEP4_CTRL
                                    178 	.globl _UEP0_T_LEN
                                    179 	.globl _UEP0_CTRL
                                    180 	.globl _USB_RX_LEN
                                    181 	.globl _USB_MIS_ST
                                    182 	.globl _USB_INT_ST
                                    183 	.globl _USB_INT_FG
                                    184 	.globl _UEP3_T_LEN
                                    185 	.globl _UEP3_CTRL
                                    186 	.globl _UEP2_T_LEN
                                    187 	.globl _UEP2_CTRL
                                    188 	.globl _UEP1_T_LEN
                                    189 	.globl _UEP1_CTRL
                                    190 	.globl _UDEV_CTRL
                                    191 	.globl _USB_C_CTRL
                                    192 	.globl _TKEY_DATH
                                    193 	.globl _TKEY_DATL
                                    194 	.globl _TKEY_DAT
                                    195 	.globl _TKEY_CTRL
                                    196 	.globl _ADC_DATA
                                    197 	.globl _ADC_CFG
                                    198 	.globl _ADC_CTRL
                                    199 	.globl _SBAUD1
                                    200 	.globl _SBUF1
                                    201 	.globl _SCON1
                                    202 	.globl _SPI0_SETUP
                                    203 	.globl _SPI0_CK_SE
                                    204 	.globl _SPI0_CTRL
                                    205 	.globl _SPI0_DATA
                                    206 	.globl _SPI0_STAT
                                    207 	.globl _PWM_CK_SE
                                    208 	.globl _PWM_CTRL
                                    209 	.globl _PWM_DATA1
                                    210 	.globl _PWM_DATA2
                                    211 	.globl _T2CAP1H
                                    212 	.globl _T2CAP1L
                                    213 	.globl _T2CAP1
                                    214 	.globl _TH2
                                    215 	.globl _TL2
                                    216 	.globl _T2COUNT
                                    217 	.globl _RCAP2H
                                    218 	.globl _RCAP2L
                                    219 	.globl _RCAP2
                                    220 	.globl _T2MOD
                                    221 	.globl _T2CON
                                    222 	.globl _SBUF
                                    223 	.globl _SCON
                                    224 	.globl _TH1
                                    225 	.globl _TH0
                                    226 	.globl _TL1
                                    227 	.globl _TL0
                                    228 	.globl _TMOD
                                    229 	.globl _TCON
                                    230 	.globl _XBUS_AUX
                                    231 	.globl _PIN_FUNC
                                    232 	.globl _P3_DIR_PU
                                    233 	.globl _P3_MOD_OC
                                    234 	.globl _P3
                                    235 	.globl _P2
                                    236 	.globl _P1_DIR_PU
                                    237 	.globl _P1_MOD_OC
                                    238 	.globl _P1
                                    239 	.globl _ROM_CTRL
                                    240 	.globl _ROM_DATA_H
                                    241 	.globl _ROM_DATA_L
                                    242 	.globl _ROM_DATA
                                    243 	.globl _ROM_ADDR_H
                                    244 	.globl _ROM_ADDR_L
                                    245 	.globl _ROM_ADDR
                                    246 	.globl _GPIO_IE
                                    247 	.globl _IP_EX
                                    248 	.globl _IE_EX
                                    249 	.globl _IP
                                    250 	.globl _IE
                                    251 	.globl _WDOG_COUNT
                                    252 	.globl _RESET_KEEP
                                    253 	.globl _WAKE_CTRL
                                    254 	.globl _CLOCK_CFG
                                    255 	.globl _PCON
                                    256 	.globl _GLOBAL_CFG
                                    257 	.globl _SAFE_MOD
                                    258 	.globl _DPH
                                    259 	.globl _DPL
                                    260 	.globl _SP
                                    261 	.globl _B
                                    262 	.globl _ACC
                                    263 	.globl _PSW
                                    264 	.globl _LineCoding
                                    265 	.globl _Ep2Buffer
                                    266 	.globl _Ep1Buffer
                                    267 	.globl _Ep0Buffer
                                    268 	.globl _UpPoint2_Busy
                                    269 	.globl _USBBufOutPoint
                                    270 	.globl _USBByteCount
                                    271 	.globl _UartByteCount
                                    272 	.globl _Uart_Output_Point
                                    273 	.globl _Uart_Input_Point
                                    274 	.globl _Receive_Uart_Buf
                                    275 	.globl _SetupReqBuf
                                    276 	.globl _pDescr
                                    277 	.globl _UsbConfig
                                    278 	.globl _Count
                                    279 	.globl _SetupReq
                                    280 	.globl _SetupLen
                                    281 ;--------------------------------------------------------
                                    282 ; special function registers
                                    283 ;--------------------------------------------------------
                                    284 	.area RSEG    (ABS,DATA)
      000000                        285 	.org 0x0000
                           0000D0   286 _PSW	=	0x00d0
                           0000E0   287 _ACC	=	0x00e0
                           0000F0   288 _B	=	0x00f0
                           000081   289 _SP	=	0x0081
                           000082   290 _DPL	=	0x0082
                           000083   291 _DPH	=	0x0083
                           0000A1   292 _SAFE_MOD	=	0x00a1
                           0000B1   293 _GLOBAL_CFG	=	0x00b1
                           000087   294 _PCON	=	0x0087
                           0000B9   295 _CLOCK_CFG	=	0x00b9
                           0000A9   296 _WAKE_CTRL	=	0x00a9
                           0000FE   297 _RESET_KEEP	=	0x00fe
                           0000FF   298 _WDOG_COUNT	=	0x00ff
                           0000A8   299 _IE	=	0x00a8
                           0000B8   300 _IP	=	0x00b8
                           0000E8   301 _IE_EX	=	0x00e8
                           0000E9   302 _IP_EX	=	0x00e9
                           0000C7   303 _GPIO_IE	=	0x00c7
                           008584   304 _ROM_ADDR	=	0x8584
                           000084   305 _ROM_ADDR_L	=	0x0084
                           000085   306 _ROM_ADDR_H	=	0x0085
                           008F8E   307 _ROM_DATA	=	0x8f8e
                           00008E   308 _ROM_DATA_L	=	0x008e
                           00008F   309 _ROM_DATA_H	=	0x008f
                           000086   310 _ROM_CTRL	=	0x0086
                           000090   311 _P1	=	0x0090
                           000092   312 _P1_MOD_OC	=	0x0092
                           000093   313 _P1_DIR_PU	=	0x0093
                           0000A0   314 _P2	=	0x00a0
                           0000B0   315 _P3	=	0x00b0
                           000096   316 _P3_MOD_OC	=	0x0096
                           000097   317 _P3_DIR_PU	=	0x0097
                           0000C6   318 _PIN_FUNC	=	0x00c6
                           0000A2   319 _XBUS_AUX	=	0x00a2
                           000088   320 _TCON	=	0x0088
                           000089   321 _TMOD	=	0x0089
                           00008A   322 _TL0	=	0x008a
                           00008B   323 _TL1	=	0x008b
                           00008C   324 _TH0	=	0x008c
                           00008D   325 _TH1	=	0x008d
                           000098   326 _SCON	=	0x0098
                           000099   327 _SBUF	=	0x0099
                           0000C8   328 _T2CON	=	0x00c8
                           0000C9   329 _T2MOD	=	0x00c9
                           00CBCA   330 _RCAP2	=	0xcbca
                           0000CA   331 _RCAP2L	=	0x00ca
                           0000CB   332 _RCAP2H	=	0x00cb
                           00CDCC   333 _T2COUNT	=	0xcdcc
                           0000CC   334 _TL2	=	0x00cc
                           0000CD   335 _TH2	=	0x00cd
                           00CFCE   336 _T2CAP1	=	0xcfce
                           0000CE   337 _T2CAP1L	=	0x00ce
                           0000CF   338 _T2CAP1H	=	0x00cf
                           00009B   339 _PWM_DATA2	=	0x009b
                           00009C   340 _PWM_DATA1	=	0x009c
                           00009D   341 _PWM_CTRL	=	0x009d
                           00009E   342 _PWM_CK_SE	=	0x009e
                           0000F8   343 _SPI0_STAT	=	0x00f8
                           0000F9   344 _SPI0_DATA	=	0x00f9
                           0000FA   345 _SPI0_CTRL	=	0x00fa
                           0000FB   346 _SPI0_CK_SE	=	0x00fb
                           0000FC   347 _SPI0_SETUP	=	0x00fc
                           0000C0   348 _SCON1	=	0x00c0
                           0000C1   349 _SBUF1	=	0x00c1
                           0000C2   350 _SBAUD1	=	0x00c2
                           000080   351 _ADC_CTRL	=	0x0080
                           00009A   352 _ADC_CFG	=	0x009a
                           00009F   353 _ADC_DATA	=	0x009f
                           0000C3   354 _TKEY_CTRL	=	0x00c3
                           00C5C4   355 _TKEY_DAT	=	0xc5c4
                           0000C4   356 _TKEY_DATL	=	0x00c4
                           0000C5   357 _TKEY_DATH	=	0x00c5
                           000091   358 _USB_C_CTRL	=	0x0091
                           0000D1   359 _UDEV_CTRL	=	0x00d1
                           0000D2   360 _UEP1_CTRL	=	0x00d2
                           0000D3   361 _UEP1_T_LEN	=	0x00d3
                           0000D4   362 _UEP2_CTRL	=	0x00d4
                           0000D5   363 _UEP2_T_LEN	=	0x00d5
                           0000D6   364 _UEP3_CTRL	=	0x00d6
                           0000D7   365 _UEP3_T_LEN	=	0x00d7
                           0000D8   366 _USB_INT_FG	=	0x00d8
                           0000D9   367 _USB_INT_ST	=	0x00d9
                           0000DA   368 _USB_MIS_ST	=	0x00da
                           0000DB   369 _USB_RX_LEN	=	0x00db
                           0000DC   370 _UEP0_CTRL	=	0x00dc
                           0000DD   371 _UEP0_T_LEN	=	0x00dd
                           0000DE   372 _UEP4_CTRL	=	0x00de
                           0000DF   373 _UEP4_T_LEN	=	0x00df
                           0000E1   374 _USB_INT_EN	=	0x00e1
                           0000E2   375 _USB_CTRL	=	0x00e2
                           0000E3   376 _USB_DEV_AD	=	0x00e3
                           00E5E4   377 _UEP2_DMA	=	0xe5e4
                           0000E4   378 _UEP2_DMA_L	=	0x00e4
                           0000E5   379 _UEP2_DMA_H	=	0x00e5
                           00E7E6   380 _UEP3_DMA	=	0xe7e6
                           0000E6   381 _UEP3_DMA_L	=	0x00e6
                           0000E7   382 _UEP3_DMA_H	=	0x00e7
                           0000EA   383 _UEP4_1_MOD	=	0x00ea
                           0000EB   384 _UEP2_3_MOD	=	0x00eb
                           00EDEC   385 _UEP0_DMA	=	0xedec
                           0000EC   386 _UEP0_DMA_L	=	0x00ec
                           0000ED   387 _UEP0_DMA_H	=	0x00ed
                           00EFEE   388 _UEP1_DMA	=	0xefee
                           0000EE   389 _UEP1_DMA_L	=	0x00ee
                           0000EF   390 _UEP1_DMA_H	=	0x00ef
                                    391 ;--------------------------------------------------------
                                    392 ; special function bits
                                    393 ;--------------------------------------------------------
                                    394 	.area RSEG    (ABS,DATA)
      000000                        395 	.org 0x0000
                           0000D7   396 _CY	=	0x00d7
                           0000D6   397 _AC	=	0x00d6
                           0000D5   398 _F0	=	0x00d5
                           0000D4   399 _RS1	=	0x00d4
                           0000D3   400 _RS0	=	0x00d3
                           0000D2   401 _OV	=	0x00d2
                           0000D1   402 _F1	=	0x00d1
                           0000D0   403 _P	=	0x00d0
                           0000AF   404 _EA	=	0x00af
                           0000AE   405 _E_DIS	=	0x00ae
                           0000AD   406 _ET2	=	0x00ad
                           0000AC   407 _ES	=	0x00ac
                           0000AB   408 _ET1	=	0x00ab
                           0000AA   409 _EX1	=	0x00aa
                           0000A9   410 _ET0	=	0x00a9
                           0000A8   411 _EX0	=	0x00a8
                           0000BF   412 _PH_FLAG	=	0x00bf
                           0000BE   413 _PL_FLAG	=	0x00be
                           0000BD   414 _PT2	=	0x00bd
                           0000BC   415 _PS	=	0x00bc
                           0000BB   416 _PT1	=	0x00bb
                           0000BA   417 _PX1	=	0x00ba
                           0000B9   418 _PT0	=	0x00b9
                           0000B8   419 _PX0	=	0x00b8
                           0000EF   420 _IE_WDOG	=	0x00ef
                           0000EE   421 _IE_GPIO	=	0x00ee
                           0000ED   422 _IE_PWMX	=	0x00ed
                           0000EC   423 _IE_UART1	=	0x00ec
                           0000EB   424 _IE_ADC	=	0x00eb
                           0000EA   425 _IE_USB	=	0x00ea
                           0000E9   426 _IE_TKEY	=	0x00e9
                           0000E8   427 _IE_SPI0	=	0x00e8
                           000097   428 _SCK	=	0x0097
                           000097   429 _TXD1	=	0x0097
                           000097   430 _TIN5	=	0x0097
                           000096   431 _MISO	=	0x0096
                           000096   432 _RXD1	=	0x0096
                           000096   433 _TIN4	=	0x0096
                           000095   434 _MOSI	=	0x0095
                           000095   435 _PWM1	=	0x0095
                           000095   436 _TIN3	=	0x0095
                           000095   437 _UCC2	=	0x0095
                           000095   438 _AIN2	=	0x0095
                           000094   439 _T2_	=	0x0094
                           000094   440 _CAP1_	=	0x0094
                           000094   441 _SCS	=	0x0094
                           000094   442 _TIN2	=	0x0094
                           000094   443 _UCC1	=	0x0094
                           000094   444 _AIN1	=	0x0094
                           000093   445 _TXD_	=	0x0093
                           000092   446 _RXD_	=	0x0092
                           000091   447 _T2EX	=	0x0091
                           000091   448 _CAP2	=	0x0091
                           000091   449 _TIN1	=	0x0091
                           000091   450 _VBUS2	=	0x0091
                           000091   451 _AIN0	=	0x0091
                           000090   452 _T2	=	0x0090
                           000090   453 _CAP1	=	0x0090
                           000090   454 _TIN0	=	0x0090
                           0000B7   455 _UDM	=	0x00b7
                           0000B6   456 _UDP	=	0x00b6
                           0000B5   457 _T1	=	0x00b5
                           0000B4   458 _PWM2	=	0x00b4
                           0000B4   459 _RXD1_	=	0x00b4
                           0000B4   460 _T0	=	0x00b4
                           0000B3   461 _INT1	=	0x00b3
                           0000B2   462 _TXD1_	=	0x00b2
                           0000B2   463 _INT0	=	0x00b2
                           0000B2   464 _VBUS1	=	0x00b2
                           0000B2   465 _AIN3	=	0x00b2
                           0000B1   466 _PWM2_	=	0x00b1
                           0000B1   467 _TXD	=	0x00b1
                           0000B0   468 _PWM1_	=	0x00b0
                           0000B0   469 _RXD	=	0x00b0
                           00008F   470 _TF1	=	0x008f
                           00008E   471 _TR1	=	0x008e
                           00008D   472 _TF0	=	0x008d
                           00008C   473 _TR0	=	0x008c
                           00008B   474 _IE1	=	0x008b
                           00008A   475 _IT1	=	0x008a
                           000089   476 _IE0	=	0x0089
                           000088   477 _IT0	=	0x0088
                           00009F   478 _SM0	=	0x009f
                           00009E   479 _SM1	=	0x009e
                           00009D   480 _SM2	=	0x009d
                           00009C   481 _REN	=	0x009c
                           00009B   482 _TB8	=	0x009b
                           00009A   483 _RB8	=	0x009a
                           000099   484 _TI	=	0x0099
                           000098   485 _RI	=	0x0098
                           0000CF   486 _TF2	=	0x00cf
                           0000CF   487 _CAP1F	=	0x00cf
                           0000CE   488 _EXF2	=	0x00ce
                           0000CD   489 _RCLK	=	0x00cd
                           0000CC   490 _TCLK	=	0x00cc
                           0000CB   491 _EXEN2	=	0x00cb
                           0000CA   492 _TR2	=	0x00ca
                           0000C9   493 _C_T2	=	0x00c9
                           0000C8   494 _CP_RL2	=	0x00c8
                           0000FF   495 _S0_FST_ACT	=	0x00ff
                           0000FE   496 _S0_IF_OV	=	0x00fe
                           0000FD   497 _S0_IF_FIRST	=	0x00fd
                           0000FC   498 _S0_IF_BYTE	=	0x00fc
                           0000FB   499 _S0_FREE	=	0x00fb
                           0000FA   500 _S0_T_FIFO	=	0x00fa
                           0000F8   501 _S0_R_FIFO	=	0x00f8
                           0000C7   502 _U1SM0	=	0x00c7
                           0000C5   503 _U1SMOD	=	0x00c5
                           0000C4   504 _U1REN	=	0x00c4
                           0000C3   505 _U1TB8	=	0x00c3
                           0000C2   506 _U1RB8	=	0x00c2
                           0000C1   507 _U1TI	=	0x00c1
                           0000C0   508 _U1RI	=	0x00c0
                           000087   509 _CMPO	=	0x0087
                           000086   510 _CMP_IF	=	0x0086
                           000085   511 _ADC_IF	=	0x0085
                           000084   512 _ADC_START	=	0x0084
                           000083   513 _CMP_CHAN	=	0x0083
                           000081   514 _ADC_CHAN1	=	0x0081
                           000080   515 _ADC_CHAN0	=	0x0080
                           0000DF   516 _U_IS_NAK	=	0x00df
                           0000DE   517 _U_TOG_OK	=	0x00de
                           0000DD   518 _U_SIE_FREE	=	0x00dd
                           0000DC   519 _UIF_FIFO_OV	=	0x00dc
                           0000DB   520 _UIF_HST_SOF	=	0x00db
                           0000DA   521 _UIF_SUSPEND	=	0x00da
                           0000D9   522 _UIF_TRANSFER	=	0x00d9
                           0000D8   523 _UIF_DETECT	=	0x00d8
                           0000D8   524 _UIF_BUS_RST	=	0x00d8
                                    525 ;--------------------------------------------------------
                                    526 ; overlayable register banks
                                    527 ;--------------------------------------------------------
                                    528 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        529 	.ds 8
                                    530 ;--------------------------------------------------------
                                    531 ; overlayable bit register bank
                                    532 ;--------------------------------------------------------
                                    533 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        534 bits:
      000020                        535 	.ds 1
                           008000   536 	b0 = bits[0]
                           008100   537 	b1 = bits[1]
                           008200   538 	b2 = bits[2]
                           008300   539 	b3 = bits[3]
                           008400   540 	b4 = bits[4]
                           008500   541 	b5 = bits[5]
                           008600   542 	b6 = bits[6]
                           008700   543 	b7 = bits[7]
                                    544 ;--------------------------------------------------------
                                    545 ; internal ram data
                                    546 ;--------------------------------------------------------
                                    547 	.area DSEG    (DATA)
      000008                        548 _SetupLen::
      000008                        549 	.ds 2
      00000A                        550 _SetupReq::
      00000A                        551 	.ds 1
      00000B                        552 _Count::
      00000B                        553 	.ds 1
      00000C                        554 _UsbConfig::
      00000C                        555 	.ds 1
      00000D                        556 _pDescr::
      00000D                        557 	.ds 3
      000010                        558 _SetupReqBuf::
      000010                        559 	.ds 8
      000018                        560 _Config_Uart1_uart1_buad_65536_47:
      000018                        561 	.ds 4
                                    562 ;--------------------------------------------------------
                                    563 ; overlayable items in internal ram 
                                    564 ;--------------------------------------------------------
                                    565 ;--------------------------------------------------------
                                    566 ; Stack segment in internal ram 
                                    567 ;--------------------------------------------------------
                                    568 	.area	SSEG
      000077                        569 __start__stack:
      000077                        570 	.ds	1
                                    571 
                                    572 ;--------------------------------------------------------
                                    573 ; indirectly addressable internal ram data
                                    574 ;--------------------------------------------------------
                                    575 	.area ISEG    (DATA)
      000031                        576 _Receive_Uart_Buf::
      000031                        577 	.ds 64
      000071                        578 _Uart_Input_Point::
      000071                        579 	.ds 1
      000072                        580 _Uart_Output_Point::
      000072                        581 	.ds 1
      000073                        582 _UartByteCount::
      000073                        583 	.ds 1
      000074                        584 _USBByteCount::
      000074                        585 	.ds 1
      000075                        586 _USBBufOutPoint::
      000075                        587 	.ds 1
      000076                        588 _UpPoint2_Busy::
      000076                        589 	.ds 1
                                    590 ;--------------------------------------------------------
                                    591 ; absolute internal ram data
                                    592 ;--------------------------------------------------------
                                    593 	.area IABS    (ABS,DATA)
                                    594 	.area IABS    (ABS,DATA)
                                    595 ;--------------------------------------------------------
                                    596 ; bit data
                                    597 ;--------------------------------------------------------
                                    598 	.area BSEG    (BIT)
                                    599 ;--------------------------------------------------------
                                    600 ; paged external ram data
                                    601 ;--------------------------------------------------------
                                    602 	.area PSEG    (PAG,XDATA)
                                    603 ;--------------------------------------------------------
                                    604 ; external ram data
                                    605 ;--------------------------------------------------------
                                    606 	.area XSEG    (XDATA)
                           000000   607 _Ep0Buffer	=	0x0000
                           000040   608 _Ep1Buffer	=	0x0040
                           000080   609 _Ep2Buffer	=	0x0080
                                    610 ;--------------------------------------------------------
                                    611 ; absolute external ram data
                                    612 ;--------------------------------------------------------
                                    613 	.area XABS    (ABS,XDATA)
                                    614 ;--------------------------------------------------------
                                    615 ; external initialized ram data
                                    616 ;--------------------------------------------------------
                                    617 	.area XISEG   (XDATA)
      000100                        618 _LineCoding::
      000100                        619 	.ds 7
                                    620 	.area HOME    (CODE)
                                    621 	.area GSINIT0 (CODE)
                                    622 	.area GSINIT1 (CODE)
                                    623 	.area GSINIT2 (CODE)
                                    624 	.area GSINIT3 (CODE)
                                    625 	.area GSINIT4 (CODE)
                                    626 	.area GSINIT5 (CODE)
                                    627 	.area GSINIT  (CODE)
                                    628 	.area GSFINAL (CODE)
                                    629 	.area CSEG    (CODE)
                                    630 ;--------------------------------------------------------
                                    631 ; interrupt vector 
                                    632 ;--------------------------------------------------------
                                    633 	.area HOME    (CODE)
      000000                        634 __interrupt_vect:
      000000 02 00 59         [24]  635 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  636 	reti
      000004                        637 	.ds	7
      00000B 32               [24]  638 	reti
      00000C                        639 	.ds	7
      000013 32               [24]  640 	reti
      000014                        641 	.ds	7
      00001B 32               [24]  642 	reti
      00001C                        643 	.ds	7
      000023 32               [24]  644 	reti
      000024                        645 	.ds	7
      00002B 32               [24]  646 	reti
      00002C                        647 	.ds	7
      000033 32               [24]  648 	reti
      000034                        649 	.ds	7
      00003B 32               [24]  650 	reti
      00003C                        651 	.ds	7
      000043 02 01 91         [24]  652 	ljmp	_DeviceInterrupt
      000046                        653 	.ds	5
      00004B 32               [24]  654 	reti
      00004C                        655 	.ds	7
      000053 02 07 3E         [24]  656 	ljmp	_Uart1_ISR
                                    657 ;--------------------------------------------------------
                                    658 ; global & static initialisations
                                    659 ;--------------------------------------------------------
                                    660 	.area HOME    (CODE)
                                    661 	.area GSINIT  (CODE)
                                    662 	.area GSFINAL (CODE)
                                    663 	.area GSINIT  (CODE)
                                    664 	.globl __sdcc_gsinit_startup
                                    665 	.globl __sdcc_program_startup
                                    666 	.globl __start__stack
                                    667 	.globl __mcs51_genXINIT
                                    668 	.globl __mcs51_genXRAMCLEAR
                                    669 	.globl __mcs51_genRAMCLEAR
                                    670 ;	main.c:74: volatile __idata uint8_t Uart_Input_Point = 0;   //????????????????????????????????????????????????????????????0
      0000B2 78 71            [12]  671 	mov	r0,#_Uart_Input_Point
      0000B4 76 00            [12]  672 	mov	@r0,#0x00
                                    673 ;	main.c:75: volatile __idata uint8_t Uart_Output_Point = 0;  //????????????????????????????????????????????????????????????0
      0000B6 78 72            [12]  674 	mov	r0,#_Uart_Output_Point
      0000B8 76 00            [12]  675 	mov	@r0,#0x00
                                    676 ;	main.c:76: volatile __idata uint8_t UartByteCount = 0;      //????????????????????????????????????
      0000BA 78 73            [12]  677 	mov	r0,#_UartByteCount
      0000BC 76 00            [12]  678 	mov	@r0,#0x00
                                    679 ;	main.c:79: volatile __idata uint8_t USBByteCount = 0;      //??????USB????????????????????????
      0000BE 78 74            [12]  680 	mov	r0,#_USBByteCount
      0000C0 76 00            [12]  681 	mov	@r0,#0x00
                                    682 ;	main.c:80: volatile __idata uint8_t USBBufOutPoint = 0;    //???????????????
      0000C2 78 75            [12]  683 	mov	r0,#_USBBufOutPoint
      0000C4 76 00            [12]  684 	mov	@r0,#0x00
                                    685 ;	main.c:82: volatile __idata uint8_t UpPoint2_Busy  = 0;   //???????????????????????????
      0000C6 78 76            [12]  686 	mov	r0,#_UpPoint2_Busy
      0000C8 76 00            [12]  687 	mov	@r0,#0x00
                                    688 	.area GSFINAL (CODE)
      0000CA 02 00 56         [24]  689 	ljmp	__sdcc_program_startup
                                    690 ;--------------------------------------------------------
                                    691 ; Home
                                    692 ;--------------------------------------------------------
                                    693 	.area HOME    (CODE)
                                    694 	.area HOME    (CODE)
      000056                        695 __sdcc_program_startup:
      000056 02 07 78         [24]  696 	ljmp	_main
                                    697 ;	return from main will return to caller
                                    698 ;--------------------------------------------------------
                                    699 ; code
                                    700 ;--------------------------------------------------------
                                    701 	.area CSEG    (CODE)
                                    702 ;------------------------------------------------------------
                                    703 ;Allocation info for local variables in function 'USBDeviceCfg'
                                    704 ;------------------------------------------------------------
                                    705 ;	main.c:92: void USBDeviceCfg()
                                    706 ;	-----------------------------------------
                                    707 ;	 function USBDeviceCfg
                                    708 ;	-----------------------------------------
      0000CD                        709 _USBDeviceCfg:
                           000007   710 	ar7 = 0x07
                           000006   711 	ar6 = 0x06
                           000005   712 	ar5 = 0x05
                           000004   713 	ar4 = 0x04
                           000003   714 	ar3 = 0x03
                           000002   715 	ar2 = 0x02
                           000001   716 	ar1 = 0x01
                           000000   717 	ar0 = 0x00
                                    718 ;	main.c:94: USB_CTRL = 0x00;                                                           //??????USB???????????????
      0000CD 75 E2 00         [24]  719 	mov	_USB_CTRL,#0x00
                                    720 ;	main.c:95: USB_CTRL &= ~bUC_HOST_MODE;                                                //???????????????????????????
      0000D0 53 E2 7F         [24]  721 	anl	_USB_CTRL,#0x7f
                                    722 ;	main.c:96: USB_CTRL |=  bUC_DEV_PU_EN | bUC_INT_BUSY | bUC_DMA_EN;                    //USB???????????????????????????,???????????????????????????????????????????????????NAK
      0000D3 43 E2 29         [24]  723 	orl	_USB_CTRL,#0x29
                                    724 ;	main.c:97: USB_DEV_AD = 0x00;                                                         //?????????????????????
      0000D6 75 E3 00         [24]  725 	mov	_USB_DEV_AD,#0x00
                                    726 ;	main.c:100: USB_CTRL &= ~bUC_LOW_SPEED;
      0000D9 53 E2 BF         [24]  727 	anl	_USB_CTRL,#0xbf
                                    728 ;	main.c:101: UDEV_CTRL &= ~bUD_LOW_SPEED;                                             //????????????12M?????????????????????
      0000DC 53 D1 FB         [24]  729 	anl	_UDEV_CTRL,#0xfb
                                    730 ;	main.c:102: UDEV_CTRL = bUD_PD_DIS;  // ??????DP/DM????????????
      0000DF 75 D1 80         [24]  731 	mov	_UDEV_CTRL,#0x80
                                    732 ;	main.c:103: UDEV_CTRL |= bUD_PORT_EN;                                                  //??????????????????
      0000E2 43 D1 01         [24]  733 	orl	_UDEV_CTRL,#0x01
                                    734 ;	main.c:104: }
      0000E5 22               [24]  735 	ret
                                    736 ;------------------------------------------------------------
                                    737 ;Allocation info for local variables in function 'USBDeviceIntCfg'
                                    738 ;------------------------------------------------------------
                                    739 ;	main.c:112: void USBDeviceIntCfg()
                                    740 ;	-----------------------------------------
                                    741 ;	 function USBDeviceIntCfg
                                    742 ;	-----------------------------------------
      0000E6                        743 _USBDeviceIntCfg:
                                    744 ;	main.c:114: USB_INT_EN |= bUIE_SUSPEND;                                               //????????????????????????
      0000E6 43 E1 04         [24]  745 	orl	_USB_INT_EN,#0x04
                                    746 ;	main.c:115: USB_INT_EN |= bUIE_TRANSFER;                                              //??????USB??????????????????
      0000E9 43 E1 02         [24]  747 	orl	_USB_INT_EN,#0x02
                                    748 ;	main.c:116: USB_INT_EN |= bUIE_BUS_RST;                                               //??????????????????USB??????????????????
      0000EC 43 E1 01         [24]  749 	orl	_USB_INT_EN,#0x01
                                    750 ;	main.c:117: USB_INT_FG |= 0x1F;                                                       //???????????????
      0000EF 43 D8 1F         [24]  751 	orl	_USB_INT_FG,#0x1f
                                    752 ;	main.c:118: IE_USB = 1;                                                               //??????USB??????
                                    753 ;	assignBit
      0000F2 D2 EA            [12]  754 	setb	_IE_USB
                                    755 ;	main.c:119: EA = 1;                                                                   //?????????????????????
                                    756 ;	assignBit
      0000F4 D2 AF            [12]  757 	setb	_EA
                                    758 ;	main.c:120: }
      0000F6 22               [24]  759 	ret
                                    760 ;------------------------------------------------------------
                                    761 ;Allocation info for local variables in function 'USBDeviceEndPointCfg'
                                    762 ;------------------------------------------------------------
                                    763 ;	main.c:128: void USBDeviceEndPointCfg()
                                    764 ;	-----------------------------------------
                                    765 ;	 function USBDeviceEndPointCfg
                                    766 ;	-----------------------------------------
      0000F7                        767 _USBDeviceEndPointCfg:
                                    768 ;	main.c:131: UEP1_DMA = (uint16_t) Ep1Buffer;                                                      //??????1 ????????????????????????
      0000F7 75 EE 40         [24]  769 	mov	((_UEP1_DMA >> 0) & 0xFF),#_Ep1Buffer
      0000FA 75 EF 00         [24]  770 	mov	((_UEP1_DMA >> 8) & 0xFF),#(_Ep1Buffer >> 8)
                                    771 ;	main.c:132: UEP2_DMA = (uint16_t) Ep2Buffer;                                                      //??????2 IN??????????????????
      0000FD 75 E4 80         [24]  772 	mov	((_UEP2_DMA >> 0) & 0xFF),#_Ep2Buffer
      000100 75 E5 00         [24]  773 	mov	((_UEP2_DMA >> 8) & 0xFF),#(_Ep2Buffer >> 8)
                                    774 ;	main.c:133: UEP2_3_MOD = 0xCC;                                                         //??????2/3 ?????????????????????
      000103 75 EB CC         [24]  775 	mov	_UEP2_3_MOD,#0xcc
                                    776 ;	main.c:134: UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;                 //??????2??????????????????????????????IN????????????NAK???OUT??????ACK
      000106 75 D4 12         [24]  777 	mov	_UEP2_CTRL,#0x12
                                    778 ;	main.c:136: UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;                                 //??????1??????????????????????????????IN????????????NAK
      000109 75 D2 12         [24]  779 	mov	_UEP1_CTRL,#0x12
                                    780 ;	main.c:137: UEP0_DMA = (uint16_t) Ep0Buffer;                                                      //??????0??????????????????
      00010C 75 EC 00         [24]  781 	mov	((_UEP0_DMA >> 0) & 0xFF),#_Ep0Buffer
      00010F 75 ED 00         [24]  782 	mov	((_UEP0_DMA >> 8) & 0xFF),#(_Ep0Buffer >> 8)
                                    783 ;	main.c:138: UEP4_1_MOD = 0X40;                                                         //??????1????????????????????????0???64?????????????????????
      000112 75 EA 40         [24]  784 	mov	_UEP4_1_MOD,#0x40
                                    785 ;	main.c:139: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;                                 //???????????????OUT????????????ACK???IN????????????NAK
      000115 75 DC 02         [24]  786 	mov	_UEP0_CTRL,#0x02
                                    787 ;	main.c:140: }
      000118 22               [24]  788 	ret
                                    789 ;------------------------------------------------------------
                                    790 ;Allocation info for local variables in function 'Config_Uart1'
                                    791 ;------------------------------------------------------------
                                    792 ;cfg_uart                  Allocated to registers r5 r6 r7 
                                    793 ;uart1_buad                Allocated with name '_Config_Uart1_uart1_buad_65536_47'
                                    794 ;------------------------------------------------------------
                                    795 ;	main.c:148: void Config_Uart1(uint8_t *cfg_uart)
                                    796 ;	-----------------------------------------
                                    797 ;	 function Config_Uart1
                                    798 ;	-----------------------------------------
      000119                        799 _Config_Uart1:
      000119 AD 82            [24]  800 	mov	r5,dpl
      00011B AE 83            [24]  801 	mov	r6,dph
      00011D AF F0            [24]  802 	mov	r7,b
                                    803 ;	main.c:150: uint32_t uart1_buad = 0;
      00011F E4               [12]  804 	clr	a
      000120 F5 18            [12]  805 	mov	_Config_Uart1_uart1_buad_65536_47,a
      000122 F5 19            [12]  806 	mov	(_Config_Uart1_uart1_buad_65536_47 + 1),a
      000124 F5 1A            [12]  807 	mov	(_Config_Uart1_uart1_buad_65536_47 + 2),a
      000126 F5 1B            [12]  808 	mov	(_Config_Uart1_uart1_buad_65536_47 + 3),a
                                    809 ;	main.c:151: *((uint8_t *)&uart1_buad) = cfg_uart[0];
      000128 8D 82            [24]  810 	mov	dpl,r5
      00012A 8E 83            [24]  811 	mov	dph,r6
      00012C 8F F0            [24]  812 	mov	b,r7
      00012E 12 0A FD         [24]  813 	lcall	__gptrget
      000131 FC               [12]  814 	mov	r4,a
      000132 8C 18            [24]  815 	mov	_Config_Uart1_uart1_buad_65536_47,r4
                                    816 ;	main.c:152: *((uint8_t *)&uart1_buad+1) = cfg_uart[1];
      000134 74 01            [12]  817 	mov	a,#0x01
      000136 2D               [12]  818 	add	a,r5
      000137 FA               [12]  819 	mov	r2,a
      000138 E4               [12]  820 	clr	a
      000139 3E               [12]  821 	addc	a,r6
      00013A FB               [12]  822 	mov	r3,a
      00013B 8F 04            [24]  823 	mov	ar4,r7
      00013D 8A 82            [24]  824 	mov	dpl,r2
      00013F 8B 83            [24]  825 	mov	dph,r3
      000141 8C F0            [24]  826 	mov	b,r4
      000143 12 0A FD         [24]  827 	lcall	__gptrget
      000146 FA               [12]  828 	mov	r2,a
      000147 8A 19            [24]  829 	mov	(_Config_Uart1_uart1_buad_65536_47 + 0x0001),r2
                                    830 ;	main.c:153: *((uint8_t *)&uart1_buad+2) = cfg_uart[2];
      000149 74 02            [12]  831 	mov	a,#0x02
      00014B 2D               [12]  832 	add	a,r5
      00014C FA               [12]  833 	mov	r2,a
      00014D E4               [12]  834 	clr	a
      00014E 3E               [12]  835 	addc	a,r6
      00014F FB               [12]  836 	mov	r3,a
      000150 8F 04            [24]  837 	mov	ar4,r7
      000152 8A 82            [24]  838 	mov	dpl,r2
      000154 8B 83            [24]  839 	mov	dph,r3
      000156 8C F0            [24]  840 	mov	b,r4
      000158 12 0A FD         [24]  841 	lcall	__gptrget
      00015B FA               [12]  842 	mov	r2,a
      00015C 8A 1A            [24]  843 	mov	(_Config_Uart1_uart1_buad_65536_47 + 0x0002),r2
                                    844 ;	main.c:154: *((uint8_t *)&uart1_buad+3) = cfg_uart[3];
      00015E 74 03            [12]  845 	mov	a,#0x03
      000160 2D               [12]  846 	add	a,r5
      000161 FD               [12]  847 	mov	r5,a
      000162 E4               [12]  848 	clr	a
      000163 3E               [12]  849 	addc	a,r6
      000164 FE               [12]  850 	mov	r6,a
      000165 8D 82            [24]  851 	mov	dpl,r5
      000167 8E 83            [24]  852 	mov	dph,r6
      000169 8F F0            [24]  853 	mov	b,r7
      00016B 12 0A FD         [24]  854 	lcall	__gptrget
      00016E FD               [12]  855 	mov	r5,a
      00016F 8D 1B            [24]  856 	mov	(_Config_Uart1_uart1_buad_65536_47 + 0x0003),r5
                                    857 ;	main.c:155: SBAUD1 = 256 - FREQ_SYS/16/uart1_buad; //  SBAUD1 = 256 - Fsys / 16 / baud rate
      000171 85 18 26         [24]  858 	mov	__divulong_PARM_2,_Config_Uart1_uart1_buad_65536_47
      000174 85 19 27         [24]  859 	mov	(__divulong_PARM_2 + 1),(_Config_Uart1_uart1_buad_65536_47 + 1)
      000177 85 1A 28         [24]  860 	mov	(__divulong_PARM_2 + 2),(_Config_Uart1_uart1_buad_65536_47 + 2)
      00017A 85 1B 29         [24]  861 	mov	(__divulong_PARM_2 + 3),(_Config_Uart1_uart1_buad_65536_47 + 3)
      00017D 90 42 40         [24]  862 	mov	dptr,#0x4240
      000180 75 F0 0F         [24]  863 	mov	b,#0x0f
      000183 E4               [12]  864 	clr	a
      000184 12 0A 28         [24]  865 	lcall	__divulong
      000187 AC 82            [24]  866 	mov	r4,dpl
      000189 C3               [12]  867 	clr	c
      00018A E4               [12]  868 	clr	a
      00018B 9C               [12]  869 	subb	a,r4
      00018C F5 C2            [12]  870 	mov	_SBAUD1,a
                                    871 ;	main.c:156: IE_UART1 = 1;
                                    872 ;	assignBit
      00018E D2 EC            [12]  873 	setb	_IE_UART1
                                    874 ;	main.c:157: }
      000190 22               [24]  875 	ret
                                    876 ;------------------------------------------------------------
                                    877 ;Allocation info for local variables in function 'DeviceInterrupt'
                                    878 ;------------------------------------------------------------
                                    879 ;len                       Allocated to registers r4 r5 
                                    880 ;------------------------------------------------------------
                                    881 ;	main.c:162: void DeviceInterrupt(void) __interrupt (INT_NO_USB)                       //USB??????????????????,??????????????????1
                                    882 ;	-----------------------------------------
                                    883 ;	 function DeviceInterrupt
                                    884 ;	-----------------------------------------
      000191                        885 _DeviceInterrupt:
      000191 C0 20            [24]  886 	push	bits
      000193 C0 E0            [24]  887 	push	acc
      000195 C0 F0            [24]  888 	push	b
      000197 C0 82            [24]  889 	push	dpl
      000199 C0 83            [24]  890 	push	dph
      00019B C0 07            [24]  891 	push	(0+7)
      00019D C0 06            [24]  892 	push	(0+6)
      00019F C0 05            [24]  893 	push	(0+5)
      0001A1 C0 04            [24]  894 	push	(0+4)
      0001A3 C0 03            [24]  895 	push	(0+3)
      0001A5 C0 02            [24]  896 	push	(0+2)
      0001A7 C0 01            [24]  897 	push	(0+1)
      0001A9 C0 00            [24]  898 	push	(0+0)
      0001AB C0 D0            [24]  899 	push	psw
      0001AD 75 D0 00         [24]  900 	mov	psw,#0x00
                                    901 ;	main.c:165: if(UIF_TRANSFER)                                                            //USB??????????????????
      0001B0 20 D9 03         [24]  902 	jb	_UIF_TRANSFER,00524$
      0001B3 02 06 CC         [24]  903 	ljmp	00215$
      0001B6                        904 00524$:
                                    905 ;	main.c:167: switch (USB_INT_ST & (MASK_UIS_TOKEN | MASK_UIS_ENDP))
      0001B6 74 3F            [12]  906 	mov	a,#0x3f
      0001B8 55 D9            [12]  907 	anl	a,_USB_INT_ST
      0001BA FF               [12]  908 	mov	r7,a
      0001BB FE               [12]  909 	mov	r6,a
      0001BC BE 00 03         [24]  910 	cjne	r6,#0x00,00525$
      0001BF 02 06 93         [24]  911 	ljmp	00206$
      0001C2                        912 00525$:
      0001C2 BF 02 02         [24]  913 	cjne	r7,#0x02,00526$
      0001C5 80 38            [24]  914 	sjmp	00103$
      0001C7                        915 00526$:
      0001C7 BF 20 03         [24]  916 	cjne	r7,#0x20,00527$
      0001CA 02 06 1A         [24]  917 	ljmp	00201$
      0001CD                        918 00527$:
      0001CD BF 21 02         [24]  919 	cjne	r7,#0x21,00528$
      0001D0 80 0D            [24]  920 	sjmp	00101$
      0001D2                        921 00528$:
      0001D2 BF 22 02         [24]  922 	cjne	r7,#0x22,00529$
      0001D5 80 16            [24]  923 	sjmp	00102$
      0001D7                        924 00529$:
      0001D7 BF 30 02         [24]  925 	cjne	r7,#0x30,00530$
      0001DA 80 3C            [24]  926 	sjmp	00106$
      0001DC                        927 00530$:
      0001DC 02 06 CA         [24]  928 	ljmp	00213$
                                    929 ;	main.c:169: case UIS_TOKEN_IN | 1:                                                  //endpoint 1# ??????????????????
      0001DF                        930 00101$:
                                    931 ;	main.c:170: UEP1_T_LEN = 0;
      0001DF 75 D3 00         [24]  932 	mov	_UEP1_T_LEN,#0x00
                                    933 ;	main.c:171: UEP1_CTRL = UEP1_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //????????????NAK
      0001E2 74 FC            [12]  934 	mov	a,#0xfc
      0001E4 55 D2            [12]  935 	anl	a,_UEP1_CTRL
      0001E6 44 02            [12]  936 	orl	a,#0x02
      0001E8 F5 D2            [12]  937 	mov	_UEP1_CTRL,a
                                    938 ;	main.c:172: break;
      0001EA 02 06 CA         [24]  939 	ljmp	00213$
                                    940 ;	main.c:173: case UIS_TOKEN_IN | 2:                                                  //endpoint 2# ??????????????????
      0001ED                        941 00102$:
                                    942 ;	main.c:175: UEP2_T_LEN = 0;                                                    //????????????????????????????????????
      0001ED 75 D5 00         [24]  943 	mov	_UEP2_T_LEN,#0x00
                                    944 ;	main.c:176: UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //????????????NAK
      0001F0 74 FC            [12]  945 	mov	a,#0xfc
      0001F2 55 D4            [12]  946 	anl	a,_UEP2_CTRL
      0001F4 44 02            [12]  947 	orl	a,#0x02
      0001F6 F5 D4            [12]  948 	mov	_UEP2_CTRL,a
                                    949 ;	main.c:177: UpPoint2_Busy = 0;                                                  //???????????????
      0001F8 78 76            [12]  950 	mov	r0,#_UpPoint2_Busy
      0001FA 76 00            [12]  951 	mov	@r0,#0x00
                                    952 ;	main.c:179: break;
      0001FC 02 06 CA         [24]  953 	ljmp	00213$
                                    954 ;	main.c:180: case UIS_TOKEN_OUT | 2:                                                 //endpoint 3# ??????????????????
      0001FF                        955 00103$:
                                    956 ;	main.c:181: if ( U_TOG_OK )                                                     // ??????????????????????????????
      0001FF 20 DE 03         [24]  957 	jb	_U_TOG_OK,00531$
      000202 02 06 CA         [24]  958 	ljmp	00213$
      000205                        959 00531$:
                                    960 ;	main.c:183: USBByteCount = USB_RX_LEN;
      000205 78 74            [12]  961 	mov	r0,#_USBByteCount
      000207 A6 DB            [24]  962 	mov	@r0,_USB_RX_LEN
                                    963 ;	main.c:184: USBBufOutPoint = 0;                                             //?????????????????????
      000209 78 75            [12]  964 	mov	r0,#_USBBufOutPoint
      00020B 76 00            [12]  965 	mov	@r0,#0x00
                                    966 ;	main.c:185: UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_NAK;       //?????????????????????NAK??????????????????????????????????????????????????????
      00020D 74 F3            [12]  967 	mov	a,#0xf3
      00020F 55 D4            [12]  968 	anl	a,_UEP2_CTRL
      000211 44 08            [12]  969 	orl	a,#0x08
      000213 F5 D4            [12]  970 	mov	_UEP2_CTRL,a
                                    971 ;	main.c:187: break;
      000215 02 06 CA         [24]  972 	ljmp	00213$
                                    973 ;	main.c:188: case UIS_TOKEN_SETUP | 0:                                                //SETUP??????
      000218                        974 00106$:
                                    975 ;	main.c:189: len = USB_RX_LEN;
      000218 AE DB            [24]  976 	mov	r6,_USB_RX_LEN
      00021A 7F 00            [12]  977 	mov	r7,#0x00
                                    978 ;	main.c:190: if(len == (sizeof(USB_SETUP_REQ)))
      00021C BE 08 05         [24]  979 	cjne	r6,#0x08,00532$
      00021F BF 00 02         [24]  980 	cjne	r7,#0x00,00532$
      000222 80 03            [24]  981 	sjmp	00533$
      000224                        982 00532$:
      000224 02 05 EE         [24]  983 	ljmp	00193$
      000227                        984 00533$:
                                    985 ;	main.c:192: SetupLen = ((uint16_t)UsbSetupBuf->wLengthH<<8) | (UsbSetupBuf->wLengthL);
      000227 90 00 07         [24]  986 	mov	dptr,#(_Ep0Buffer + 0x0007)
      00022A E0               [24]  987 	movx	a,@dptr
      00022B FE               [12]  988 	mov	r6,a
      00022C 7F 00            [12]  989 	mov	r7,#0x00
      00022E 90 00 06         [24]  990 	mov	dptr,#(_Ep0Buffer + 0x0006)
      000231 E0               [24]  991 	movx	a,@dptr
      000232 7C 00            [12]  992 	mov	r4,#0x00
      000234 4F               [12]  993 	orl	a,r7
      000235 F5 08            [12]  994 	mov	_SetupLen,a
      000237 EC               [12]  995 	mov	a,r4
      000238 4E               [12]  996 	orl	a,r6
      000239 F5 09            [12]  997 	mov	(_SetupLen + 1),a
                                    998 ;	main.c:193: len = 0;                                                      // ???????????????????????????0??????
      00023B 7E 00            [12]  999 	mov	r6,#0x00
      00023D 7F 00            [12] 1000 	mov	r7,#0x00
                                   1001 ;	main.c:194: SetupReq = UsbSetupBuf->bRequest;
      00023F 90 00 01         [24] 1002 	mov	dptr,#(_Ep0Buffer + 0x0001)
      000242 E0               [24] 1003 	movx	a,@dptr
      000243 F5 0A            [12] 1004 	mov	_SetupReq,a
                                   1005 ;	main.c:195: if ( ( UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD )//???????????????
      000245 90 00 00         [24] 1006 	mov	dptr,#_Ep0Buffer
      000248 E0               [24] 1007 	movx	a,@dptr
      000249 FD               [12] 1008 	mov	r5,a
      00024A 54 60            [12] 1009 	anl	a,#0x60
      00024C 60 78            [24] 1010 	jz	00190$
                                   1011 ;	main.c:197: switch( SetupReq )
      00024E 74 20            [12] 1012 	mov	a,#0x20
      000250 B5 0A 03         [24] 1013 	cjne	a,_SetupReq,00535$
      000253 02 05 F2         [24] 1014 	ljmp	00194$
      000256                       1015 00535$:
      000256 74 21            [12] 1016 	mov	a,#0x21
      000258 B5 0A 02         [24] 1017 	cjne	a,_SetupReq,00536$
      00025B 80 0A            [24] 1018 	sjmp	00107$
      00025D                       1019 00536$:
      00025D 74 22            [12] 1020 	mov	a,#0x22
      00025F B5 0A 03         [24] 1021 	cjne	a,_SetupReq,00537$
      000262 02 05 F2         [24] 1022 	ljmp	00194$
      000265                       1023 00537$:
                                   1024 ;	main.c:199: case GET_LINE_CODING:   //0x21  currently configured
      000265 80 58            [24] 1025 	sjmp	00110$
      000267                       1026 00107$:
                                   1027 ;	main.c:200: pDescr = LineCoding;
      000267 75 0D 00         [24] 1028 	mov	_pDescr,#_LineCoding
      00026A 75 0E 01         [24] 1029 	mov	(_pDescr + 1),#(_LineCoding >> 8)
      00026D 75 0F 00         [24] 1030 	mov	(_pDescr + 2),#0x00
                                   1031 ;	main.c:202: len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;  // ??????????????????
      000270 C3               [12] 1032 	clr	c
      000271 E5 08            [12] 1033 	mov	a,_SetupLen
      000273 94 08            [12] 1034 	subb	a,#0x08
      000275 E5 09            [12] 1035 	mov	a,(_SetupLen + 1)
      000277 94 00            [12] 1036 	subb	a,#0x00
      000279 40 06            [24] 1037 	jc	00228$
      00027B 7C 08            [12] 1038 	mov	r4,#0x08
      00027D 7D 00            [12] 1039 	mov	r5,#0x00
      00027F 80 04            [24] 1040 	sjmp	00229$
      000281                       1041 00228$:
      000281 AC 08            [24] 1042 	mov	r4,_SetupLen
      000283 AD 09            [24] 1043 	mov	r5,(_SetupLen + 1)
      000285                       1044 00229$:
      000285 8C 06            [24] 1045 	mov	ar6,r4
      000287 8D 07            [24] 1046 	mov	ar7,r5
                                   1047 ;	main.c:203: memcpy(Ep0Buffer,pDescr,len);
      000289 85 0D 26         [24] 1048 	mov	___memcpy_PARM_2,_pDescr
      00028C 85 0E 27         [24] 1049 	mov	(___memcpy_PARM_2 + 1),(_pDescr + 1)
      00028F 85 0F 28         [24] 1050 	mov	(___memcpy_PARM_2 + 2),(_pDescr + 2)
      000292 8E 29            [24] 1051 	mov	___memcpy_PARM_3,r6
      000294 8F 2A            [24] 1052 	mov	(___memcpy_PARM_3 + 1),r7
      000296 90 00 00         [24] 1053 	mov	dptr,#_Ep0Buffer
      000299 75 F0 00         [24] 1054 	mov	b,#0x00
      00029C C0 07            [24] 1055 	push	ar7
      00029E C0 06            [24] 1056 	push	ar6
      0002A0 12 0A 8D         [24] 1057 	lcall	___memcpy
      0002A3 D0 06            [24] 1058 	pop	ar6
      0002A5 D0 07            [24] 1059 	pop	ar7
                                   1060 ;	main.c:204: SetupLen -= len;
      0002A7 E5 08            [12] 1061 	mov	a,_SetupLen
      0002A9 C3               [12] 1062 	clr	c
      0002AA 9E               [12] 1063 	subb	a,r6
      0002AB F5 08            [12] 1064 	mov	_SetupLen,a
      0002AD E5 09            [12] 1065 	mov	a,(_SetupLen + 1)
      0002AF 9F               [12] 1066 	subb	a,r7
      0002B0 F5 09            [12] 1067 	mov	(_SetupLen + 1),a
                                   1068 ;	main.c:205: pDescr += len;
      0002B2 EE               [12] 1069 	mov	a,r6
      0002B3 25 0D            [12] 1070 	add	a,_pDescr
      0002B5 F5 0D            [12] 1071 	mov	_pDescr,a
      0002B7 EF               [12] 1072 	mov	a,r7
      0002B8 35 0E            [12] 1073 	addc	a,(_pDescr + 1)
      0002BA F5 0E            [12] 1074 	mov	(_pDescr + 1),a
                                   1075 ;	main.c:206: break;
      0002BC 02 05 F2         [24] 1076 	ljmp	00194$
                                   1077 ;	main.c:211: default:
      0002BF                       1078 00110$:
                                   1079 ;	main.c:212: len = 0xFF;  								 					                 /*???????????????*/
      0002BF 7E FF            [12] 1080 	mov	r6,#0xff
      0002C1 7F 00            [12] 1081 	mov	r7,#0x00
                                   1082 ;	main.c:214: }
      0002C3 02 05 F2         [24] 1083 	ljmp	00194$
      0002C6                       1084 00190$:
                                   1085 ;	main.c:218: switch(SetupReq)                                             //?????????
      0002C6 E5 0A            [12] 1086 	mov	a,_SetupReq
      0002C8 24 F5            [12] 1087 	add	a,#0xff - 0x0a
      0002CA 50 03            [24] 1088 	jnc	00539$
      0002CC 02 05 E8         [24] 1089 	ljmp	00187$
      0002CF                       1090 00539$:
      0002CF E5 0A            [12] 1091 	mov	a,_SetupReq
      0002D1 24 0B            [12] 1092 	add	a,#(00540$-3-.)
      0002D3 83               [24] 1093 	movc	a,@a+pc
      0002D4 F5 82            [12] 1094 	mov	dpl,a
      0002D6 E5 0A            [12] 1095 	mov	a,_SetupReq
      0002D8 24 0F            [12] 1096 	add	a,#(00541$-3-.)
      0002DA 83               [24] 1097 	movc	a,@a+pc
      0002DB F5 83            [12] 1098 	mov	dph,a
      0002DD E4               [12] 1099 	clr	a
      0002DE 73               [24] 1100 	jmp	@a+dptr
      0002DF                       1101 00540$:
      0002DF C8                    1102 	.db	00183$
      0002E0 0A                    1103 	.db	00135$
      0002E1 E8                    1104 	.db	00187$
      0002E2 B7                    1105 	.db	00156$
      0002E3 E8                    1106 	.db	00187$
      0002E4 D9                    1107 	.db	00129$
      0002E5 F5                    1108 	.db	00112$
      0002E6 E8                    1109 	.db	00187$
      0002E7 E6                    1110 	.db	00130$
      0002E8 01                    1111 	.db	00133$
      0002E9 F2                    1112 	.db	00194$
      0002EA                       1113 00541$:
      0002EA 05                    1114 	.db	00183$>>8
      0002EB 04                    1115 	.db	00135$>>8
      0002EC 05                    1116 	.db	00187$>>8
      0002ED 04                    1117 	.db	00156$>>8
      0002EE 05                    1118 	.db	00187$>>8
      0002EF 03                    1119 	.db	00129$>>8
      0002F0 02                    1120 	.db	00112$>>8
      0002F1 05                    1121 	.db	00187$>>8
      0002F2 03                    1122 	.db	00130$>>8
      0002F3 04                    1123 	.db	00133$>>8
      0002F4 05                    1124 	.db	00194$>>8
                                   1125 ;	main.c:220: case USB_GET_DESCRIPTOR:
      0002F5                       1126 00112$:
                                   1127 ;	main.c:221: switch(UsbSetupBuf->wValueH)
      0002F5 90 00 03         [24] 1128 	mov	dptr,#(_Ep0Buffer + 0x0003)
      0002F8 E0               [24] 1129 	movx	a,@dptr
      0002F9 FD               [12] 1130 	mov	r5,a
      0002FA BD 01 02         [24] 1131 	cjne	r5,#0x01,00542$
      0002FD 80 0A            [24] 1132 	sjmp	00113$
      0002FF                       1133 00542$:
      0002FF BD 02 02         [24] 1134 	cjne	r5,#0x02,00543$
      000302 80 14            [24] 1135 	sjmp	00114$
      000304                       1136 00543$:
                                   1137 ;	main.c:223: case 1:                                                       //???????????????
      000304 BD 03 72         [24] 1138 	cjne	r5,#0x03,00125$
      000307 80 1E            [24] 1139 	sjmp	00115$
      000309                       1140 00113$:
                                   1141 ;	main.c:224: pDescr = DevDesc;                                         //?????????????????????????????????????????????
      000309 75 0D 1D         [24] 1142 	mov	_pDescr,#_DevDesc
      00030C 75 0E 0B         [24] 1143 	mov	(_pDescr + 1),#(_DevDesc >> 8)
      00030F 75 0F 80         [24] 1144 	mov	(_pDescr + 2),#0x80
                                   1145 ;	main.c:225: len = sizeof(DevDesc);
      000312 7C 12            [12] 1146 	mov	r4,#0x12
      000314 7D 00            [12] 1147 	mov	r5,#0x00
                                   1148 ;	main.c:226: break;
                                   1149 ;	main.c:227: case 2:                                                        //???????????????
      000316 80 65            [24] 1150 	sjmp	00126$
      000318                       1151 00114$:
                                   1152 ;	main.c:228: pDescr = CfgDesc;                                          //?????????????????????????????????????????????
      000318 75 0D 2F         [24] 1153 	mov	_pDescr,#_CfgDesc
      00031B 75 0E 0B         [24] 1154 	mov	(_pDescr + 1),#(_CfgDesc >> 8)
      00031E 75 0F 80         [24] 1155 	mov	(_pDescr + 2),#0x80
                                   1156 ;	main.c:229: len = sizeof(CfgDesc);
      000321 7C 43            [12] 1157 	mov	r4,#0x43
      000323 7D 00            [12] 1158 	mov	r5,#0x00
                                   1159 ;	main.c:230: break;
                                   1160 ;	main.c:231: case 3:
      000325 80 56            [24] 1161 	sjmp	00126$
      000327                       1162 00115$:
                                   1163 ;	main.c:232: if(UsbSetupBuf->wValueL == 0)
      000327 90 00 02         [24] 1164 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00032A E0               [24] 1165 	movx	a,@dptr
      00032B 70 0F            [24] 1166 	jnz	00123$
                                   1167 ;	main.c:234: pDescr = LangDes;
      00032D 75 0D 72         [24] 1168 	mov	_pDescr,#_LangDes
      000330 75 0E 0B         [24] 1169 	mov	(_pDescr + 1),#(_LangDes >> 8)
      000333 75 0F 80         [24] 1170 	mov	(_pDescr + 2),#0x80
                                   1171 ;	main.c:235: len = sizeof(LangDes);
      000336 7C 04            [12] 1172 	mov	r4,#0x04
      000338 7D 00            [12] 1173 	mov	r5,#0x00
      00033A 80 41            [24] 1174 	sjmp	00126$
      00033C                       1175 00123$:
                                   1176 ;	main.c:237: else if(UsbSetupBuf->wValueL == 1)
      00033C 90 00 02         [24] 1177 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00033F E0               [24] 1178 	movx	a,@dptr
      000340 FB               [12] 1179 	mov	r3,a
      000341 BB 01 0F         [24] 1180 	cjne	r3,#0x01,00120$
                                   1181 ;	main.c:239: pDescr = Manuf_Des;
      000344 75 0D 9E         [24] 1182 	mov	_pDescr,#_Manuf_Des
      000347 75 0E 0B         [24] 1183 	mov	(_pDescr + 1),#(_Manuf_Des >> 8)
      00034A 75 0F 80         [24] 1184 	mov	(_pDescr + 2),#0x80
                                   1185 ;	main.c:240: len = sizeof(Manuf_Des);
      00034D 7C 0A            [12] 1186 	mov	r4,#0x0a
      00034F 7D 00            [12] 1187 	mov	r5,#0x00
      000351 80 2A            [24] 1188 	sjmp	00126$
      000353                       1189 00120$:
                                   1190 ;	main.c:242: else if(UsbSetupBuf->wValueL == 2)
      000353 90 00 02         [24] 1191 	mov	dptr,#(_Ep0Buffer + 0x0002)
      000356 E0               [24] 1192 	movx	a,@dptr
      000357 FB               [12] 1193 	mov	r3,a
      000358 BB 02 0F         [24] 1194 	cjne	r3,#0x02,00117$
                                   1195 ;	main.c:244: pDescr = Prod_Des;
      00035B 75 0D 8A         [24] 1196 	mov	_pDescr,#_Prod_Des
      00035E 75 0E 0B         [24] 1197 	mov	(_pDescr + 1),#(_Prod_Des >> 8)
      000361 75 0F 80         [24] 1198 	mov	(_pDescr + 2),#0x80
                                   1199 ;	main.c:245: len = sizeof(Prod_Des);
      000364 7C 14            [12] 1200 	mov	r4,#0x14
      000366 7D 00            [12] 1201 	mov	r5,#0x00
      000368 80 13            [24] 1202 	sjmp	00126$
      00036A                       1203 00117$:
                                   1204 ;	main.c:249: pDescr = SerDes;
      00036A 75 0D 76         [24] 1205 	mov	_pDescr,#_SerDes
      00036D 75 0E 0B         [24] 1206 	mov	(_pDescr + 1),#(_SerDes >> 8)
      000370 75 0F 80         [24] 1207 	mov	(_pDescr + 2),#0x80
                                   1208 ;	main.c:250: len = sizeof(SerDes);
      000373 7C 14            [12] 1209 	mov	r4,#0x14
      000375 7D 00            [12] 1210 	mov	r5,#0x00
                                   1211 ;	main.c:252: break;
                                   1212 ;	main.c:253: default:
      000377 80 04            [24] 1213 	sjmp	00126$
      000379                       1214 00125$:
                                   1215 ;	main.c:254: len = 0xff;                                                //??????????????????????????????
      000379 7C FF            [12] 1216 	mov	r4,#0xff
      00037B 7D 00            [12] 1217 	mov	r5,#0x00
                                   1218 ;	main.c:256: }
      00037D                       1219 00126$:
                                   1220 ;	main.c:257: if ( SetupLen > len )
      00037D C3               [12] 1221 	clr	c
      00037E EC               [12] 1222 	mov	a,r4
      00037F 95 08            [12] 1223 	subb	a,_SetupLen
      000381 ED               [12] 1224 	mov	a,r5
      000382 95 09            [12] 1225 	subb	a,(_SetupLen + 1)
      000384 50 04            [24] 1226 	jnc	00128$
                                   1227 ;	main.c:259: SetupLen = len;    //???????????????
      000386 8C 08            [24] 1228 	mov	_SetupLen,r4
      000388 8D 09            [24] 1229 	mov	(_SetupLen + 1),r5
      00038A                       1230 00128$:
                                   1231 ;	main.c:261: len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                            //??????????????????
      00038A C3               [12] 1232 	clr	c
      00038B E5 08            [12] 1233 	mov	a,_SetupLen
      00038D 94 08            [12] 1234 	subb	a,#0x08
      00038F E5 09            [12] 1235 	mov	a,(_SetupLen + 1)
      000391 94 00            [12] 1236 	subb	a,#0x00
      000393 40 06            [24] 1237 	jc	00230$
      000395 7C 08            [12] 1238 	mov	r4,#0x08
      000397 7D 00            [12] 1239 	mov	r5,#0x00
      000399 80 04            [24] 1240 	sjmp	00231$
      00039B                       1241 00230$:
      00039B AC 08            [24] 1242 	mov	r4,_SetupLen
      00039D AD 09            [24] 1243 	mov	r5,(_SetupLen + 1)
      00039F                       1244 00231$:
      00039F 8C 06            [24] 1245 	mov	ar6,r4
      0003A1 8D 07            [24] 1246 	mov	ar7,r5
                                   1247 ;	main.c:262: memcpy(Ep0Buffer,pDescr,len);                                  //??????????????????
      0003A3 85 0D 26         [24] 1248 	mov	___memcpy_PARM_2,_pDescr
      0003A6 85 0E 27         [24] 1249 	mov	(___memcpy_PARM_2 + 1),(_pDescr + 1)
      0003A9 85 0F 28         [24] 1250 	mov	(___memcpy_PARM_2 + 2),(_pDescr + 2)
      0003AC 8E 29            [24] 1251 	mov	___memcpy_PARM_3,r6
      0003AE 8F 2A            [24] 1252 	mov	(___memcpy_PARM_3 + 1),r7
      0003B0 90 00 00         [24] 1253 	mov	dptr,#_Ep0Buffer
      0003B3 75 F0 00         [24] 1254 	mov	b,#0x00
      0003B6 C0 07            [24] 1255 	push	ar7
      0003B8 C0 06            [24] 1256 	push	ar6
      0003BA 12 0A 8D         [24] 1257 	lcall	___memcpy
      0003BD D0 06            [24] 1258 	pop	ar6
      0003BF D0 07            [24] 1259 	pop	ar7
                                   1260 ;	main.c:263: SetupLen -= len;
      0003C1 E5 08            [12] 1261 	mov	a,_SetupLen
      0003C3 C3               [12] 1262 	clr	c
      0003C4 9E               [12] 1263 	subb	a,r6
      0003C5 F5 08            [12] 1264 	mov	_SetupLen,a
      0003C7 E5 09            [12] 1265 	mov	a,(_SetupLen + 1)
      0003C9 9F               [12] 1266 	subb	a,r7
      0003CA F5 09            [12] 1267 	mov	(_SetupLen + 1),a
                                   1268 ;	main.c:264: pDescr += len;
      0003CC EE               [12] 1269 	mov	a,r6
      0003CD 25 0D            [12] 1270 	add	a,_pDescr
      0003CF F5 0D            [12] 1271 	mov	_pDescr,a
      0003D1 EF               [12] 1272 	mov	a,r7
      0003D2 35 0E            [12] 1273 	addc	a,(_pDescr + 1)
      0003D4 F5 0E            [12] 1274 	mov	(_pDescr + 1),a
                                   1275 ;	main.c:265: break;
      0003D6 02 05 F2         [24] 1276 	ljmp	00194$
                                   1277 ;	main.c:266: case USB_SET_ADDRESS:
      0003D9                       1278 00129$:
                                   1279 ;	main.c:267: SetupLen = UsbSetupBuf->wValueL;                              //??????USB????????????
      0003D9 90 00 02         [24] 1280 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0003DC E0               [24] 1281 	movx	a,@dptr
      0003DD FD               [12] 1282 	mov	r5,a
      0003DE 8D 08            [24] 1283 	mov	_SetupLen,r5
      0003E0 75 09 00         [24] 1284 	mov	(_SetupLen + 1),#0x00
                                   1285 ;	main.c:268: break;
      0003E3 02 05 F2         [24] 1286 	ljmp	00194$
                                   1287 ;	main.c:269: case USB_GET_CONFIGURATION:
      0003E6                       1288 00130$:
                                   1289 ;	main.c:270: Ep0Buffer[0] = UsbConfig;
      0003E6 90 00 00         [24] 1290 	mov	dptr,#_Ep0Buffer
      0003E9 E5 0C            [12] 1291 	mov	a,_UsbConfig
      0003EB F0               [24] 1292 	movx	@dptr,a
                                   1293 ;	main.c:271: if ( SetupLen >= 1 )
      0003EC C3               [12] 1294 	clr	c
      0003ED E5 08            [12] 1295 	mov	a,_SetupLen
      0003EF 94 01            [12] 1296 	subb	a,#0x01
      0003F1 E5 09            [12] 1297 	mov	a,(_SetupLen + 1)
      0003F3 94 00            [12] 1298 	subb	a,#0x00
      0003F5 50 03            [24] 1299 	jnc	00552$
      0003F7 02 05 F2         [24] 1300 	ljmp	00194$
      0003FA                       1301 00552$:
                                   1302 ;	main.c:273: len = 1;
      0003FA 7E 01            [12] 1303 	mov	r6,#0x01
      0003FC 7F 00            [12] 1304 	mov	r7,#0x00
                                   1305 ;	main.c:275: break;
      0003FE 02 05 F2         [24] 1306 	ljmp	00194$
                                   1307 ;	main.c:276: case USB_SET_CONFIGURATION:
      000401                       1308 00133$:
                                   1309 ;	main.c:277: UsbConfig = UsbSetupBuf->wValueL;
      000401 90 00 02         [24] 1310 	mov	dptr,#(_Ep0Buffer + 0x0002)
      000404 E0               [24] 1311 	movx	a,@dptr
      000405 F5 0C            [12] 1312 	mov	_UsbConfig,a
                                   1313 ;	main.c:278: break;
      000407 02 05 F2         [24] 1314 	ljmp	00194$
                                   1315 ;	main.c:281: case USB_CLEAR_FEATURE:                                            //Clear Feature
      00040A                       1316 00135$:
                                   1317 ;	main.c:282: if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE )                  /* ???????????? */
      00040A 90 00 00         [24] 1318 	mov	dptr,#_Ep0Buffer
      00040D E0               [24] 1319 	movx	a,@dptr
      00040E 54 1F            [12] 1320 	anl	a,#0x1f
      000410 70 33            [24] 1321 	jnz	00154$
                                   1322 ;	main.c:284: if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 )
      000412 90 00 03         [24] 1323 	mov	dptr,#(_Ep0Buffer + 0x0003)
      000415 E0               [24] 1324 	movx	a,@dptr
      000416 FC               [12] 1325 	mov	r4,a
      000417 7D 00            [12] 1326 	mov	r5,#0x00
      000419 90 00 02         [24] 1327 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00041C E0               [24] 1328 	movx	a,@dptr
      00041D FB               [12] 1329 	mov	r3,a
      00041E 7A 00            [12] 1330 	mov	r2,#0x00
      000420 42 05            [12] 1331 	orl	ar5,a
      000422 EA               [12] 1332 	mov	a,r2
      000423 42 04            [12] 1333 	orl	ar4,a
      000425 BD 01 16         [24] 1334 	cjne	r5,#0x01,00140$
      000428 BC 00 13         [24] 1335 	cjne	r4,#0x00,00140$
                                   1336 ;	main.c:286: if( CfgDesc[ 7 ] & 0x20 )
      00042B 90 0B 36         [24] 1337 	mov	dptr,#(_CfgDesc + 0x0007)
      00042E E4               [12] 1338 	clr	a
      00042F 93               [24] 1339 	movc	a,@a+dptr
      000430 FD               [12] 1340 	mov	r5,a
      000431 30 E5 03         [24] 1341 	jnb	acc.5,00557$
      000434 02 05 F2         [24] 1342 	ljmp	00194$
      000437                       1343 00557$:
                                   1344 ;	main.c:292: len = 0xFF;                                        /* ???????????? */
      000437 7E FF            [12] 1345 	mov	r6,#0xff
      000439 7F 00            [12] 1346 	mov	r7,#0x00
      00043B 02 05 F2         [24] 1347 	ljmp	00194$
      00043E                       1348 00140$:
                                   1349 ;	main.c:297: len = 0xFF;                                            /* ???????????? */
      00043E 7E FF            [12] 1350 	mov	r6,#0xff
      000440 7F 00            [12] 1351 	mov	r7,#0x00
      000442 02 05 F2         [24] 1352 	ljmp	00194$
      000445                       1353 00154$:
                                   1354 ;	main.c:300: else if ( ( UsbSetupBuf->bRequestType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP )// ??????
      000445 90 00 00         [24] 1355 	mov	dptr,#_Ep0Buffer
      000448 E0               [24] 1356 	movx	a,@dptr
      000449 FD               [12] 1357 	mov	r5,a
      00044A 53 05 1F         [24] 1358 	anl	ar5,#0x1f
      00044D 7C 00            [12] 1359 	mov	r4,#0x00
      00044F BD 02 5E         [24] 1360 	cjne	r5,#0x02,00151$
      000452 BC 00 5B         [24] 1361 	cjne	r4,#0x00,00151$
                                   1362 ;	main.c:302: switch( UsbSetupBuf->wIndexL )
      000455 90 00 04         [24] 1363 	mov	dptr,#(_Ep0Buffer + 0x0004)
      000458 E0               [24] 1364 	movx	a,@dptr
      000459 FD               [12] 1365 	mov	r5,a
      00045A BD 01 02         [24] 1366 	cjne	r5,#0x01,00560$
      00045D 80 44            [24] 1367 	sjmp	00147$
      00045F                       1368 00560$:
      00045F BD 02 02         [24] 1369 	cjne	r5,#0x02,00561$
      000462 80 2E            [24] 1370 	sjmp	00145$
      000464                       1371 00561$:
      000464 BD 03 02         [24] 1372 	cjne	r5,#0x03,00562$
      000467 80 18            [24] 1373 	sjmp	00143$
      000469                       1374 00562$:
      000469 BD 81 02         [24] 1375 	cjne	r5,#0x81,00563$
      00046C 80 2A            [24] 1376 	sjmp	00146$
      00046E                       1377 00563$:
      00046E BD 82 02         [24] 1378 	cjne	r5,#0x82,00564$
      000471 80 14            [24] 1379 	sjmp	00144$
      000473                       1380 00564$:
      000473 BD 83 33         [24] 1381 	cjne	r5,#0x83,00148$
                                   1382 ;	main.c:305: UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
      000476 74 BC            [12] 1383 	mov	a,#0xbc
      000478 55 D6            [12] 1384 	anl	a,_UEP3_CTRL
      00047A 44 02            [12] 1385 	orl	a,#0x02
      00047C F5 D6            [12] 1386 	mov	_UEP3_CTRL,a
                                   1387 ;	main.c:306: break;
      00047E 02 05 F2         [24] 1388 	ljmp	00194$
                                   1389 ;	main.c:307: case 0x03:
      000481                       1390 00143$:
                                   1391 ;	main.c:308: UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
      000481 53 D6 73         [24] 1392 	anl	_UEP3_CTRL,#0x73
                                   1393 ;	main.c:309: break;
      000484 02 05 F2         [24] 1394 	ljmp	00194$
                                   1395 ;	main.c:310: case 0x82:
      000487                       1396 00144$:
                                   1397 ;	main.c:311: UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
      000487 74 BC            [12] 1398 	mov	a,#0xbc
      000489 55 D4            [12] 1399 	anl	a,_UEP2_CTRL
      00048B 44 02            [12] 1400 	orl	a,#0x02
      00048D F5 D4            [12] 1401 	mov	_UEP2_CTRL,a
                                   1402 ;	main.c:312: break;
      00048F 02 05 F2         [24] 1403 	ljmp	00194$
                                   1404 ;	main.c:313: case 0x02:
      000492                       1405 00145$:
                                   1406 ;	main.c:314: UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
      000492 53 D4 73         [24] 1407 	anl	_UEP2_CTRL,#0x73
                                   1408 ;	main.c:315: break;
      000495 02 05 F2         [24] 1409 	ljmp	00194$
                                   1410 ;	main.c:316: case 0x81:
      000498                       1411 00146$:
                                   1412 ;	main.c:317: UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
      000498 74 BC            [12] 1413 	mov	a,#0xbc
      00049A 55 D2            [12] 1414 	anl	a,_UEP1_CTRL
      00049C 44 02            [12] 1415 	orl	a,#0x02
      00049E F5 D2            [12] 1416 	mov	_UEP1_CTRL,a
                                   1417 ;	main.c:318: break;
      0004A0 02 05 F2         [24] 1418 	ljmp	00194$
                                   1419 ;	main.c:319: case 0x01:
      0004A3                       1420 00147$:
                                   1421 ;	main.c:320: UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
      0004A3 53 D2 73         [24] 1422 	anl	_UEP1_CTRL,#0x73
                                   1423 ;	main.c:321: break;
      0004A6 02 05 F2         [24] 1424 	ljmp	00194$
                                   1425 ;	main.c:322: default:
      0004A9                       1426 00148$:
                                   1427 ;	main.c:323: len = 0xFF;                                         // ??????????????????
      0004A9 7E FF            [12] 1428 	mov	r6,#0xff
      0004AB 7F 00            [12] 1429 	mov	r7,#0x00
                                   1430 ;	main.c:325: }
      0004AD 02 05 F2         [24] 1431 	ljmp	00194$
      0004B0                       1432 00151$:
                                   1433 ;	main.c:329: len = 0xFF;                                                // ?????????????????????
      0004B0 7E FF            [12] 1434 	mov	r6,#0xff
      0004B2 7F 00            [12] 1435 	mov	r7,#0x00
                                   1436 ;	main.c:331: break;
      0004B4 02 05 F2         [24] 1437 	ljmp	00194$
                                   1438 ;	main.c:332: case USB_SET_FEATURE:                                          /* Set Feature */
      0004B7                       1439 00156$:
                                   1440 ;	main.c:333: if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE )                  /* ???????????? */
      0004B7 90 00 00         [24] 1441 	mov	dptr,#_Ep0Buffer
      0004BA E0               [24] 1442 	movx	a,@dptr
      0004BB 54 1F            [12] 1443 	anl	a,#0x1f
      0004BD 70 4D            [24] 1444 	jnz	00181$
                                   1445 ;	main.c:335: if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 )
      0004BF 90 00 03         [24] 1446 	mov	dptr,#(_Ep0Buffer + 0x0003)
      0004C2 E0               [24] 1447 	movx	a,@dptr
      0004C3 FC               [12] 1448 	mov	r4,a
      0004C4 7D 00            [12] 1449 	mov	r5,#0x00
      0004C6 90 00 02         [24] 1450 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0004C9 E0               [24] 1451 	movx	a,@dptr
      0004CA FB               [12] 1452 	mov	r3,a
      0004CB 7A 00            [12] 1453 	mov	r2,#0x00
      0004CD 42 05            [12] 1454 	orl	ar5,a
      0004CF EA               [12] 1455 	mov	a,r2
      0004D0 42 04            [12] 1456 	orl	ar4,a
      0004D2 BD 01 30         [24] 1457 	cjne	r5,#0x01,00164$
      0004D5 BC 00 2D         [24] 1458 	cjne	r4,#0x00,00164$
                                   1459 ;	main.c:337: if( CfgDesc[ 7 ] & 0x20 )
      0004D8 90 0B 36         [24] 1460 	mov	dptr,#(_CfgDesc + 0x0007)
      0004DB E4               [12] 1461 	clr	a
      0004DC 93               [24] 1462 	movc	a,@a+dptr
      0004DD FD               [12] 1463 	mov	r5,a
      0004DE 30 E5 1D         [24] 1464 	jnb	acc.5,00161$
                                   1465 ;	main.c:343: while ( XBUS_AUX & bUART0_TX )
      0004E1                       1466 00157$:
      0004E1 E5 A2            [12] 1467 	mov	a,_XBUS_AUX
      0004E3 20 E7 FB         [24] 1468 	jb	acc.7,00157$
                                   1469 ;	main.c:347: SAFE_MOD = 0x55;
      0004E6 75 A1 55         [24] 1470 	mov	_SAFE_MOD,#0x55
                                   1471 ;	main.c:348: SAFE_MOD = 0xAA;
      0004E9 75 A1 AA         [24] 1472 	mov	_SAFE_MOD,#0xaa
                                   1473 ;	main.c:349: WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB??????RXD0/1????????????????????????
      0004EC 75 A9 C1         [24] 1474 	mov	_WAKE_CTRL,#0xc1
                                   1475 ;	main.c:350: PCON |= PD;                                                                 //??????
      0004EF 43 87 02         [24] 1476 	orl	_PCON,#0x02
                                   1477 ;	main.c:351: SAFE_MOD = 0x55;
      0004F2 75 A1 55         [24] 1478 	mov	_SAFE_MOD,#0x55
                                   1479 ;	main.c:352: SAFE_MOD = 0xAA;
      0004F5 75 A1 AA         [24] 1480 	mov	_SAFE_MOD,#0xaa
                                   1481 ;	main.c:353: WAKE_CTRL = 0x00;
      0004F8 75 A9 00         [24] 1482 	mov	_WAKE_CTRL,#0x00
      0004FB 02 05 F2         [24] 1483 	ljmp	00194$
      0004FE                       1484 00161$:
                                   1485 ;	main.c:357: len = 0xFF;                                        /* ???????????? */
      0004FE 7E FF            [12] 1486 	mov	r6,#0xff
      000500 7F 00            [12] 1487 	mov	r7,#0x00
      000502 02 05 F2         [24] 1488 	ljmp	00194$
      000505                       1489 00164$:
                                   1490 ;	main.c:362: len = 0xFF;                                            /* ???????????? */
      000505 7E FF            [12] 1491 	mov	r6,#0xff
      000507 7F 00            [12] 1492 	mov	r7,#0x00
      000509 02 05 F2         [24] 1493 	ljmp	00194$
      00050C                       1494 00181$:
                                   1495 ;	main.c:365: else if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_ENDP )             /* ???????????? */
      00050C 90 00 00         [24] 1496 	mov	dptr,#_Ep0Buffer
      00050F E0               [24] 1497 	movx	a,@dptr
      000510 FD               [12] 1498 	mov	r5,a
      000511 53 05 1F         [24] 1499 	anl	ar5,#0x1f
      000514 7C 00            [12] 1500 	mov	r4,#0x00
      000516 BD 02 05         [24] 1501 	cjne	r5,#0x02,00573$
      000519 BC 00 02         [24] 1502 	cjne	r4,#0x00,00573$
      00051C 80 03            [24] 1503 	sjmp	00574$
      00051E                       1504 00573$:
      00051E 02 05 C2         [24] 1505 	ljmp	00178$
      000521                       1506 00574$:
                                   1507 ;	main.c:367: if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x00 )
      000521 90 00 03         [24] 1508 	mov	dptr,#(_Ep0Buffer + 0x0003)
      000524 E0               [24] 1509 	movx	a,@dptr
      000525 FC               [12] 1510 	mov	r4,a
      000526 7D 00            [12] 1511 	mov	r5,#0x00
      000528 90 00 02         [24] 1512 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00052B E0               [24] 1513 	movx	a,@dptr
      00052C FB               [12] 1514 	mov	r3,a
      00052D 7A 00            [12] 1515 	mov	r2,#0x00
      00052F 42 05            [12] 1516 	orl	ar5,a
      000531 EA               [12] 1517 	mov	a,r2
      000532 42 04            [12] 1518 	orl	ar4,a
      000534 ED               [12] 1519 	mov	a,r5
      000535 4C               [12] 1520 	orl	a,r4
      000536 60 03            [24] 1521 	jz	00575$
      000538 02 05 BC         [24] 1522 	ljmp	00175$
      00053B                       1523 00575$:
                                   1524 ;	main.c:369: switch( ( ( uint16_t )UsbSetupBuf->wIndexH << 8 ) | UsbSetupBuf->wIndexL )
      00053B 90 00 05         [24] 1525 	mov	dptr,#(_Ep0Buffer + 0x0005)
      00053E E0               [24] 1526 	movx	a,@dptr
      00053F FC               [12] 1527 	mov	r4,a
      000540 7D 00            [12] 1528 	mov	r5,#0x00
      000542 90 00 04         [24] 1529 	mov	dptr,#(_Ep0Buffer + 0x0004)
      000545 E0               [24] 1530 	movx	a,@dptr
      000546 FB               [12] 1531 	mov	r3,a
      000547 7A 00            [12] 1532 	mov	r2,#0x00
      000549 42 05            [12] 1533 	orl	ar5,a
      00054B EA               [12] 1534 	mov	a,r2
      00054C 42 04            [12] 1535 	orl	ar4,a
      00054E BD 01 05         [24] 1536 	cjne	r5,#0x01,00576$
      000551 BC 00 02         [24] 1537 	cjne	r4,#0x00,00576$
      000554 80 58            [24] 1538 	sjmp	00171$
      000556                       1539 00576$:
      000556 BD 02 05         [24] 1540 	cjne	r5,#0x02,00577$
      000559 BC 00 02         [24] 1541 	cjne	r4,#0x00,00577$
      00055C 80 3C            [24] 1542 	sjmp	00169$
      00055E                       1543 00577$:
      00055E BD 03 05         [24] 1544 	cjne	r5,#0x03,00578$
      000561 BC 00 02         [24] 1545 	cjne	r4,#0x00,00578$
      000564 80 20            [24] 1546 	sjmp	00167$
      000566                       1547 00578$:
      000566 BD 81 05         [24] 1548 	cjne	r5,#0x81,00579$
      000569 BC 00 02         [24] 1549 	cjne	r4,#0x00,00579$
      00056C 80 36            [24] 1550 	sjmp	00170$
      00056E                       1551 00579$:
      00056E BD 82 05         [24] 1552 	cjne	r5,#0x82,00580$
      000571 BC 00 02         [24] 1553 	cjne	r4,#0x00,00580$
      000574 80 1A            [24] 1554 	sjmp	00168$
      000576                       1555 00580$:
      000576 BD 83 3D         [24] 1556 	cjne	r5,#0x83,00172$
      000579 BC 00 3A         [24] 1557 	cjne	r4,#0x00,00172$
                                   1558 ;	main.c:372: UEP3_CTRL = UEP3_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ????????????3 IN STALL */
      00057C 74 BF            [12] 1559 	mov	a,#0xbf
      00057E 55 D6            [12] 1560 	anl	a,_UEP3_CTRL
      000580 44 03            [12] 1561 	orl	a,#0x03
      000582 F5 D6            [12] 1562 	mov	_UEP3_CTRL,a
                                   1563 ;	main.c:373: break;
                                   1564 ;	main.c:374: case 0x03:
      000584 80 6C            [24] 1565 	sjmp	00194$
      000586                       1566 00167$:
                                   1567 ;	main.c:375: UEP3_CTRL = UEP3_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ????????????3 OUT Stall */
      000586 74 7F            [12] 1568 	mov	a,#0x7f
      000588 55 D6            [12] 1569 	anl	a,_UEP3_CTRL
      00058A 44 0C            [12] 1570 	orl	a,#0x0c
      00058C F5 D6            [12] 1571 	mov	_UEP3_CTRL,a
                                   1572 ;	main.c:376: break;
                                   1573 ;	main.c:377: case 0x82:
      00058E 80 62            [24] 1574 	sjmp	00194$
      000590                       1575 00168$:
                                   1576 ;	main.c:378: UEP2_CTRL = UEP2_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ????????????2 IN STALL */
      000590 74 BF            [12] 1577 	mov	a,#0xbf
      000592 55 D4            [12] 1578 	anl	a,_UEP2_CTRL
      000594 44 03            [12] 1579 	orl	a,#0x03
      000596 F5 D4            [12] 1580 	mov	_UEP2_CTRL,a
                                   1581 ;	main.c:379: break;
                                   1582 ;	main.c:380: case 0x02:
      000598 80 58            [24] 1583 	sjmp	00194$
      00059A                       1584 00169$:
                                   1585 ;	main.c:381: UEP2_CTRL = UEP2_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ????????????2 OUT Stall */
      00059A 74 7F            [12] 1586 	mov	a,#0x7f
      00059C 55 D4            [12] 1587 	anl	a,_UEP2_CTRL
      00059E 44 0C            [12] 1588 	orl	a,#0x0c
      0005A0 F5 D4            [12] 1589 	mov	_UEP2_CTRL,a
                                   1590 ;	main.c:382: break;
                                   1591 ;	main.c:383: case 0x81:
      0005A2 80 4E            [24] 1592 	sjmp	00194$
      0005A4                       1593 00170$:
                                   1594 ;	main.c:384: UEP1_CTRL = UEP1_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* ????????????1 IN STALL */
      0005A4 74 BF            [12] 1595 	mov	a,#0xbf
      0005A6 55 D2            [12] 1596 	anl	a,_UEP1_CTRL
      0005A8 44 03            [12] 1597 	orl	a,#0x03
      0005AA F5 D2            [12] 1598 	mov	_UEP1_CTRL,a
                                   1599 ;	main.c:385: break;
                                   1600 ;	main.c:386: case 0x01:
      0005AC 80 44            [24] 1601 	sjmp	00194$
      0005AE                       1602 00171$:
                                   1603 ;	main.c:387: UEP1_CTRL = UEP1_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* ????????????1 OUT Stall */
      0005AE 74 7F            [12] 1604 	mov	a,#0x7f
      0005B0 55 D2            [12] 1605 	anl	a,_UEP1_CTRL
      0005B2 44 0C            [12] 1606 	orl	a,#0x0c
      0005B4 F5 D2            [12] 1607 	mov	_UEP1_CTRL,a
                                   1608 ;	main.c:388: default:
      0005B6                       1609 00172$:
                                   1610 ;	main.c:389: len = 0xFF;                                    /* ???????????? */
      0005B6 7E FF            [12] 1611 	mov	r6,#0xff
      0005B8 7F 00            [12] 1612 	mov	r7,#0x00
                                   1613 ;	main.c:391: }
      0005BA 80 36            [24] 1614 	sjmp	00194$
      0005BC                       1615 00175$:
                                   1616 ;	main.c:395: len = 0xFF;                                      /* ???????????? */
      0005BC 7E FF            [12] 1617 	mov	r6,#0xff
      0005BE 7F 00            [12] 1618 	mov	r7,#0x00
      0005C0 80 30            [24] 1619 	sjmp	00194$
      0005C2                       1620 00178$:
                                   1621 ;	main.c:400: len = 0xFF;                                          /* ???????????? */
      0005C2 7E FF            [12] 1622 	mov	r6,#0xff
      0005C4 7F 00            [12] 1623 	mov	r7,#0x00
                                   1624 ;	main.c:402: break;
                                   1625 ;	main.c:403: case USB_GET_STATUS:
      0005C6 80 2A            [24] 1626 	sjmp	00194$
      0005C8                       1627 00183$:
                                   1628 ;	main.c:404: Ep0Buffer[0] = 0x00;
      0005C8 90 00 00         [24] 1629 	mov	dptr,#_Ep0Buffer
      0005CB E4               [12] 1630 	clr	a
      0005CC F0               [24] 1631 	movx	@dptr,a
                                   1632 ;	main.c:405: Ep0Buffer[1] = 0x00;
      0005CD 90 00 01         [24] 1633 	mov	dptr,#(_Ep0Buffer + 0x0001)
      0005D0 F0               [24] 1634 	movx	@dptr,a
                                   1635 ;	main.c:406: if ( SetupLen >= 2 )
      0005D1 C3               [12] 1636 	clr	c
      0005D2 E5 08            [12] 1637 	mov	a,_SetupLen
      0005D4 94 02            [12] 1638 	subb	a,#0x02
      0005D6 E5 09            [12] 1639 	mov	a,(_SetupLen + 1)
      0005D8 94 00            [12] 1640 	subb	a,#0x00
      0005DA 40 06            [24] 1641 	jc	00185$
                                   1642 ;	main.c:408: len = 2;
      0005DC 7E 02            [12] 1643 	mov	r6,#0x02
      0005DE 7F 00            [12] 1644 	mov	r7,#0x00
      0005E0 80 10            [24] 1645 	sjmp	00194$
      0005E2                       1646 00185$:
                                   1647 ;	main.c:412: len = SetupLen;
      0005E2 AE 08            [24] 1648 	mov	r6,_SetupLen
      0005E4 AF 09            [24] 1649 	mov	r7,(_SetupLen + 1)
                                   1650 ;	main.c:414: break;
                                   1651 ;	main.c:415: default:
      0005E6 80 0A            [24] 1652 	sjmp	00194$
      0005E8                       1653 00187$:
                                   1654 ;	main.c:416: len = 0xff;                                                    //????????????
      0005E8 7E FF            [12] 1655 	mov	r6,#0xff
      0005EA 7F 00            [12] 1656 	mov	r7,#0x00
                                   1657 ;	main.c:418: }
      0005EC 80 04            [24] 1658 	sjmp	00194$
      0005EE                       1659 00193$:
                                   1660 ;	main.c:423: len = 0xff;                                                         //???????????????
      0005EE 7E FF            [12] 1661 	mov	r6,#0xff
      0005F0 7F 00            [12] 1662 	mov	r7,#0x00
      0005F2                       1663 00194$:
                                   1664 ;	main.c:425: if(len == 0xff)
      0005F2 BE FF 0C         [24] 1665 	cjne	r6,#0xff,00199$
      0005F5 BF 00 09         [24] 1666 	cjne	r7,#0x00,00199$
                                   1667 ;	main.c:427: SetupReq = 0xFF;
      0005F8 75 0A FF         [24] 1668 	mov	_SetupReq,#0xff
                                   1669 ;	main.c:428: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_STALL | UEP_T_RES_STALL;//STALL
      0005FB 75 DC CF         [24] 1670 	mov	_UEP0_CTRL,#0xcf
      0005FE 02 06 CA         [24] 1671 	ljmp	00213$
      000601                       1672 00199$:
                                   1673 ;	main.c:430: else if(len <= DEFAULT_ENDP0_SIZE)                                                       //????????????????????????????????????0?????????
      000601 C3               [12] 1674 	clr	c
      000602 74 08            [12] 1675 	mov	a,#0x08
      000604 9E               [12] 1676 	subb	a,r6
      000605 E4               [12] 1677 	clr	a
      000606 9F               [12] 1678 	subb	a,r7
      000607 40 08            [24] 1679 	jc	00196$
                                   1680 ;	main.c:432: UEP0_T_LEN = len;
      000609 8E DD            [24] 1681 	mov	_UEP0_T_LEN,r6
                                   1682 ;	main.c:433: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//??????????????????DATA1???????????????ACK
      00060B 75 DC C0         [24] 1683 	mov	_UEP0_CTRL,#0xc0
      00060E 02 06 CA         [24] 1684 	ljmp	00213$
      000611                       1685 00196$:
                                   1686 ;	main.c:437: UEP0_T_LEN = 0;  //??????????????????????????????????????????????????????0???????????????????????????????????????????????????
      000611 75 DD 00         [24] 1687 	mov	_UEP0_T_LEN,#0x00
                                   1688 ;	main.c:438: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//??????????????????DATA1,????????????ACK
      000614 75 DC C0         [24] 1689 	mov	_UEP0_CTRL,#0xc0
                                   1690 ;	main.c:440: break;
      000617 02 06 CA         [24] 1691 	ljmp	00213$
                                   1692 ;	main.c:441: case UIS_TOKEN_IN | 0:                                                      //endpoint0 IN
      00061A                       1693 00201$:
                                   1694 ;	main.c:442: switch(SetupReq)
      00061A 74 05            [12] 1695 	mov	a,#0x05
      00061C B5 0A 02         [24] 1696 	cjne	a,_SetupReq,00587$
      00061F 80 5A            [24] 1697 	sjmp	00203$
      000621                       1698 00587$:
      000621 74 06            [12] 1699 	mov	a,#0x06
      000623 B5 0A 65         [24] 1700 	cjne	a,_SetupReq,00204$
                                   1701 ;	main.c:445: len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                                 //??????????????????
      000626 C3               [12] 1702 	clr	c
      000627 E5 08            [12] 1703 	mov	a,_SetupLen
      000629 94 08            [12] 1704 	subb	a,#0x08
      00062B E5 09            [12] 1705 	mov	a,(_SetupLen + 1)
      00062D 94 00            [12] 1706 	subb	a,#0x00
      00062F 40 06            [24] 1707 	jc	00232$
      000631 7E 08            [12] 1708 	mov	r6,#0x08
      000633 7F 00            [12] 1709 	mov	r7,#0x00
      000635 80 04            [24] 1710 	sjmp	00233$
      000637                       1711 00232$:
      000637 AE 08            [24] 1712 	mov	r6,_SetupLen
      000639 AF 09            [24] 1713 	mov	r7,(_SetupLen + 1)
      00063B                       1714 00233$:
                                   1715 ;	main.c:446: memcpy( Ep0Buffer, pDescr, len );                                   //??????????????????
      00063B 85 0D 26         [24] 1716 	mov	___memcpy_PARM_2,_pDescr
      00063E 85 0E 27         [24] 1717 	mov	(___memcpy_PARM_2 + 1),(_pDescr + 1)
      000641 85 0F 28         [24] 1718 	mov	(___memcpy_PARM_2 + 2),(_pDescr + 2)
      000644 8E 29            [24] 1719 	mov	___memcpy_PARM_3,r6
      000646 8F 2A            [24] 1720 	mov	(___memcpy_PARM_3 + 1),r7
      000648 90 00 00         [24] 1721 	mov	dptr,#_Ep0Buffer
      00064B 75 F0 00         [24] 1722 	mov	b,#0x00
      00064E C0 07            [24] 1723 	push	ar7
      000650 C0 06            [24] 1724 	push	ar6
      000652 12 0A 8D         [24] 1725 	lcall	___memcpy
      000655 D0 06            [24] 1726 	pop	ar6
      000657 D0 07            [24] 1727 	pop	ar7
                                   1728 ;	main.c:447: SetupLen -= len;
      000659 E5 08            [12] 1729 	mov	a,_SetupLen
      00065B C3               [12] 1730 	clr	c
      00065C 9E               [12] 1731 	subb	a,r6
      00065D F5 08            [12] 1732 	mov	_SetupLen,a
      00065F E5 09            [12] 1733 	mov	a,(_SetupLen + 1)
      000661 9F               [12] 1734 	subb	a,r7
      000662 F5 09            [12] 1735 	mov	(_SetupLen + 1),a
                                   1736 ;	main.c:448: pDescr += len;
      000664 EE               [12] 1737 	mov	a,r6
      000665 25 0D            [12] 1738 	add	a,_pDescr
      000667 F5 0D            [12] 1739 	mov	_pDescr,a
      000669 EF               [12] 1740 	mov	a,r7
      00066A 35 0E            [12] 1741 	addc	a,(_pDescr + 1)
      00066C F5 0E            [12] 1742 	mov	(_pDescr + 1),a
                                   1743 ;	main.c:449: UEP0_T_LEN = len;
      00066E 8E DD            [24] 1744 	mov	_UEP0_T_LEN,r6
                                   1745 ;	main.c:450: UEP0_CTRL ^= bUEP_T_TOG;                                             //?????????????????????
      000670 AE DC            [24] 1746 	mov	r6,_UEP0_CTRL
      000672 7F 00            [12] 1747 	mov	r7,#0x00
      000674 63 06 40         [24] 1748 	xrl	ar6,#0x40
      000677 8E DC            [24] 1749 	mov	_UEP0_CTRL,r6
                                   1750 ;	main.c:451: break;
                                   1751 ;	main.c:452: case USB_SET_ADDRESS:
      000679 80 4F            [24] 1752 	sjmp	00213$
      00067B                       1753 00203$:
                                   1754 ;	main.c:453: USB_DEV_AD = USB_DEV_AD & bUDA_GP_BIT | SetupLen;
      00067B E5 E3            [12] 1755 	mov	a,_USB_DEV_AD
      00067D 54 80            [12] 1756 	anl	a,#0x80
      00067F FF               [12] 1757 	mov	r7,a
      000680 E5 08            [12] 1758 	mov	a,_SetupLen
      000682 FE               [12] 1759 	mov	r6,a
      000683 4F               [12] 1760 	orl	a,r7
      000684 F5 E3            [12] 1761 	mov	_USB_DEV_AD,a
                                   1762 ;	main.c:454: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      000686 75 DC 02         [24] 1763 	mov	_UEP0_CTRL,#0x02
                                   1764 ;	main.c:455: break;
                                   1765 ;	main.c:456: default:
      000689 80 3F            [24] 1766 	sjmp	00213$
      00068B                       1767 00204$:
                                   1768 ;	main.c:457: UEP0_T_LEN = 0;                                                      //?????????????????????????????????????????????0?????????????????????????????????
      00068B 75 DD 00         [24] 1769 	mov	_UEP0_T_LEN,#0x00
                                   1770 ;	main.c:458: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      00068E 75 DC 02         [24] 1771 	mov	_UEP0_CTRL,#0x02
                                   1772 ;	main.c:461: break;
                                   1773 ;	main.c:462: case UIS_TOKEN_OUT | 0:  // endpoint0 OUT
      000691 80 37            [24] 1774 	sjmp	00213$
      000693                       1775 00206$:
                                   1776 ;	main.c:463: if(SetupReq ==SET_LINE_CODING)  //??????????????????
      000693 74 20            [12] 1777 	mov	a,#0x20
      000695 B5 0A 2C         [24] 1778 	cjne	a,_SetupReq,00210$
                                   1779 ;	main.c:465: if( U_TOG_OK )
      000698 30 DE 2F         [24] 1780 	jnb	_U_TOG_OK,00213$
                                   1781 ;	main.c:467: memcpy(LineCoding,UsbSetupBuf,USB_RX_LEN);
      00069B 75 26 00         [24] 1782 	mov	___memcpy_PARM_2,#_Ep0Buffer
      00069E 75 27 00         [24] 1783 	mov	(___memcpy_PARM_2 + 1),#(_Ep0Buffer >> 8)
      0006A1 75 28 00         [24] 1784 	mov	(___memcpy_PARM_2 + 2),#0x00
      0006A4 85 DB 29         [24] 1785 	mov	___memcpy_PARM_3,_USB_RX_LEN
      0006A7 75 2A 00         [24] 1786 	mov	(___memcpy_PARM_3 + 1),#0x00
      0006AA 90 01 00         [24] 1787 	mov	dptr,#_LineCoding
      0006AD 75 F0 00         [24] 1788 	mov	b,#0x00
      0006B0 12 0A 8D         [24] 1789 	lcall	___memcpy
                                   1790 ;	main.c:468: Config_Uart1(LineCoding);
      0006B3 90 01 00         [24] 1791 	mov	dptr,#_LineCoding
      0006B6 75 F0 00         [24] 1792 	mov	b,#0x00
      0006B9 12 01 19         [24] 1793 	lcall	_Config_Uart1
                                   1794 ;	main.c:469: UEP0_T_LEN = 0;
      0006BC 75 DD 00         [24] 1795 	mov	_UEP0_T_LEN,#0x00
                                   1796 ;	main.c:470: UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_ACK;  // ????????????0???
      0006BF 85 DC DC         [24] 1797 	mov	_UEP0_CTRL,_UEP0_CTRL
      0006C2 80 06            [24] 1798 	sjmp	00213$
      0006C4                       1799 00210$:
                                   1800 ;	main.c:475: UEP0_T_LEN = 0;
      0006C4 75 DD 00         [24] 1801 	mov	_UEP0_T_LEN,#0x00
                                   1802 ;	main.c:476: UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_NAK;  //??????????????????IN??????NAK
      0006C7 43 DC 02         [24] 1803 	orl	_UEP0_CTRL,#0x02
                                   1804 ;	main.c:484: }
      0006CA                       1805 00213$:
                                   1806 ;	main.c:485: UIF_TRANSFER = 0;                                                           //???0????????????
                                   1807 ;	assignBit
      0006CA C2 D9            [12] 1808 	clr	_UIF_TRANSFER
      0006CC                       1809 00215$:
                                   1810 ;	main.c:487: if(UIF_BUS_RST)                                                                 //????????????USB??????????????????
      0006CC 30 D8 29         [24] 1811 	jnb	_UIF_BUS_RST,00217$
                                   1812 ;	main.c:492: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      0006CF 75 DC 02         [24] 1813 	mov	_UEP0_CTRL,#0x02
                                   1814 ;	main.c:493: UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
      0006D2 75 D2 12         [24] 1815 	mov	_UEP1_CTRL,#0x12
                                   1816 ;	main.c:494: UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;
      0006D5 75 D4 12         [24] 1817 	mov	_UEP2_CTRL,#0x12
                                   1818 ;	main.c:495: USB_DEV_AD = 0x00;
      0006D8 75 E3 00         [24] 1819 	mov	_USB_DEV_AD,#0x00
                                   1820 ;	main.c:496: UIF_SUSPEND = 0;
                                   1821 ;	assignBit
      0006DB C2 DA            [12] 1822 	clr	_UIF_SUSPEND
                                   1823 ;	main.c:497: UIF_TRANSFER = 0;
                                   1824 ;	assignBit
      0006DD C2 D9            [12] 1825 	clr	_UIF_TRANSFER
                                   1826 ;	main.c:498: UIF_BUS_RST = 0;                                                             //???????????????
                                   1827 ;	assignBit
      0006DF C2 D8            [12] 1828 	clr	_UIF_BUS_RST
                                   1829 ;	main.c:499: Uart_Input_Point = 0;   //???????????????????????????
      0006E1 78 71            [12] 1830 	mov	r0,#_Uart_Input_Point
      0006E3 76 00            [12] 1831 	mov	@r0,#0x00
                                   1832 ;	main.c:500: Uart_Output_Point = 0;  //???????????????????????????
      0006E5 78 72            [12] 1833 	mov	r0,#_Uart_Output_Point
      0006E7 76 00            [12] 1834 	mov	@r0,#0x00
                                   1835 ;	main.c:501: UartByteCount = 0;      //????????????????????????????????????
      0006E9 78 73            [12] 1836 	mov	r0,#_UartByteCount
      0006EB 76 00            [12] 1837 	mov	@r0,#0x00
                                   1838 ;	main.c:502: USBByteCount = 0;       //USB?????????????????????
      0006ED 78 74            [12] 1839 	mov	r0,#_USBByteCount
      0006EF 76 00            [12] 1840 	mov	@r0,#0x00
                                   1841 ;	main.c:503: UsbConfig = 0;          //???????????????
      0006F1 75 0C 00         [24] 1842 	mov	_UsbConfig,#0x00
                                   1843 ;	main.c:504: UpPoint2_Busy = 0;
      0006F4 78 76            [12] 1844 	mov	r0,#_UpPoint2_Busy
      0006F6 76 00            [12] 1845 	mov	@r0,#0x00
      0006F8                       1846 00217$:
                                   1847 ;	main.c:506: if (UIF_SUSPEND)                                                                 //USB????????????/????????????
                                   1848 ;	main.c:508: UIF_SUSPEND = 0;
                                   1849 ;	assignBit
      0006F8 10 DA 02         [24] 1850 	jbc	_UIF_SUSPEND,00595$
      0006FB 80 21            [24] 1851 	sjmp	00224$
      0006FD                       1852 00595$:
                                   1853 ;	main.c:509: if ( USB_MIS_ST & bUMS_SUSPEND )                                             //??????
      0006FD E5 DA            [12] 1854 	mov	a,_USB_MIS_ST
      0006FF 30 E2 1F         [24] 1855 	jnb	acc.2,00226$
                                   1856 ;	main.c:514: while ( XBUS_AUX & bUART0_TX )
      000702                       1857 00218$:
      000702 E5 A2            [12] 1858 	mov	a,_XBUS_AUX
      000704 20 E7 FB         [24] 1859 	jb	acc.7,00218$
                                   1860 ;	main.c:518: SAFE_MOD = 0x55;
      000707 75 A1 55         [24] 1861 	mov	_SAFE_MOD,#0x55
                                   1862 ;	main.c:519: SAFE_MOD = 0xAA;
      00070A 75 A1 AA         [24] 1863 	mov	_SAFE_MOD,#0xaa
                                   1864 ;	main.c:520: WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB??????RXD0/1????????????????????????
      00070D 75 A9 C1         [24] 1865 	mov	_WAKE_CTRL,#0xc1
                                   1866 ;	main.c:521: PCON |= PD;                                                                 //??????
      000710 43 87 02         [24] 1867 	orl	_PCON,#0x02
                                   1868 ;	main.c:522: SAFE_MOD = 0x55;
      000713 75 A1 55         [24] 1869 	mov	_SAFE_MOD,#0x55
                                   1870 ;	main.c:523: SAFE_MOD = 0xAA;
      000716 75 A1 AA         [24] 1871 	mov	_SAFE_MOD,#0xaa
                                   1872 ;	main.c:524: WAKE_CTRL = 0x00;
      000719 75 A9 00         [24] 1873 	mov	_WAKE_CTRL,#0x00
      00071C 80 03            [24] 1874 	sjmp	00226$
      00071E                       1875 00224$:
                                   1876 ;	main.c:528: USB_INT_FG = 0xFF;                                                             //???????????????
      00071E 75 D8 FF         [24] 1877 	mov	_USB_INT_FG,#0xff
      000721                       1878 00226$:
                                   1879 ;	main.c:531: }
      000721 D0 D0            [24] 1880 	pop	psw
      000723 D0 00            [24] 1881 	pop	(0+0)
      000725 D0 01            [24] 1882 	pop	(0+1)
      000727 D0 02            [24] 1883 	pop	(0+2)
      000729 D0 03            [24] 1884 	pop	(0+3)
      00072B D0 04            [24] 1885 	pop	(0+4)
      00072D D0 05            [24] 1886 	pop	(0+5)
      00072F D0 06            [24] 1887 	pop	(0+6)
      000731 D0 07            [24] 1888 	pop	(0+7)
      000733 D0 83            [24] 1889 	pop	dph
      000735 D0 82            [24] 1890 	pop	dpl
      000737 D0 F0            [24] 1891 	pop	b
      000739 D0 E0            [24] 1892 	pop	acc
      00073B D0 20            [24] 1893 	pop	bits
      00073D 32               [24] 1894 	reti
                                   1895 ;------------------------------------------------------------
                                   1896 ;Allocation info for local variables in function 'Uart1_ISR'
                                   1897 ;------------------------------------------------------------
                                   1898 ;	main.c:536: void Uart1_ISR(void) __interrupt (INT_NO_UART1)
                                   1899 ;	-----------------------------------------
                                   1900 ;	 function Uart1_ISR
                                   1901 ;	-----------------------------------------
      00073E                       1902 _Uart1_ISR:
      00073E C0 E0            [24] 1903 	push	acc
      000740 C0 07            [24] 1904 	push	ar7
      000742 C0 00            [24] 1905 	push	ar0
      000744 C0 D0            [24] 1906 	push	psw
      000746 75 D0 00         [24] 1907 	mov	psw,#0x00
                                   1908 ;	main.c:538: if(U1RI)   //????????????
      000749 30 C0 23         [24] 1909 	jnb	_U1RI,00105$
                                   1910 ;	main.c:540: Receive_Uart_Buf[Uart_Input_Point++] = SBUF1;
      00074C 78 71            [12] 1911 	mov	r0,#_Uart_Input_Point
      00074E 86 07            [24] 1912 	mov	ar7,@r0
      000750 78 71            [12] 1913 	mov	r0,#_Uart_Input_Point
      000752 EF               [12] 1914 	mov	a,r7
      000753 04               [12] 1915 	inc	a
      000754 F6               [12] 1916 	mov	@r0,a
      000755 EF               [12] 1917 	mov	a,r7
      000756 24 31            [12] 1918 	add	a,#_Receive_Uart_Buf
      000758 F8               [12] 1919 	mov	r0,a
      000759 A6 C1            [24] 1920 	mov	@r0,_SBUF1
                                   1921 ;	main.c:541: UartByteCount++;                    //????????????????????????????????????
      00075B 78 73            [12] 1922 	mov	r0,#_UartByteCount
      00075D E6               [12] 1923 	mov	a,@r0
      00075E 78 73            [12] 1924 	mov	r0,#_UartByteCount
      000760 04               [12] 1925 	inc	a
      000761 F6               [12] 1926 	mov	@r0,a
                                   1927 ;	main.c:542: if(Uart_Input_Point>=UART_REV_LEN)
      000762 78 71            [12] 1928 	mov	r0,#_Uart_Input_Point
      000764 B6 40 00         [24] 1929 	cjne	@r0,#0x40,00116$
      000767                       1930 00116$:
      000767 40 04            [24] 1931 	jc	00102$
                                   1932 ;	main.c:543: Uart_Input_Point = 0;           //????????????
      000769 78 71            [12] 1933 	mov	r0,#_Uart_Input_Point
      00076B 76 00            [12] 1934 	mov	@r0,#0x00
      00076D                       1935 00102$:
                                   1936 ;	main.c:544: U1RI =0;
                                   1937 ;	assignBit
      00076D C2 C0            [12] 1938 	clr	_U1RI
      00076F                       1939 00105$:
                                   1940 ;	main.c:547: }
      00076F D0 D0            [24] 1941 	pop	psw
      000771 D0 00            [24] 1942 	pop	ar0
      000773 D0 07            [24] 1943 	pop	ar7
      000775 D0 E0            [24] 1944 	pop	acc
      000777 32               [24] 1945 	reti
                                   1946 ;	eliminated unneeded push/pop ar1
                                   1947 ;	eliminated unneeded push/pop dpl
                                   1948 ;	eliminated unneeded push/pop dph
                                   1949 ;	eliminated unneeded push/pop b
                                   1950 ;------------------------------------------------------------
                                   1951 ;Allocation info for local variables in function 'main'
                                   1952 ;------------------------------------------------------------
                                   1953 ;length                    Allocated to registers r6 
                                   1954 ;Uart_Timeout              Allocated to registers r7 
                                   1955 ;------------------------------------------------------------
                                   1956 ;	main.c:549: main()
                                   1957 ;	-----------------------------------------
                                   1958 ;	 function main
                                   1959 ;	-----------------------------------------
      000778                       1960 _main:
                                   1961 ;	main.c:552: uint8_t Uart_Timeout = 0;
      000778 7F 00            [12] 1962 	mov	r7,#0x00
                                   1963 ;	main.c:553: CfgFsys( );                                                           //CH559??????????????????
      00077A C0 07            [24] 1964 	push	ar7
      00077C 12 08 5F         [24] 1965 	lcall	_CfgFsys
                                   1966 ;	main.c:554: mDelaymS(5);                                                          //????????????????????????????????????,??????
      00077F 90 00 05         [24] 1967 	mov	dptr,#0x0005
      000782 12 08 87         [24] 1968 	lcall	_mDelaymS
                                   1969 ;	main.c:555: mInitSTDIO( );                                                        //??????0,??????????????????
      000785 12 08 A9         [24] 1970 	lcall	_mInitSTDIO
                                   1971 ;	main.c:556: UART1Setup( );                                                        //??????CDC
      000788 12 09 6B         [24] 1972 	lcall	_UART1Setup
                                   1973 ;	main.c:561: USBDeviceCfg();
      00078B 12 00 CD         [24] 1974 	lcall	_USBDeviceCfg
                                   1975 ;	main.c:562: USBDeviceEndPointCfg();                                               //????????????
      00078E 12 00 F7         [24] 1976 	lcall	_USBDeviceEndPointCfg
                                   1977 ;	main.c:563: USBDeviceIntCfg();                                                    //???????????????
      000791 12 00 E6         [24] 1978 	lcall	_USBDeviceIntCfg
      000794 D0 07            [24] 1979 	pop	ar7
                                   1980 ;	main.c:564: UEP0_T_LEN = 0;
      000796 75 DD 00         [24] 1981 	mov	_UEP0_T_LEN,#0x00
                                   1982 ;	main.c:565: UEP1_T_LEN = 0;                                                       //????????????????????????????????????
      000799 75 D3 00         [24] 1983 	mov	_UEP1_T_LEN,#0x00
                                   1984 ;	main.c:566: UEP2_T_LEN = 0;                                                       //????????????????????????????????????
      00079C 75 D5 00         [24] 1985 	mov	_UEP2_T_LEN,#0x00
                                   1986 ;	main.c:568: while(1)
      00079F                       1987 00121$:
                                   1988 ;	main.c:570: if(UsbConfig)
      00079F E5 0C            [12] 1989 	mov	a,_UsbConfig
      0007A1 60 FC            [24] 1990 	jz	00121$
                                   1991 ;	main.c:572: if(USBByteCount)   //USB?????????????????????
      0007A3 78 74            [12] 1992 	mov	r0,#_USBByteCount
      0007A5 E6               [12] 1993 	mov	a,@r0
      0007A6 60 2C            [24] 1994 	jz	00104$
                                   1995 ;	main.c:574: CH554UART1SendByte(Ep2Buffer[USBBufOutPoint++]);
      0007A8 78 75            [12] 1996 	mov	r0,#_USBBufOutPoint
      0007AA 86 06            [24] 1997 	mov	ar6,@r0
      0007AC 78 75            [12] 1998 	mov	r0,#_USBBufOutPoint
      0007AE EE               [12] 1999 	mov	a,r6
      0007AF 04               [12] 2000 	inc	a
      0007B0 F6               [12] 2001 	mov	@r0,a
      0007B1 EE               [12] 2002 	mov	a,r6
      0007B2 24 80            [12] 2003 	add	a,#_Ep2Buffer
      0007B4 F5 82            [12] 2004 	mov	dpl,a
      0007B6 E4               [12] 2005 	clr	a
      0007B7 34 00            [12] 2006 	addc	a,#(_Ep2Buffer >> 8)
      0007B9 F5 83            [12] 2007 	mov	dph,a
      0007BB E0               [24] 2008 	movx	a,@dptr
      0007BC F5 82            [12] 2009 	mov	dpl,a
      0007BE C0 07            [24] 2010 	push	ar7
      0007C0 12 09 7E         [24] 2011 	lcall	_CH554UART1SendByte
      0007C3 D0 07            [24] 2012 	pop	ar7
                                   2013 ;	main.c:575: USBByteCount--;
      0007C5 78 74            [12] 2014 	mov	r0,#_USBByteCount
      0007C7 E6               [12] 2015 	mov	a,@r0
      0007C8 78 74            [12] 2016 	mov	r0,#_USBByteCount
      0007CA 14               [12] 2017 	dec	a
      0007CB F6               [12] 2018 	mov	@r0,a
                                   2019 ;	main.c:576: if(USBByteCount==0)
      0007CC 78 74            [12] 2020 	mov	r0,#_USBByteCount
      0007CE E6               [12] 2021 	mov	a,@r0
      0007CF 70 03            [24] 2022 	jnz	00104$
                                   2023 ;	main.c:577: UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_ACK;
      0007D1 53 D4 F3         [24] 2024 	anl	_UEP2_CTRL,#0xf3
      0007D4                       2025 00104$:
                                   2026 ;	main.c:580: if(UartByteCount)
      0007D4 78 73            [12] 2027 	mov	r0,#_UartByteCount
      0007D6 E6               [12] 2028 	mov	a,@r0
      0007D7 60 01            [24] 2029 	jz	00106$
                                   2030 ;	main.c:581: Uart_Timeout++;
      0007D9 0F               [12] 2031 	inc	r7
      0007DA                       2032 00106$:
                                   2033 ;	main.c:582: if(!UpPoint2_Busy)   //????????????????????????????????????????????????????????????????????????
      0007DA 78 76            [12] 2034 	mov	r0,#_UpPoint2_Busy
      0007DC E6               [12] 2035 	mov	a,@r0
      0007DD 70 C0            [24] 2036 	jnz	00121$
                                   2037 ;	main.c:584: length = UartByteCount;
      0007DF 78 73            [12] 2038 	mov	r0,#_UartByteCount
                                   2039 ;	main.c:585: if(length>0)
      0007E1 E6               [12] 2040 	mov	a,@r0
      0007E2 FE               [12] 2041 	mov	r6,a
      0007E3 60 BA            [24] 2042 	jz	00121$
                                   2043 ;	main.c:587: if(length>39 || Uart_Timeout>100)
      0007E5 EE               [12] 2044 	mov	a,r6
      0007E6 24 D8            [12] 2045 	add	a,#0xff - 0x27
      0007E8 40 05            [24] 2046 	jc	00111$
      0007EA EF               [12] 2047 	mov	a,r7
      0007EB 24 9B            [12] 2048 	add	a,#0xff - 0x64
      0007ED 50 B0            [24] 2049 	jnc	00121$
      0007EF                       2050 00111$:
                                   2051 ;	main.c:589: Uart_Timeout = 0;
      0007EF 7F 00            [12] 2052 	mov	r7,#0x00
                                   2053 ;	main.c:590: if(Uart_Output_Point+length>UART_REV_LEN)
      0007F1 78 72            [12] 2054 	mov	r0,#_Uart_Output_Point
      0007F3 86 04            [24] 2055 	mov	ar4,@r0
      0007F5 7D 00            [12] 2056 	mov	r5,#0x00
      0007F7 8E 02            [24] 2057 	mov	ar2,r6
      0007F9 7B 00            [12] 2058 	mov	r3,#0x00
      0007FB EA               [12] 2059 	mov	a,r2
      0007FC 2C               [12] 2060 	add	a,r4
      0007FD FC               [12] 2061 	mov	r4,a
      0007FE EB               [12] 2062 	mov	a,r3
      0007FF 3D               [12] 2063 	addc	a,r5
      000800 FD               [12] 2064 	mov	r5,a
      000801 C3               [12] 2065 	clr	c
      000802 74 40            [12] 2066 	mov	a,#0x40
      000804 9C               [12] 2067 	subb	a,r4
      000805 74 80            [12] 2068 	mov	a,#(0x00 ^ 0x80)
      000807 8D F0            [24] 2069 	mov	b,r5
      000809 63 F0 80         [24] 2070 	xrl	b,#0x80
      00080C 95 F0            [12] 2071 	subb	a,b
      00080E 50 09            [24] 2072 	jnc	00108$
                                   2073 ;	main.c:591: length = UART_REV_LEN-Uart_Output_Point;
      000810 78 72            [12] 2074 	mov	r0,#_Uart_Output_Point
      000812 86 05            [24] 2075 	mov	ar5,@r0
      000814 74 40            [12] 2076 	mov	a,#0x40
      000816 C3               [12] 2077 	clr	c
      000817 9D               [12] 2078 	subb	a,r5
      000818 FE               [12] 2079 	mov	r6,a
      000819                       2080 00108$:
                                   2081 ;	main.c:592: UartByteCount -= length;
      000819 78 73            [12] 2082 	mov	r0,#_UartByteCount
      00081B E6               [12] 2083 	mov	a,@r0
      00081C C3               [12] 2084 	clr	c
      00081D 9E               [12] 2085 	subb	a,r6
      00081E F6               [12] 2086 	mov	@r0,a
                                   2087 ;	main.c:594: memcpy(Ep2Buffer+MAX_PACKET_SIZE,&Receive_Uart_Buf[Uart_Output_Point],length);
      00081F 78 72            [12] 2088 	mov	r0,#_Uart_Output_Point
      000821 E6               [12] 2089 	mov	a,@r0
      000822 24 31            [12] 2090 	add	a,#_Receive_Uart_Buf
      000824 FD               [12] 2091 	mov	r5,a
      000825 8D 26            [24] 2092 	mov	___memcpy_PARM_2,r5
      000827 75 27 00         [24] 2093 	mov	(___memcpy_PARM_2 + 1),#0x00
      00082A 75 28 40         [24] 2094 	mov	(___memcpy_PARM_2 + 2),#0x40
      00082D 8E 29            [24] 2095 	mov	___memcpy_PARM_3,r6
      00082F 75 2A 00         [24] 2096 	mov	(___memcpy_PARM_3 + 1),#0x00
      000832 90 00 C0         [24] 2097 	mov	dptr,#(_Ep2Buffer + 0x0040)
      000835 75 F0 00         [24] 2098 	mov	b,#0x00
      000838 C0 07            [24] 2099 	push	ar7
      00083A C0 06            [24] 2100 	push	ar6
      00083C 12 0A 8D         [24] 2101 	lcall	___memcpy
      00083F D0 06            [24] 2102 	pop	ar6
      000841 D0 07            [24] 2103 	pop	ar7
                                   2104 ;	main.c:595: Uart_Output_Point+=length;
      000843 78 72            [12] 2105 	mov	r0,#_Uart_Output_Point
      000845 EE               [12] 2106 	mov	a,r6
      000846 26               [12] 2107 	add	a,@r0
      000847 F6               [12] 2108 	mov	@r0,a
                                   2109 ;	main.c:596: if(Uart_Output_Point>=UART_REV_LEN)
      000848 78 72            [12] 2110 	mov	r0,#_Uart_Output_Point
      00084A B6 40 00         [24] 2111 	cjne	@r0,#0x40,00174$
      00084D                       2112 00174$:
      00084D 40 04            [24] 2113 	jc	00110$
                                   2114 ;	main.c:597: Uart_Output_Point = 0;
      00084F 78 72            [12] 2115 	mov	r0,#_Uart_Output_Point
      000851 76 00            [12] 2116 	mov	@r0,#0x00
      000853                       2117 00110$:
                                   2118 ;	main.c:598: UEP2_T_LEN = length;                                                    //????????????????????????????????????
      000853 8E D5            [24] 2119 	mov	_UEP2_T_LEN,r6
                                   2120 ;	main.c:599: UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_ACK;            //??????ACK
      000855 53 D4 FC         [24] 2121 	anl	_UEP2_CTRL,#0xfc
                                   2122 ;	main.c:600: UpPoint2_Busy = 1;
      000858 78 76            [12] 2123 	mov	r0,#_UpPoint2_Busy
      00085A 76 01            [12] 2124 	mov	@r0,#0x01
                                   2125 ;	main.c:606: }
      00085C 02 07 9F         [24] 2126 	ljmp	00121$
                                   2127 	.area CSEG    (CODE)
                                   2128 	.area CONST   (CODE)
      000B1D                       2129 _DevDesc:
      000B1D 12                    2130 	.db #0x12	; 18
      000B1E 01                    2131 	.db #0x01	; 1
      000B1F 10                    2132 	.db #0x10	; 16
      000B20 01                    2133 	.db #0x01	; 1
      000B21 02                    2134 	.db #0x02	; 2
      000B22 00                    2135 	.db #0x00	; 0
      000B23 00                    2136 	.db #0x00	; 0
      000B24 08                    2137 	.db #0x08	; 8
      000B25 86                    2138 	.db #0x86	; 134
      000B26 1A                    2139 	.db #0x1a	; 26
      000B27 22                    2140 	.db #0x22	; 34
      000B28 57                    2141 	.db #0x57	; 87	'W'
      000B29 00                    2142 	.db #0x00	; 0
      000B2A 01                    2143 	.db #0x01	; 1
      000B2B 01                    2144 	.db #0x01	; 1
      000B2C 02                    2145 	.db #0x02	; 2
      000B2D 03                    2146 	.db #0x03	; 3
      000B2E 01                    2147 	.db #0x01	; 1
      000B2F                       2148 _CfgDesc:
      000B2F 09                    2149 	.db #0x09	; 9
      000B30 02                    2150 	.db #0x02	; 2
      000B31 43                    2151 	.db #0x43	; 67	'C'
      000B32 00                    2152 	.db #0x00	; 0
      000B33 02                    2153 	.db #0x02	; 2
      000B34 01                    2154 	.db #0x01	; 1
      000B35 00                    2155 	.db #0x00	; 0
      000B36 A0                    2156 	.db #0xa0	; 160
      000B37 32                    2157 	.db #0x32	; 50	'2'
      000B38 09                    2158 	.db #0x09	; 9
      000B39 04                    2159 	.db #0x04	; 4
      000B3A 00                    2160 	.db #0x00	; 0
      000B3B 00                    2161 	.db #0x00	; 0
      000B3C 01                    2162 	.db #0x01	; 1
      000B3D 02                    2163 	.db #0x02	; 2
      000B3E 02                    2164 	.db #0x02	; 2
      000B3F 01                    2165 	.db #0x01	; 1
      000B40 00                    2166 	.db #0x00	; 0
      000B41 05                    2167 	.db #0x05	; 5
      000B42 24                    2168 	.db #0x24	; 36
      000B43 00                    2169 	.db #0x00	; 0
      000B44 10                    2170 	.db #0x10	; 16
      000B45 01                    2171 	.db #0x01	; 1
      000B46 05                    2172 	.db #0x05	; 5
      000B47 24                    2173 	.db #0x24	; 36
      000B48 01                    2174 	.db #0x01	; 1
      000B49 00                    2175 	.db #0x00	; 0
      000B4A 00                    2176 	.db #0x00	; 0
      000B4B 04                    2177 	.db #0x04	; 4
      000B4C 24                    2178 	.db #0x24	; 36
      000B4D 02                    2179 	.db #0x02	; 2
      000B4E 02                    2180 	.db #0x02	; 2
      000B4F 05                    2181 	.db #0x05	; 5
      000B50 24                    2182 	.db #0x24	; 36
      000B51 06                    2183 	.db #0x06	; 6
      000B52 00                    2184 	.db #0x00	; 0
      000B53 01                    2185 	.db #0x01	; 1
      000B54 07                    2186 	.db #0x07	; 7
      000B55 05                    2187 	.db #0x05	; 5
      000B56 81                    2188 	.db #0x81	; 129
      000B57 03                    2189 	.db #0x03	; 3
      000B58 08                    2190 	.db #0x08	; 8
      000B59 00                    2191 	.db #0x00	; 0
      000B5A FF                    2192 	.db #0xff	; 255
      000B5B 09                    2193 	.db #0x09	; 9
      000B5C 04                    2194 	.db #0x04	; 4
      000B5D 01                    2195 	.db #0x01	; 1
      000B5E 00                    2196 	.db #0x00	; 0
      000B5F 02                    2197 	.db #0x02	; 2
      000B60 0A                    2198 	.db #0x0a	; 10
      000B61 00                    2199 	.db #0x00	; 0
      000B62 00                    2200 	.db #0x00	; 0
      000B63 00                    2201 	.db #0x00	; 0
      000B64 07                    2202 	.db #0x07	; 7
      000B65 05                    2203 	.db #0x05	; 5
      000B66 02                    2204 	.db #0x02	; 2
      000B67 02                    2205 	.db #0x02	; 2
      000B68 40                    2206 	.db #0x40	; 64
      000B69 00                    2207 	.db #0x00	; 0
      000B6A 00                    2208 	.db #0x00	; 0
      000B6B 07                    2209 	.db #0x07	; 7
      000B6C 05                    2210 	.db #0x05	; 5
      000B6D 82                    2211 	.db #0x82	; 130
      000B6E 02                    2212 	.db #0x02	; 2
      000B6F 40                    2213 	.db #0x40	; 64
      000B70 00                    2214 	.db #0x00	; 0
      000B71 00                    2215 	.db #0x00	; 0
      000B72                       2216 _LangDes:
      000B72 04                    2217 	.db #0x04	; 4
      000B73 03                    2218 	.db #0x03	; 3
      000B74 09                    2219 	.db #0x09	; 9
      000B75 04                    2220 	.db #0x04	; 4
      000B76                       2221 _SerDes:
      000B76 14                    2222 	.db #0x14	; 20
      000B77 03                    2223 	.db #0x03	; 3
      000B78 32                    2224 	.db #0x32	; 50	'2'
      000B79 00                    2225 	.db #0x00	; 0
      000B7A 30                    2226 	.db #0x30	; 48	'0'
      000B7B 00                    2227 	.db #0x00	; 0
      000B7C 31                    2228 	.db #0x31	; 49	'1'
      000B7D 00                    2229 	.db #0x00	; 0
      000B7E 37                    2230 	.db #0x37	; 55	'7'
      000B7F 00                    2231 	.db #0x00	; 0
      000B80 2D                    2232 	.db #0x2d	; 45
      000B81 00                    2233 	.db #0x00	; 0
      000B82 32                    2234 	.db #0x32	; 50	'2'
      000B83 00                    2235 	.db #0x00	; 0
      000B84 2D                    2236 	.db #0x2d	; 45
      000B85 00                    2237 	.db #0x00	; 0
      000B86 32                    2238 	.db #0x32	; 50	'2'
      000B87 00                    2239 	.db #0x00	; 0
      000B88 35                    2240 	.db #0x35	; 53	'5'
      000B89 00                    2241 	.db #0x00	; 0
      000B8A                       2242 _Prod_Des:
      000B8A 14                    2243 	.db #0x14	; 20
      000B8B 03                    2244 	.db #0x03	; 3
      000B8C 43                    2245 	.db #0x43	; 67	'C'
      000B8D 00                    2246 	.db #0x00	; 0
      000B8E 48                    2247 	.db #0x48	; 72	'H'
      000B8F 00                    2248 	.db #0x00	; 0
      000B90 35                    2249 	.db #0x35	; 53	'5'
      000B91 00                    2250 	.db #0x00	; 0
      000B92 35                    2251 	.db #0x35	; 53	'5'
      000B93 00                    2252 	.db #0x00	; 0
      000B94 34                    2253 	.db #0x34	; 52	'4'
      000B95 00                    2254 	.db #0x00	; 0
      000B96 5F                    2255 	.db #0x5f	; 95
      000B97 00                    2256 	.db #0x00	; 0
      000B98 43                    2257 	.db #0x43	; 67	'C'
      000B99 00                    2258 	.db #0x00	; 0
      000B9A 44                    2259 	.db #0x44	; 68	'D'
      000B9B 00                    2260 	.db #0x00	; 0
      000B9C 43                    2261 	.db #0x43	; 67	'C'
      000B9D 00                    2262 	.db #0x00	; 0
      000B9E                       2263 _Manuf_Des:
      000B9E 0A                    2264 	.db #0x0a	; 10
      000B9F 03                    2265 	.db #0x03	; 3
      000BA0 5F                    2266 	.db #0x5f	; 95
      000BA1 6C                    2267 	.db #0x6c	; 108	'l'
      000BA2 CF                    2268 	.db #0xcf	; 207
      000BA3 82                    2269 	.db #0x82	; 130
      000BA4 81                    2270 	.db #0x81	; 129
      000BA5 6C                    2271 	.db #0x6c	; 108	'l'
      000BA6 52                    2272 	.db #0x52	; 82	'R'
      000BA7 60                    2273 	.db #0x60	; 96
                                   2274 	.area XINIT   (CODE)
      000BA8                       2275 __xinit__LineCoding:
      000BA8 00                    2276 	.db #0x00	; 0
      000BA9 E1                    2277 	.db #0xe1	; 225
      000BAA 00                    2278 	.db #0x00	; 0
      000BAB 00                    2279 	.db #0x00	; 0
      000BAC 00                    2280 	.db #0x00	; 0
      000BAD 00                    2281 	.db #0x00	; 0
      000BAE 08                    2282 	.db #0x08	; 8
                                   2283 	.area CABS    (ABS,CODE)
