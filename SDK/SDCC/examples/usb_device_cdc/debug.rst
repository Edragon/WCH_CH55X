                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module debug
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _UIF_BUS_RST
                                     12 	.globl _UIF_DETECT
                                     13 	.globl _UIF_TRANSFER
                                     14 	.globl _UIF_SUSPEND
                                     15 	.globl _UIF_HST_SOF
                                     16 	.globl _UIF_FIFO_OV
                                     17 	.globl _U_SIE_FREE
                                     18 	.globl _U_TOG_OK
                                     19 	.globl _U_IS_NAK
                                     20 	.globl _ADC_CHAN0
                                     21 	.globl _ADC_CHAN1
                                     22 	.globl _CMP_CHAN
                                     23 	.globl _ADC_START
                                     24 	.globl _ADC_IF
                                     25 	.globl _CMP_IF
                                     26 	.globl _CMPO
                                     27 	.globl _U1RI
                                     28 	.globl _U1TI
                                     29 	.globl _U1RB8
                                     30 	.globl _U1TB8
                                     31 	.globl _U1REN
                                     32 	.globl _U1SMOD
                                     33 	.globl _U1SM0
                                     34 	.globl _S0_R_FIFO
                                     35 	.globl _S0_T_FIFO
                                     36 	.globl _S0_FREE
                                     37 	.globl _S0_IF_BYTE
                                     38 	.globl _S0_IF_FIRST
                                     39 	.globl _S0_IF_OV
                                     40 	.globl _S0_FST_ACT
                                     41 	.globl _CP_RL2
                                     42 	.globl _C_T2
                                     43 	.globl _TR2
                                     44 	.globl _EXEN2
                                     45 	.globl _TCLK
                                     46 	.globl _RCLK
                                     47 	.globl _EXF2
                                     48 	.globl _CAP1F
                                     49 	.globl _TF2
                                     50 	.globl _RI
                                     51 	.globl _TI
                                     52 	.globl _RB8
                                     53 	.globl _TB8
                                     54 	.globl _REN
                                     55 	.globl _SM2
                                     56 	.globl _SM1
                                     57 	.globl _SM0
                                     58 	.globl _IT0
                                     59 	.globl _IE0
                                     60 	.globl _IT1
                                     61 	.globl _IE1
                                     62 	.globl _TR0
                                     63 	.globl _TF0
                                     64 	.globl _TR1
                                     65 	.globl _TF1
                                     66 	.globl _RXD
                                     67 	.globl _PWM1_
                                     68 	.globl _TXD
                                     69 	.globl _PWM2_
                                     70 	.globl _AIN3
                                     71 	.globl _VBUS1
                                     72 	.globl _INT0
                                     73 	.globl _TXD1_
                                     74 	.globl _INT1
                                     75 	.globl _T0
                                     76 	.globl _RXD1_
                                     77 	.globl _PWM2
                                     78 	.globl _T1
                                     79 	.globl _UDP
                                     80 	.globl _UDM
                                     81 	.globl _TIN0
                                     82 	.globl _CAP1
                                     83 	.globl _T2
                                     84 	.globl _AIN0
                                     85 	.globl _VBUS2
                                     86 	.globl _TIN1
                                     87 	.globl _CAP2
                                     88 	.globl _T2EX
                                     89 	.globl _RXD_
                                     90 	.globl _TXD_
                                     91 	.globl _AIN1
                                     92 	.globl _UCC1
                                     93 	.globl _TIN2
                                     94 	.globl _SCS
                                     95 	.globl _CAP1_
                                     96 	.globl _T2_
                                     97 	.globl _AIN2
                                     98 	.globl _UCC2
                                     99 	.globl _TIN3
                                    100 	.globl _PWM1
                                    101 	.globl _MOSI
                                    102 	.globl _TIN4
                                    103 	.globl _RXD1
                                    104 	.globl _MISO
                                    105 	.globl _TIN5
                                    106 	.globl _TXD1
                                    107 	.globl _SCK
                                    108 	.globl _IE_SPI0
                                    109 	.globl _IE_TKEY
                                    110 	.globl _IE_USB
                                    111 	.globl _IE_ADC
                                    112 	.globl _IE_UART1
                                    113 	.globl _IE_PWMX
                                    114 	.globl _IE_GPIO
                                    115 	.globl _IE_WDOG
                                    116 	.globl _PX0
                                    117 	.globl _PT0
                                    118 	.globl _PX1
                                    119 	.globl _PT1
                                    120 	.globl _PS
                                    121 	.globl _PT2
                                    122 	.globl _PL_FLAG
                                    123 	.globl _PH_FLAG
                                    124 	.globl _EX0
                                    125 	.globl _ET0
                                    126 	.globl _EX1
                                    127 	.globl _ET1
                                    128 	.globl _ES
                                    129 	.globl _ET2
                                    130 	.globl _E_DIS
                                    131 	.globl _EA
                                    132 	.globl _P
                                    133 	.globl _F1
                                    134 	.globl _OV
                                    135 	.globl _RS0
                                    136 	.globl _RS1
                                    137 	.globl _F0
                                    138 	.globl _AC
                                    139 	.globl _CY
                                    140 	.globl _UEP1_DMA_H
                                    141 	.globl _UEP1_DMA_L
                                    142 	.globl _UEP1_DMA
                                    143 	.globl _UEP0_DMA_H
                                    144 	.globl _UEP0_DMA_L
                                    145 	.globl _UEP0_DMA
                                    146 	.globl _UEP2_3_MOD
                                    147 	.globl _UEP4_1_MOD
                                    148 	.globl _UEP3_DMA_H
                                    149 	.globl _UEP3_DMA_L
                                    150 	.globl _UEP3_DMA
                                    151 	.globl _UEP2_DMA_H
                                    152 	.globl _UEP2_DMA_L
                                    153 	.globl _UEP2_DMA
                                    154 	.globl _USB_DEV_AD
                                    155 	.globl _USB_CTRL
                                    156 	.globl _USB_INT_EN
                                    157 	.globl _UEP4_T_LEN
                                    158 	.globl _UEP4_CTRL
                                    159 	.globl _UEP0_T_LEN
                                    160 	.globl _UEP0_CTRL
                                    161 	.globl _USB_RX_LEN
                                    162 	.globl _USB_MIS_ST
                                    163 	.globl _USB_INT_ST
                                    164 	.globl _USB_INT_FG
                                    165 	.globl _UEP3_T_LEN
                                    166 	.globl _UEP3_CTRL
                                    167 	.globl _UEP2_T_LEN
                                    168 	.globl _UEP2_CTRL
                                    169 	.globl _UEP1_T_LEN
                                    170 	.globl _UEP1_CTRL
                                    171 	.globl _UDEV_CTRL
                                    172 	.globl _USB_C_CTRL
                                    173 	.globl _TKEY_DATH
                                    174 	.globl _TKEY_DATL
                                    175 	.globl _TKEY_DAT
                                    176 	.globl _TKEY_CTRL
                                    177 	.globl _ADC_DATA
                                    178 	.globl _ADC_CFG
                                    179 	.globl _ADC_CTRL
                                    180 	.globl _SBAUD1
                                    181 	.globl _SBUF1
                                    182 	.globl _SCON1
                                    183 	.globl _SPI0_SETUP
                                    184 	.globl _SPI0_CK_SE
                                    185 	.globl _SPI0_CTRL
                                    186 	.globl _SPI0_DATA
                                    187 	.globl _SPI0_STAT
                                    188 	.globl _PWM_CK_SE
                                    189 	.globl _PWM_CTRL
                                    190 	.globl _PWM_DATA1
                                    191 	.globl _PWM_DATA2
                                    192 	.globl _T2CAP1H
                                    193 	.globl _T2CAP1L
                                    194 	.globl _T2CAP1
                                    195 	.globl _TH2
                                    196 	.globl _TL2
                                    197 	.globl _T2COUNT
                                    198 	.globl _RCAP2H
                                    199 	.globl _RCAP2L
                                    200 	.globl _RCAP2
                                    201 	.globl _T2MOD
                                    202 	.globl _T2CON
                                    203 	.globl _SBUF
                                    204 	.globl _SCON
                                    205 	.globl _TH1
                                    206 	.globl _TH0
                                    207 	.globl _TL1
                                    208 	.globl _TL0
                                    209 	.globl _TMOD
                                    210 	.globl _TCON
                                    211 	.globl _XBUS_AUX
                                    212 	.globl _PIN_FUNC
                                    213 	.globl _P3_DIR_PU
                                    214 	.globl _P3_MOD_OC
                                    215 	.globl _P3
                                    216 	.globl _P2
                                    217 	.globl _P1_DIR_PU
                                    218 	.globl _P1_MOD_OC
                                    219 	.globl _P1
                                    220 	.globl _ROM_CTRL
                                    221 	.globl _ROM_DATA_H
                                    222 	.globl _ROM_DATA_L
                                    223 	.globl _ROM_DATA
                                    224 	.globl _ROM_ADDR_H
                                    225 	.globl _ROM_ADDR_L
                                    226 	.globl _ROM_ADDR
                                    227 	.globl _GPIO_IE
                                    228 	.globl _IP_EX
                                    229 	.globl _IE_EX
                                    230 	.globl _IP
                                    231 	.globl _IE
                                    232 	.globl _WDOG_COUNT
                                    233 	.globl _RESET_KEEP
                                    234 	.globl _WAKE_CTRL
                                    235 	.globl _CLOCK_CFG
                                    236 	.globl _PCON
                                    237 	.globl _GLOBAL_CFG
                                    238 	.globl _SAFE_MOD
                                    239 	.globl _DPH
                                    240 	.globl _DPL
                                    241 	.globl _SP
                                    242 	.globl _B
                                    243 	.globl _ACC
                                    244 	.globl _PSW
                                    245 	.globl _CfgFsys
                                    246 	.globl _mDelayuS
                                    247 	.globl _mDelaymS
                                    248 	.globl _CH554UART0Alter
                                    249 	.globl _mInitSTDIO
                                    250 	.globl _CH554UART0RcvByte
                                    251 	.globl _CH554UART0SendByte
                                    252 	.globl _putchar
                                    253 	.globl _getchar
                                    254 	.globl _CH554UART1Alter
                                    255 	.globl _UART1Setup
                                    256 	.globl _CH554UART1RcvByte
                                    257 	.globl _CH554UART1SendByte
                                    258 	.globl _CH554WDTModeSelect
                                    259 	.globl _CH554WDTFeed
                                    260 ;--------------------------------------------------------
                                    261 ; special function registers
                                    262 ;--------------------------------------------------------
                                    263 	.area RSEG    (ABS,DATA)
      000000                        264 	.org 0x0000
                           0000D0   265 _PSW	=	0x00d0
                           0000E0   266 _ACC	=	0x00e0
                           0000F0   267 _B	=	0x00f0
                           000081   268 _SP	=	0x0081
                           000082   269 _DPL	=	0x0082
                           000083   270 _DPH	=	0x0083
                           0000A1   271 _SAFE_MOD	=	0x00a1
                           0000B1   272 _GLOBAL_CFG	=	0x00b1
                           000087   273 _PCON	=	0x0087
                           0000B9   274 _CLOCK_CFG	=	0x00b9
                           0000A9   275 _WAKE_CTRL	=	0x00a9
                           0000FE   276 _RESET_KEEP	=	0x00fe
                           0000FF   277 _WDOG_COUNT	=	0x00ff
                           0000A8   278 _IE	=	0x00a8
                           0000B8   279 _IP	=	0x00b8
                           0000E8   280 _IE_EX	=	0x00e8
                           0000E9   281 _IP_EX	=	0x00e9
                           0000C7   282 _GPIO_IE	=	0x00c7
                           008584   283 _ROM_ADDR	=	0x8584
                           000084   284 _ROM_ADDR_L	=	0x0084
                           000085   285 _ROM_ADDR_H	=	0x0085
                           008F8E   286 _ROM_DATA	=	0x8f8e
                           00008E   287 _ROM_DATA_L	=	0x008e
                           00008F   288 _ROM_DATA_H	=	0x008f
                           000086   289 _ROM_CTRL	=	0x0086
                           000090   290 _P1	=	0x0090
                           000092   291 _P1_MOD_OC	=	0x0092
                           000093   292 _P1_DIR_PU	=	0x0093
                           0000A0   293 _P2	=	0x00a0
                           0000B0   294 _P3	=	0x00b0
                           000096   295 _P3_MOD_OC	=	0x0096
                           000097   296 _P3_DIR_PU	=	0x0097
                           0000C6   297 _PIN_FUNC	=	0x00c6
                           0000A2   298 _XBUS_AUX	=	0x00a2
                           000088   299 _TCON	=	0x0088
                           000089   300 _TMOD	=	0x0089
                           00008A   301 _TL0	=	0x008a
                           00008B   302 _TL1	=	0x008b
                           00008C   303 _TH0	=	0x008c
                           00008D   304 _TH1	=	0x008d
                           000098   305 _SCON	=	0x0098
                           000099   306 _SBUF	=	0x0099
                           0000C8   307 _T2CON	=	0x00c8
                           0000C9   308 _T2MOD	=	0x00c9
                           00CBCA   309 _RCAP2	=	0xcbca
                           0000CA   310 _RCAP2L	=	0x00ca
                           0000CB   311 _RCAP2H	=	0x00cb
                           00CDCC   312 _T2COUNT	=	0xcdcc
                           0000CC   313 _TL2	=	0x00cc
                           0000CD   314 _TH2	=	0x00cd
                           00CFCE   315 _T2CAP1	=	0xcfce
                           0000CE   316 _T2CAP1L	=	0x00ce
                           0000CF   317 _T2CAP1H	=	0x00cf
                           00009B   318 _PWM_DATA2	=	0x009b
                           00009C   319 _PWM_DATA1	=	0x009c
                           00009D   320 _PWM_CTRL	=	0x009d
                           00009E   321 _PWM_CK_SE	=	0x009e
                           0000F8   322 _SPI0_STAT	=	0x00f8
                           0000F9   323 _SPI0_DATA	=	0x00f9
                           0000FA   324 _SPI0_CTRL	=	0x00fa
                           0000FB   325 _SPI0_CK_SE	=	0x00fb
                           0000FC   326 _SPI0_SETUP	=	0x00fc
                           0000C0   327 _SCON1	=	0x00c0
                           0000C1   328 _SBUF1	=	0x00c1
                           0000C2   329 _SBAUD1	=	0x00c2
                           000080   330 _ADC_CTRL	=	0x0080
                           00009A   331 _ADC_CFG	=	0x009a
                           00009F   332 _ADC_DATA	=	0x009f
                           0000C3   333 _TKEY_CTRL	=	0x00c3
                           00C5C4   334 _TKEY_DAT	=	0xc5c4
                           0000C4   335 _TKEY_DATL	=	0x00c4
                           0000C5   336 _TKEY_DATH	=	0x00c5
                           000091   337 _USB_C_CTRL	=	0x0091
                           0000D1   338 _UDEV_CTRL	=	0x00d1
                           0000D2   339 _UEP1_CTRL	=	0x00d2
                           0000D3   340 _UEP1_T_LEN	=	0x00d3
                           0000D4   341 _UEP2_CTRL	=	0x00d4
                           0000D5   342 _UEP2_T_LEN	=	0x00d5
                           0000D6   343 _UEP3_CTRL	=	0x00d6
                           0000D7   344 _UEP3_T_LEN	=	0x00d7
                           0000D8   345 _USB_INT_FG	=	0x00d8
                           0000D9   346 _USB_INT_ST	=	0x00d9
                           0000DA   347 _USB_MIS_ST	=	0x00da
                           0000DB   348 _USB_RX_LEN	=	0x00db
                           0000DC   349 _UEP0_CTRL	=	0x00dc
                           0000DD   350 _UEP0_T_LEN	=	0x00dd
                           0000DE   351 _UEP4_CTRL	=	0x00de
                           0000DF   352 _UEP4_T_LEN	=	0x00df
                           0000E1   353 _USB_INT_EN	=	0x00e1
                           0000E2   354 _USB_CTRL	=	0x00e2
                           0000E3   355 _USB_DEV_AD	=	0x00e3
                           00E5E4   356 _UEP2_DMA	=	0xe5e4
                           0000E4   357 _UEP2_DMA_L	=	0x00e4
                           0000E5   358 _UEP2_DMA_H	=	0x00e5
                           00E7E6   359 _UEP3_DMA	=	0xe7e6
                           0000E6   360 _UEP3_DMA_L	=	0x00e6
                           0000E7   361 _UEP3_DMA_H	=	0x00e7
                           0000EA   362 _UEP4_1_MOD	=	0x00ea
                           0000EB   363 _UEP2_3_MOD	=	0x00eb
                           00EDEC   364 _UEP0_DMA	=	0xedec
                           0000EC   365 _UEP0_DMA_L	=	0x00ec
                           0000ED   366 _UEP0_DMA_H	=	0x00ed
                           00EFEE   367 _UEP1_DMA	=	0xefee
                           0000EE   368 _UEP1_DMA_L	=	0x00ee
                           0000EF   369 _UEP1_DMA_H	=	0x00ef
                                    370 ;--------------------------------------------------------
                                    371 ; special function bits
                                    372 ;--------------------------------------------------------
                                    373 	.area RSEG    (ABS,DATA)
      000000                        374 	.org 0x0000
                           0000D7   375 _CY	=	0x00d7
                           0000D6   376 _AC	=	0x00d6
                           0000D5   377 _F0	=	0x00d5
                           0000D4   378 _RS1	=	0x00d4
                           0000D3   379 _RS0	=	0x00d3
                           0000D2   380 _OV	=	0x00d2
                           0000D1   381 _F1	=	0x00d1
                           0000D0   382 _P	=	0x00d0
                           0000AF   383 _EA	=	0x00af
                           0000AE   384 _E_DIS	=	0x00ae
                           0000AD   385 _ET2	=	0x00ad
                           0000AC   386 _ES	=	0x00ac
                           0000AB   387 _ET1	=	0x00ab
                           0000AA   388 _EX1	=	0x00aa
                           0000A9   389 _ET0	=	0x00a9
                           0000A8   390 _EX0	=	0x00a8
                           0000BF   391 _PH_FLAG	=	0x00bf
                           0000BE   392 _PL_FLAG	=	0x00be
                           0000BD   393 _PT2	=	0x00bd
                           0000BC   394 _PS	=	0x00bc
                           0000BB   395 _PT1	=	0x00bb
                           0000BA   396 _PX1	=	0x00ba
                           0000B9   397 _PT0	=	0x00b9
                           0000B8   398 _PX0	=	0x00b8
                           0000EF   399 _IE_WDOG	=	0x00ef
                           0000EE   400 _IE_GPIO	=	0x00ee
                           0000ED   401 _IE_PWMX	=	0x00ed
                           0000EC   402 _IE_UART1	=	0x00ec
                           0000EB   403 _IE_ADC	=	0x00eb
                           0000EA   404 _IE_USB	=	0x00ea
                           0000E9   405 _IE_TKEY	=	0x00e9
                           0000E8   406 _IE_SPI0	=	0x00e8
                           000097   407 _SCK	=	0x0097
                           000097   408 _TXD1	=	0x0097
                           000097   409 _TIN5	=	0x0097
                           000096   410 _MISO	=	0x0096
                           000096   411 _RXD1	=	0x0096
                           000096   412 _TIN4	=	0x0096
                           000095   413 _MOSI	=	0x0095
                           000095   414 _PWM1	=	0x0095
                           000095   415 _TIN3	=	0x0095
                           000095   416 _UCC2	=	0x0095
                           000095   417 _AIN2	=	0x0095
                           000094   418 _T2_	=	0x0094
                           000094   419 _CAP1_	=	0x0094
                           000094   420 _SCS	=	0x0094
                           000094   421 _TIN2	=	0x0094
                           000094   422 _UCC1	=	0x0094
                           000094   423 _AIN1	=	0x0094
                           000093   424 _TXD_	=	0x0093
                           000092   425 _RXD_	=	0x0092
                           000091   426 _T2EX	=	0x0091
                           000091   427 _CAP2	=	0x0091
                           000091   428 _TIN1	=	0x0091
                           000091   429 _VBUS2	=	0x0091
                           000091   430 _AIN0	=	0x0091
                           000090   431 _T2	=	0x0090
                           000090   432 _CAP1	=	0x0090
                           000090   433 _TIN0	=	0x0090
                           0000B7   434 _UDM	=	0x00b7
                           0000B6   435 _UDP	=	0x00b6
                           0000B5   436 _T1	=	0x00b5
                           0000B4   437 _PWM2	=	0x00b4
                           0000B4   438 _RXD1_	=	0x00b4
                           0000B4   439 _T0	=	0x00b4
                           0000B3   440 _INT1	=	0x00b3
                           0000B2   441 _TXD1_	=	0x00b2
                           0000B2   442 _INT0	=	0x00b2
                           0000B2   443 _VBUS1	=	0x00b2
                           0000B2   444 _AIN3	=	0x00b2
                           0000B1   445 _PWM2_	=	0x00b1
                           0000B1   446 _TXD	=	0x00b1
                           0000B0   447 _PWM1_	=	0x00b0
                           0000B0   448 _RXD	=	0x00b0
                           00008F   449 _TF1	=	0x008f
                           00008E   450 _TR1	=	0x008e
                           00008D   451 _TF0	=	0x008d
                           00008C   452 _TR0	=	0x008c
                           00008B   453 _IE1	=	0x008b
                           00008A   454 _IT1	=	0x008a
                           000089   455 _IE0	=	0x0089
                           000088   456 _IT0	=	0x0088
                           00009F   457 _SM0	=	0x009f
                           00009E   458 _SM1	=	0x009e
                           00009D   459 _SM2	=	0x009d
                           00009C   460 _REN	=	0x009c
                           00009B   461 _TB8	=	0x009b
                           00009A   462 _RB8	=	0x009a
                           000099   463 _TI	=	0x0099
                           000098   464 _RI	=	0x0098
                           0000CF   465 _TF2	=	0x00cf
                           0000CF   466 _CAP1F	=	0x00cf
                           0000CE   467 _EXF2	=	0x00ce
                           0000CD   468 _RCLK	=	0x00cd
                           0000CC   469 _TCLK	=	0x00cc
                           0000CB   470 _EXEN2	=	0x00cb
                           0000CA   471 _TR2	=	0x00ca
                           0000C9   472 _C_T2	=	0x00c9
                           0000C8   473 _CP_RL2	=	0x00c8
                           0000FF   474 _S0_FST_ACT	=	0x00ff
                           0000FE   475 _S0_IF_OV	=	0x00fe
                           0000FD   476 _S0_IF_FIRST	=	0x00fd
                           0000FC   477 _S0_IF_BYTE	=	0x00fc
                           0000FB   478 _S0_FREE	=	0x00fb
                           0000FA   479 _S0_T_FIFO	=	0x00fa
                           0000F8   480 _S0_R_FIFO	=	0x00f8
                           0000C7   481 _U1SM0	=	0x00c7
                           0000C5   482 _U1SMOD	=	0x00c5
                           0000C4   483 _U1REN	=	0x00c4
                           0000C3   484 _U1TB8	=	0x00c3
                           0000C2   485 _U1RB8	=	0x00c2
                           0000C1   486 _U1TI	=	0x00c1
                           0000C0   487 _U1RI	=	0x00c0
                           000087   488 _CMPO	=	0x0087
                           000086   489 _CMP_IF	=	0x0086
                           000085   490 _ADC_IF	=	0x0085
                           000084   491 _ADC_START	=	0x0084
                           000083   492 _CMP_CHAN	=	0x0083
                           000081   493 _ADC_CHAN1	=	0x0081
                           000080   494 _ADC_CHAN0	=	0x0080
                           0000DF   495 _U_IS_NAK	=	0x00df
                           0000DE   496 _U_TOG_OK	=	0x00de
                           0000DD   497 _U_SIE_FREE	=	0x00dd
                           0000DC   498 _UIF_FIFO_OV	=	0x00dc
                           0000DB   499 _UIF_HST_SOF	=	0x00db
                           0000DA   500 _UIF_SUSPEND	=	0x00da
                           0000D9   501 _UIF_TRANSFER	=	0x00d9
                           0000D8   502 _UIF_DETECT	=	0x00d8
                           0000D8   503 _UIF_BUS_RST	=	0x00d8
                                    504 ;--------------------------------------------------------
                                    505 ; overlayable register banks
                                    506 ;--------------------------------------------------------
                                    507 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        508 	.ds 8
                                    509 ;--------------------------------------------------------
                                    510 ; internal ram data
                                    511 ;--------------------------------------------------------
                                    512 	.area DSEG    (DATA)
      000021                        513 _mInitSTDIO_x_65536_17:
      000021                        514 	.ds 4
      000025                        515 _mInitSTDIO_x2_65536_17:
      000025                        516 	.ds 1
                                    517 ;--------------------------------------------------------
                                    518 ; overlayable items in internal ram 
                                    519 ;--------------------------------------------------------
                                    520 	.area	OSEG    (OVR,DATA)
                                    521 	.area	OSEG    (OVR,DATA)
                                    522 	.area	OSEG    (OVR,DATA)
                                    523 	.area	OSEG    (OVR,DATA)
                                    524 	.area	OSEG    (OVR,DATA)
                                    525 	.area	OSEG    (OVR,DATA)
                                    526 ;--------------------------------------------------------
                                    527 ; indirectly addressable internal ram data
                                    528 ;--------------------------------------------------------
                                    529 	.area ISEG    (DATA)
                                    530 ;--------------------------------------------------------
                                    531 ; absolute internal ram data
                                    532 ;--------------------------------------------------------
                                    533 	.area IABS    (ABS,DATA)
                                    534 	.area IABS    (ABS,DATA)
                                    535 ;--------------------------------------------------------
                                    536 ; bit data
                                    537 ;--------------------------------------------------------
                                    538 	.area BSEG    (BIT)
                                    539 ;--------------------------------------------------------
                                    540 ; paged external ram data
                                    541 ;--------------------------------------------------------
                                    542 	.area PSEG    (PAG,XDATA)
                                    543 ;--------------------------------------------------------
                                    544 ; external ram data
                                    545 ;--------------------------------------------------------
                                    546 	.area XSEG    (XDATA)
                                    547 ;--------------------------------------------------------
                                    548 ; absolute external ram data
                                    549 ;--------------------------------------------------------
                                    550 	.area XABS    (ABS,XDATA)
                                    551 ;--------------------------------------------------------
                                    552 ; external initialized ram data
                                    553 ;--------------------------------------------------------
                                    554 	.area XISEG   (XDATA)
                                    555 	.area HOME    (CODE)
                                    556 	.area GSINIT0 (CODE)
                                    557 	.area GSINIT1 (CODE)
                                    558 	.area GSINIT2 (CODE)
                                    559 	.area GSINIT3 (CODE)
                                    560 	.area GSINIT4 (CODE)
                                    561 	.area GSINIT5 (CODE)
                                    562 	.area GSINIT  (CODE)
                                    563 	.area GSFINAL (CODE)
                                    564 	.area CSEG    (CODE)
                                    565 ;--------------------------------------------------------
                                    566 ; global & static initialisations
                                    567 ;--------------------------------------------------------
                                    568 	.area HOME    (CODE)
                                    569 	.area GSINIT  (CODE)
                                    570 	.area GSFINAL (CODE)
                                    571 	.area GSINIT  (CODE)
                                    572 ;--------------------------------------------------------
                                    573 ; Home
                                    574 ;--------------------------------------------------------
                                    575 	.area HOME    (CODE)
                                    576 	.area HOME    (CODE)
                                    577 ;--------------------------------------------------------
                                    578 ; code
                                    579 ;--------------------------------------------------------
                                    580 	.area CSEG    (CODE)
                                    581 ;------------------------------------------------------------
                                    582 ;Allocation info for local variables in function 'CfgFsys'
                                    583 ;------------------------------------------------------------
                                    584 ;	../../include/debug.c:27: void	CfgFsys( )  
                                    585 ;	-----------------------------------------
                                    586 ;	 function CfgFsys
                                    587 ;	-----------------------------------------
      00085F                        588 _CfgFsys:
                           000007   589 	ar7 = 0x07
                           000006   590 	ar6 = 0x06
                           000005   591 	ar5 = 0x05
                           000004   592 	ar4 = 0x04
                           000003   593 	ar3 = 0x03
                           000002   594 	ar2 = 0x02
                           000001   595 	ar1 = 0x01
                           000000   596 	ar0 = 0x00
                                    597 ;	../../include/debug.c:34: SAFE_MOD = 0x55;
      00085F 75 A1 55         [24]  598 	mov	_SAFE_MOD,#0x55
                                    599 ;	../../include/debug.c:35: SAFE_MOD = 0xAA;
      000862 75 A1 AA         [24]  600 	mov	_SAFE_MOD,#0xaa
                                    601 ;	../../include/debug.c:42: CLOCK_CFG = CLOCK_CFG & ~ MASK_SYS_CK_SEL | 0x05;  // 16MHz	
      000865 74 F8            [12]  602 	mov	a,#0xf8
      000867 55 B9            [12]  603 	anl	a,_CLOCK_CFG
      000869 44 05            [12]  604 	orl	a,#0x05
      00086B F5 B9            [12]  605 	mov	_CLOCK_CFG,a
                                    606 ;	../../include/debug.c:57: SAFE_MOD = 0x00;
      00086D 75 A1 00         [24]  607 	mov	_SAFE_MOD,#0x00
                                    608 ;	../../include/debug.c:58: }
      000870 22               [24]  609 	ret
                                    610 ;------------------------------------------------------------
                                    611 ;Allocation info for local variables in function 'mDelayuS'
                                    612 ;------------------------------------------------------------
                                    613 ;n                         Allocated to registers 
                                    614 ;------------------------------------------------------------
                                    615 ;	../../include/debug.c:69: void	mDelayuS( uint16_t n )  // ???uS???????????????
                                    616 ;	-----------------------------------------
                                    617 ;	 function mDelayuS
                                    618 ;	-----------------------------------------
      000871                        619 _mDelayuS:
      000871 AE 82            [24]  620 	mov	r6,dpl
      000873 AF 83            [24]  621 	mov	r7,dph
                                    622 ;	../../include/debug.c:82: while ( n ) {  // total = 12~13 Fsys cycles, 1uS @Fsys=12MHz
      000875                        623 00101$:
      000875 EE               [12]  624 	mov	a,r6
      000876 4F               [12]  625 	orl	a,r7
      000877 60 0D            [24]  626 	jz	00104$
                                    627 ;	../../include/debug.c:83: ++ SAFE_MOD;  // 2 Fsys cycles, for higher Fsys, add operation here
      000879 05 A1            [12]  628 	inc	_SAFE_MOD
                                    629 ;	../../include/debug.c:86: ++ SAFE_MOD;
      00087B 05 A1            [12]  630 	inc	_SAFE_MOD
                                    631 ;	../../include/debug.c:89: ++ SAFE_MOD;
      00087D 05 A1            [12]  632 	inc	_SAFE_MOD
                                    633 ;	../../include/debug.c:116: -- n;
      00087F 1E               [12]  634 	dec	r6
      000880 BE FF 01         [24]  635 	cjne	r6,#0xff,00116$
      000883 1F               [12]  636 	dec	r7
      000884                        637 00116$:
      000884 80 EF            [24]  638 	sjmp	00101$
      000886                        639 00104$:
                                    640 ;	../../include/debug.c:118: }
      000886 22               [24]  641 	ret
                                    642 ;------------------------------------------------------------
                                    643 ;Allocation info for local variables in function 'mDelaymS'
                                    644 ;------------------------------------------------------------
                                    645 ;n                         Allocated to registers 
                                    646 ;------------------------------------------------------------
                                    647 ;	../../include/debug.c:127: void	mDelaymS( uint16_t n )                                                  // ???mS???????????????
                                    648 ;	-----------------------------------------
                                    649 ;	 function mDelaymS
                                    650 ;	-----------------------------------------
      000887                        651 _mDelaymS:
      000887 AE 82            [24]  652 	mov	r6,dpl
      000889 AF 83            [24]  653 	mov	r7,dph
                                    654 ;	../../include/debug.c:129: while ( n ) {
      00088B                        655 00101$:
      00088B EE               [12]  656 	mov	a,r6
      00088C 4F               [12]  657 	orl	a,r7
      00088D 60 15            [24]  658 	jz	00104$
                                    659 ;	../../include/debug.c:134: mDelayuS( 1000 );
      00088F 90 03 E8         [24]  660 	mov	dptr,#0x03e8
      000892 C0 07            [24]  661 	push	ar7
      000894 C0 06            [24]  662 	push	ar6
      000896 12 08 71         [24]  663 	lcall	_mDelayuS
      000899 D0 06            [24]  664 	pop	ar6
      00089B D0 07            [24]  665 	pop	ar7
                                    666 ;	../../include/debug.c:136: -- n;
      00089D 1E               [12]  667 	dec	r6
      00089E BE FF 01         [24]  668 	cjne	r6,#0xff,00116$
      0008A1 1F               [12]  669 	dec	r7
      0008A2                        670 00116$:
      0008A2 80 E7            [24]  671 	sjmp	00101$
      0008A4                        672 00104$:
                                    673 ;	../../include/debug.c:138: }                                         
      0008A4 22               [24]  674 	ret
                                    675 ;------------------------------------------------------------
                                    676 ;Allocation info for local variables in function 'CH554UART0Alter'
                                    677 ;------------------------------------------------------------
                                    678 ;	../../include/debug.c:147: void CH554UART0Alter()
                                    679 ;	-----------------------------------------
                                    680 ;	 function CH554UART0Alter
                                    681 ;	-----------------------------------------
      0008A5                        682 _CH554UART0Alter:
                                    683 ;	../../include/debug.c:149: PIN_FUNC |= bUART0_PIN_X;                                                  //???????????????P1.2???P1.3
      0008A5 43 C6 10         [24]  684 	orl	_PIN_FUNC,#0x10
                                    685 ;	../../include/debug.c:150: }
      0008A8 22               [24]  686 	ret
                                    687 ;------------------------------------------------------------
                                    688 ;Allocation info for local variables in function 'mInitSTDIO'
                                    689 ;------------------------------------------------------------
                                    690 ;x                         Allocated with name '_mInitSTDIO_x_65536_17'
                                    691 ;x2                        Allocated with name '_mInitSTDIO_x2_65536_17'
                                    692 ;------------------------------------------------------------
                                    693 ;	../../include/debug.c:161: void	mInitSTDIO( )
                                    694 ;	-----------------------------------------
                                    695 ;	 function mInitSTDIO
                                    696 ;	-----------------------------------------
      0008A9                        697 _mInitSTDIO:
                                    698 ;	../../include/debug.c:166: SM0 = 0;
                                    699 ;	assignBit
      0008A9 C2 9F            [12]  700 	clr	_SM0
                                    701 ;	../../include/debug.c:167: SM1 = 1;
                                    702 ;	assignBit
      0008AB D2 9E            [12]  703 	setb	_SM1
                                    704 ;	../../include/debug.c:168: SM2 = 0;                                                                   //??????0????????????1
                                    705 ;	assignBit
      0008AD C2 9D            [12]  706 	clr	_SM2
                                    707 ;	../../include/debug.c:170: RCLK = 0;                                                                  //UART0????????????
                                    708 ;	assignBit
      0008AF C2 CD            [12]  709 	clr	_RCLK
                                    710 ;	../../include/debug.c:171: TCLK = 0;                                                                  //UART0????????????
                                    711 ;	assignBit
      0008B1 C2 CC            [12]  712 	clr	_TCLK
                                    713 ;	../../include/debug.c:172: PCON |= SMOD;
      0008B3 43 87 80         [24]  714 	orl	_PCON,#0x80
                                    715 ;	../../include/debug.c:173: x = 10 * FREQ_SYS / UART0_BAUD / 16;                                       //???????????????????????????x??????????????????
      0008B6 75 21 11         [24]  716 	mov	_mInitSTDIO_x_65536_17,#0x11
      0008B9 75 22 04         [24]  717 	mov	(_mInitSTDIO_x_65536_17 + 1),#0x04
      0008BC E4               [12]  718 	clr	a
      0008BD F5 23            [12]  719 	mov	(_mInitSTDIO_x_65536_17 + 2),a
      0008BF F5 24            [12]  720 	mov	(_mInitSTDIO_x_65536_17 + 3),a
                                    721 ;	../../include/debug.c:174: x2 = x % 10;
      0008C1 75 26 0A         [24]  722 	mov	__modulong_PARM_2,#0x0a
      0008C4 F5 27            [12]  723 	mov	(__modulong_PARM_2 + 1),a
      0008C6 F5 28            [12]  724 	mov	(__modulong_PARM_2 + 2),a
      0008C8 F5 29            [12]  725 	mov	(__modulong_PARM_2 + 3),a
      0008CA 85 21 82         [24]  726 	mov	dpl,_mInitSTDIO_x_65536_17
      0008CD 85 22 83         [24]  727 	mov	dph,(_mInitSTDIO_x_65536_17 + 1)
      0008D0 85 23 F0         [24]  728 	mov	b,(_mInitSTDIO_x_65536_17 + 2)
      0008D3 E5 24            [12]  729 	mov	a,(_mInitSTDIO_x_65536_17 + 3)
      0008D5 12 09 A5         [24]  730 	lcall	__modulong
      0008D8 AC 82            [24]  731 	mov	r4,dpl
      0008DA 8C 25            [24]  732 	mov	_mInitSTDIO_x2_65536_17,r4
                                    733 ;	../../include/debug.c:175: x /= 10;
      0008DC 75 26 0A         [24]  734 	mov	__divulong_PARM_2,#0x0a
      0008DF E4               [12]  735 	clr	a
      0008E0 F5 27            [12]  736 	mov	(__divulong_PARM_2 + 1),a
      0008E2 F5 28            [12]  737 	mov	(__divulong_PARM_2 + 2),a
      0008E4 F5 29            [12]  738 	mov	(__divulong_PARM_2 + 3),a
      0008E6 85 21 82         [24]  739 	mov	dpl,_mInitSTDIO_x_65536_17
      0008E9 85 22 83         [24]  740 	mov	dph,(_mInitSTDIO_x_65536_17 + 1)
      0008EC 85 23 F0         [24]  741 	mov	b,(_mInitSTDIO_x_65536_17 + 2)
      0008EF E5 24            [12]  742 	mov	a,(_mInitSTDIO_x_65536_17 + 3)
      0008F1 12 0A 28         [24]  743 	lcall	__divulong
      0008F4 85 82 21         [24]  744 	mov	_mInitSTDIO_x_65536_17,dpl
      0008F7 85 83 22         [24]  745 	mov	(_mInitSTDIO_x_65536_17 + 1),dph
      0008FA 85 F0 23         [24]  746 	mov	(_mInitSTDIO_x_65536_17 + 2),b
      0008FD F5 24            [12]  747 	mov	(_mInitSTDIO_x_65536_17 + 3),a
                                    748 ;	../../include/debug.c:176: if ( x2 >= 5 ) x ++;                                                       //????????????
      0008FF 74 FB            [12]  749 	mov	a,#0x100 - 0x05
      000901 25 25            [12]  750 	add	a,_mInitSTDIO_x2_65536_17
      000903 50 19            [24]  751 	jnc	00102$
      000905 AC 21            [24]  752 	mov	r4,_mInitSTDIO_x_65536_17
      000907 AD 22            [24]  753 	mov	r5,(_mInitSTDIO_x_65536_17 + 1)
      000909 AE 23            [24]  754 	mov	r6,(_mInitSTDIO_x_65536_17 + 2)
      00090B AF 24            [24]  755 	mov	r7,(_mInitSTDIO_x_65536_17 + 3)
      00090D 74 01            [12]  756 	mov	a,#0x01
      00090F 2C               [12]  757 	add	a,r4
      000910 F5 21            [12]  758 	mov	_mInitSTDIO_x_65536_17,a
      000912 E4               [12]  759 	clr	a
      000913 3D               [12]  760 	addc	a,r5
      000914 F5 22            [12]  761 	mov	(_mInitSTDIO_x_65536_17 + 1),a
      000916 E4               [12]  762 	clr	a
      000917 3E               [12]  763 	addc	a,r6
      000918 F5 23            [12]  764 	mov	(_mInitSTDIO_x_65536_17 + 2),a
      00091A E4               [12]  765 	clr	a
      00091B 3F               [12]  766 	addc	a,r7
      00091C F5 24            [12]  767 	mov	(_mInitSTDIO_x_65536_17 + 3),a
      00091E                        768 00102$:
                                    769 ;	../../include/debug.c:178: TMOD = TMOD & ~ bT1_GATE & ~ bT1_CT & ~ MASK_T1_MOD | bT1_M1;              //0X20???Timer1??????8????????????????????????
      00091E 74 0F            [12]  770 	mov	a,#0x0f
      000920 55 89            [12]  771 	anl	a,_TMOD
      000922 44 20            [12]  772 	orl	a,#0x20
      000924 F5 89            [12]  773 	mov	_TMOD,a
                                    774 ;	../../include/debug.c:179: T2MOD = T2MOD | bTMR_CLK | bT1_CLK;                                        //Timer1????????????
      000926 43 C9 A0         [24]  775 	orl	_T2MOD,#0xa0
                                    776 ;	../../include/debug.c:180: TH1 = 0-x;                                                                 //12MHz??????,buad/12???????????????????????????
      000929 AF 21            [24]  777 	mov	r7,_mInitSTDIO_x_65536_17
      00092B C3               [12]  778 	clr	c
      00092C E4               [12]  779 	clr	a
      00092D 9F               [12]  780 	subb	a,r7
      00092E F5 8D            [12]  781 	mov	_TH1,a
                                    782 ;	../../include/debug.c:181: TR1 = 1;                                                                   //???????????????1
                                    783 ;	assignBit
      000930 D2 8E            [12]  784 	setb	_TR1
                                    785 ;	../../include/debug.c:182: TI = 1;
                                    786 ;	assignBit
      000932 D2 99            [12]  787 	setb	_TI
                                    788 ;	../../include/debug.c:183: REN = 1;                                                                   //??????0????????????
                                    789 ;	assignBit
      000934 D2 9C            [12]  790 	setb	_REN
                                    791 ;	../../include/debug.c:184: }
      000936 22               [24]  792 	ret
                                    793 ;------------------------------------------------------------
                                    794 ;Allocation info for local variables in function 'CH554UART0RcvByte'
                                    795 ;------------------------------------------------------------
                                    796 ;	../../include/debug.c:193: uint8_t  CH554UART0RcvByte( )
                                    797 ;	-----------------------------------------
                                    798 ;	 function CH554UART0RcvByte
                                    799 ;	-----------------------------------------
      000937                        800 _CH554UART0RcvByte:
                                    801 ;	../../include/debug.c:195: while(RI == 0);                                                            //????????????????????????????????????
      000937                        802 00101$:
                                    803 ;	../../include/debug.c:196: RI = 0;
                                    804 ;	assignBit
      000937 10 98 02         [24]  805 	jbc	_RI,00114$
      00093A 80 FB            [24]  806 	sjmp	00101$
      00093C                        807 00114$:
                                    808 ;	../../include/debug.c:197: return SBUF;
      00093C 85 99 82         [24]  809 	mov	dpl,_SBUF
                                    810 ;	../../include/debug.c:198: }
      00093F 22               [24]  811 	ret
                                    812 ;------------------------------------------------------------
                                    813 ;Allocation info for local variables in function 'CH554UART0SendByte'
                                    814 ;------------------------------------------------------------
                                    815 ;SendDat                   Allocated to registers 
                                    816 ;------------------------------------------------------------
                                    817 ;	../../include/debug.c:207: void CH554UART0SendByte(uint8_t SendDat)
                                    818 ;	-----------------------------------------
                                    819 ;	 function CH554UART0SendByte
                                    820 ;	-----------------------------------------
      000940                        821 _CH554UART0SendByte:
      000940 85 82 99         [24]  822 	mov	_SBUF,dpl
                                    823 ;	../../include/debug.c:210: while(TI ==0);
      000943                        824 00101$:
                                    825 ;	../../include/debug.c:211: TI = 0;
                                    826 ;	assignBit
      000943 10 99 02         [24]  827 	jbc	_TI,00114$
      000946 80 FB            [24]  828 	sjmp	00101$
      000948                        829 00114$:
                                    830 ;	../../include/debug.c:212: }
      000948 22               [24]  831 	ret
                                    832 ;------------------------------------------------------------
                                    833 ;Allocation info for local variables in function 'putchar'
                                    834 ;------------------------------------------------------------
                                    835 ;c                         Allocated to registers r6 r7 
                                    836 ;------------------------------------------------------------
                                    837 ;	../../include/debug.c:229: int putchar(int c)
                                    838 ;	-----------------------------------------
                                    839 ;	 function putchar
                                    840 ;	-----------------------------------------
      000949                        841 _putchar:
      000949 AE 82            [24]  842 	mov	r6,dpl
      00094B AF 83            [24]  843 	mov	r7,dph
                                    844 ;	../../include/debug.c:231: while (!TI) /* assumes UART is initialized */
      00094D                        845 00101$:
                                    846 ;	../../include/debug.c:233: TI = 0;
                                    847 ;	assignBit
      00094D 10 99 02         [24]  848 	jbc	_TI,00114$
      000950 80 FB            [24]  849 	sjmp	00101$
      000952                        850 00114$:
                                    851 ;	../../include/debug.c:234: SBUF = c & 0xFF;
      000952 8E 99            [24]  852 	mov	_SBUF,r6
                                    853 ;	../../include/debug.c:236: return c;
      000954 8E 82            [24]  854 	mov	dpl,r6
      000956 8F 83            [24]  855 	mov	dph,r7
                                    856 ;	../../include/debug.c:237: }
      000958 22               [24]  857 	ret
                                    858 ;------------------------------------------------------------
                                    859 ;Allocation info for local variables in function 'getchar'
                                    860 ;------------------------------------------------------------
                                    861 ;	../../include/debug.c:239: int getchar() {
                                    862 ;	-----------------------------------------
                                    863 ;	 function getchar
                                    864 ;	-----------------------------------------
      000959                        865 _getchar:
                                    866 ;	../../include/debug.c:240: while(!RI); /* assumes UART is initialized */
      000959                        867 00101$:
                                    868 ;	../../include/debug.c:241: RI = 0;
                                    869 ;	assignBit
      000959 10 98 02         [24]  870 	jbc	_RI,00114$
      00095C 80 FB            [24]  871 	sjmp	00101$
      00095E                        872 00114$:
                                    873 ;	../../include/debug.c:242: return SBUF;
      00095E AE 99            [24]  874 	mov	r6,_SBUF
      000960 7F 00            [12]  875 	mov	r7,#0x00
      000962 8E 82            [24]  876 	mov	dpl,r6
      000964 8F 83            [24]  877 	mov	dph,r7
                                    878 ;	../../include/debug.c:243: }
      000966 22               [24]  879 	ret
                                    880 ;------------------------------------------------------------
                                    881 ;Allocation info for local variables in function 'CH554UART1Alter'
                                    882 ;------------------------------------------------------------
                                    883 ;	../../include/debug.c:253: void CH554UART1Alter()
                                    884 ;	-----------------------------------------
                                    885 ;	 function CH554UART1Alter
                                    886 ;	-----------------------------------------
      000967                        887 _CH554UART1Alter:
                                    888 ;	../../include/debug.c:255: PIN_FUNC |= bUART1_PIN_X;
      000967 43 C6 20         [24]  889 	orl	_PIN_FUNC,#0x20
                                    890 ;	../../include/debug.c:256: }
      00096A 22               [24]  891 	ret
                                    892 ;------------------------------------------------------------
                                    893 ;Allocation info for local variables in function 'UART1Setup'
                                    894 ;------------------------------------------------------------
                                    895 ;	../../include/debug.c:265: void	UART1Setup( )
                                    896 ;	-----------------------------------------
                                    897 ;	 function UART1Setup
                                    898 ;	-----------------------------------------
      00096B                        899 _UART1Setup:
                                    900 ;	../../include/debug.c:267: U1SM0 = 0;                                                                   //UART1??????8????????????
                                    901 ;	assignBit
      00096B C2 C7            [12]  902 	clr	_U1SM0
                                    903 ;	../../include/debug.c:268: U1SMOD = 1;                                                                  //????????????
                                    904 ;	assignBit
      00096D D2 C5            [12]  905 	setb	_U1SMOD
                                    906 ;	../../include/debug.c:269: U1REN = 1;                                                                   //????????????
                                    907 ;	assignBit
      00096F D2 C4            [12]  908 	setb	_U1REN
                                    909 ;	../../include/debug.c:270: SBAUD1 = 256 - FREQ_SYS/16/UART1_BAUD;
      000971 75 C2 98         [24]  910 	mov	_SBAUD1,#0x98
                                    911 ;	../../include/debug.c:271: }
      000974 22               [24]  912 	ret
                                    913 ;------------------------------------------------------------
                                    914 ;Allocation info for local variables in function 'CH554UART1RcvByte'
                                    915 ;------------------------------------------------------------
                                    916 ;	../../include/debug.c:280: uint8_t  CH554UART1RcvByte( )
                                    917 ;	-----------------------------------------
                                    918 ;	 function CH554UART1RcvByte
                                    919 ;	-----------------------------------------
      000975                        920 _CH554UART1RcvByte:
                                    921 ;	../../include/debug.c:282: while(U1RI == 0);                                                           //????????????????????????????????????
      000975                        922 00101$:
                                    923 ;	../../include/debug.c:283: U1RI = 0;
                                    924 ;	assignBit
      000975 10 C0 02         [24]  925 	jbc	_U1RI,00114$
      000978 80 FB            [24]  926 	sjmp	00101$
      00097A                        927 00114$:
                                    928 ;	../../include/debug.c:284: return SBUF1;
      00097A 85 C1 82         [24]  929 	mov	dpl,_SBUF1
                                    930 ;	../../include/debug.c:285: }
      00097D 22               [24]  931 	ret
                                    932 ;------------------------------------------------------------
                                    933 ;Allocation info for local variables in function 'CH554UART1SendByte'
                                    934 ;------------------------------------------------------------
                                    935 ;SendDat                   Allocated to registers 
                                    936 ;------------------------------------------------------------
                                    937 ;	../../include/debug.c:294: void CH554UART1SendByte(uint8_t SendDat)
                                    938 ;	-----------------------------------------
                                    939 ;	 function CH554UART1SendByte
                                    940 ;	-----------------------------------------
      00097E                        941 _CH554UART1SendByte:
      00097E 85 82 C1         [24]  942 	mov	_SBUF1,dpl
                                    943 ;	../../include/debug.c:297: while(U1TI ==0);
      000981                        944 00101$:
                                    945 ;	../../include/debug.c:298: U1TI = 0;
                                    946 ;	assignBit
      000981 10 C1 02         [24]  947 	jbc	_U1TI,00114$
      000984 80 FB            [24]  948 	sjmp	00101$
      000986                        949 00114$:
                                    950 ;	../../include/debug.c:299: }
      000986 22               [24]  951 	ret
                                    952 ;------------------------------------------------------------
                                    953 ;Allocation info for local variables in function 'CH554WDTModeSelect'
                                    954 ;------------------------------------------------------------
                                    955 ;mode                      Allocated to registers r7 
                                    956 ;------------------------------------------------------------
                                    957 ;	../../include/debug.c:310: void CH554WDTModeSelect(uint8_t mode)
                                    958 ;	-----------------------------------------
                                    959 ;	 function CH554WDTModeSelect
                                    960 ;	-----------------------------------------
      000987                        961 _CH554WDTModeSelect:
      000987 AF 82            [24]  962 	mov	r7,dpl
                                    963 ;	../../include/debug.c:312: SAFE_MOD = 0x55;
      000989 75 A1 55         [24]  964 	mov	_SAFE_MOD,#0x55
                                    965 ;	../../include/debug.c:313: SAFE_MOD = 0xaa;                                                             //??????????????????
      00098C 75 A1 AA         [24]  966 	mov	_SAFE_MOD,#0xaa
                                    967 ;	../../include/debug.c:314: if(mode){
      00098F EF               [12]  968 	mov	a,r7
      000990 60 05            [24]  969 	jz	00102$
                                    970 ;	../../include/debug.c:315: GLOBAL_CFG |= bWDOG_EN;                                                    //?????????????????????
      000992 43 B1 01         [24]  971 	orl	_GLOBAL_CFG,#0x01
      000995 80 03            [24]  972 	sjmp	00103$
      000997                        973 00102$:
                                    974 ;	../../include/debug.c:317: else GLOBAL_CFG &= ~bWDOG_EN;	                                            //????????????????????????????????????
      000997 53 B1 FE         [24]  975 	anl	_GLOBAL_CFG,#0xfe
      00099A                        976 00103$:
                                    977 ;	../../include/debug.c:318: SAFE_MOD = 0x00;                                                             //??????????????????
      00099A 75 A1 00         [24]  978 	mov	_SAFE_MOD,#0x00
                                    979 ;	../../include/debug.c:319: WDOG_COUNT = 0;                                                              //??????????????????
      00099D 75 FF 00         [24]  980 	mov	_WDOG_COUNT,#0x00
                                    981 ;	../../include/debug.c:320: }
      0009A0 22               [24]  982 	ret
                                    983 ;------------------------------------------------------------
                                    984 ;Allocation info for local variables in function 'CH554WDTFeed'
                                    985 ;------------------------------------------------------------
                                    986 ;tim                       Allocated to registers 
                                    987 ;------------------------------------------------------------
                                    988 ;	../../include/debug.c:331: void CH554WDTFeed(uint8_t tim)
                                    989 ;	-----------------------------------------
                                    990 ;	 function CH554WDTFeed
                                    991 ;	-----------------------------------------
      0009A1                        992 _CH554WDTFeed:
      0009A1 85 82 FF         [24]  993 	mov	_WDOG_COUNT,dpl
                                    994 ;	../../include/debug.c:333: WDOG_COUNT = tim;                                                             //????????????????????????
                                    995 ;	../../include/debug.c:334: }
      0009A4 22               [24]  996 	ret
                                    997 	.area CSEG    (CODE)
                                    998 	.area CONST   (CODE)
                                    999 	.area XINIT   (CODE)
                                   1000 	.area CABS    (ABS,CODE)
