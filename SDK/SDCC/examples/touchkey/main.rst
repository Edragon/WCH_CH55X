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
                                     11 	.globl _main
                                     12 	.globl _TouchKeyChannelQuery
                                     13 	.globl _GetTouchKeyFree
                                     14 	.globl _UART1Setup
                                     15 	.globl _mInitSTDIO
                                     16 	.globl _mDelaymS
                                     17 	.globl _CfgFsys
                                     18 	.globl _printf
                                     19 	.globl _UIF_BUS_RST
                                     20 	.globl _UIF_DETECT
                                     21 	.globl _UIF_TRANSFER
                                     22 	.globl _UIF_SUSPEND
                                     23 	.globl _UIF_HST_SOF
                                     24 	.globl _UIF_FIFO_OV
                                     25 	.globl _U_SIE_FREE
                                     26 	.globl _U_TOG_OK
                                     27 	.globl _U_IS_NAK
                                     28 	.globl _ADC_CHAN0
                                     29 	.globl _ADC_CHAN1
                                     30 	.globl _CMP_CHAN
                                     31 	.globl _ADC_START
                                     32 	.globl _ADC_IF
                                     33 	.globl _CMP_IF
                                     34 	.globl _CMPO
                                     35 	.globl _U1RI
                                     36 	.globl _U1TI
                                     37 	.globl _U1RB8
                                     38 	.globl _U1TB8
                                     39 	.globl _U1REN
                                     40 	.globl _U1SMOD
                                     41 	.globl _U1SM0
                                     42 	.globl _S0_R_FIFO
                                     43 	.globl _S0_T_FIFO
                                     44 	.globl _S0_FREE
                                     45 	.globl _S0_IF_BYTE
                                     46 	.globl _S0_IF_FIRST
                                     47 	.globl _S0_IF_OV
                                     48 	.globl _S0_FST_ACT
                                     49 	.globl _CP_RL2
                                     50 	.globl _C_T2
                                     51 	.globl _TR2
                                     52 	.globl _EXEN2
                                     53 	.globl _TCLK
                                     54 	.globl _RCLK
                                     55 	.globl _EXF2
                                     56 	.globl _CAP1F
                                     57 	.globl _TF2
                                     58 	.globl _RI
                                     59 	.globl _TI
                                     60 	.globl _RB8
                                     61 	.globl _TB8
                                     62 	.globl _REN
                                     63 	.globl _SM2
                                     64 	.globl _SM1
                                     65 	.globl _SM0
                                     66 	.globl _IT0
                                     67 	.globl _IE0
                                     68 	.globl _IT1
                                     69 	.globl _IE1
                                     70 	.globl _TR0
                                     71 	.globl _TF0
                                     72 	.globl _TR1
                                     73 	.globl _TF1
                                     74 	.globl _RXD
                                     75 	.globl _PWM1_
                                     76 	.globl _TXD
                                     77 	.globl _PWM2_
                                     78 	.globl _AIN3
                                     79 	.globl _VBUS1
                                     80 	.globl _INT0
                                     81 	.globl _TXD1_
                                     82 	.globl _INT1
                                     83 	.globl _T0
                                     84 	.globl _RXD1_
                                     85 	.globl _PWM2
                                     86 	.globl _T1
                                     87 	.globl _UDP
                                     88 	.globl _UDM
                                     89 	.globl _TIN0
                                     90 	.globl _CAP1
                                     91 	.globl _T2
                                     92 	.globl _AIN0
                                     93 	.globl _VBUS2
                                     94 	.globl _TIN1
                                     95 	.globl _CAP2
                                     96 	.globl _T2EX
                                     97 	.globl _RXD_
                                     98 	.globl _TXD_
                                     99 	.globl _AIN1
                                    100 	.globl _UCC1
                                    101 	.globl _TIN2
                                    102 	.globl _SCS
                                    103 	.globl _CAP1_
                                    104 	.globl _T2_
                                    105 	.globl _AIN2
                                    106 	.globl _UCC2
                                    107 	.globl _TIN3
                                    108 	.globl _PWM1
                                    109 	.globl _MOSI
                                    110 	.globl _TIN4
                                    111 	.globl _RXD1
                                    112 	.globl _MISO
                                    113 	.globl _TIN5
                                    114 	.globl _TXD1
                                    115 	.globl _SCK
                                    116 	.globl _IE_SPI0
                                    117 	.globl _IE_TKEY
                                    118 	.globl _IE_USB
                                    119 	.globl _IE_ADC
                                    120 	.globl _IE_UART1
                                    121 	.globl _IE_PWMX
                                    122 	.globl _IE_GPIO
                                    123 	.globl _IE_WDOG
                                    124 	.globl _PX0
                                    125 	.globl _PT0
                                    126 	.globl _PX1
                                    127 	.globl _PT1
                                    128 	.globl _PS
                                    129 	.globl _PT2
                                    130 	.globl _PL_FLAG
                                    131 	.globl _PH_FLAG
                                    132 	.globl _EX0
                                    133 	.globl _ET0
                                    134 	.globl _EX1
                                    135 	.globl _ET1
                                    136 	.globl _ES
                                    137 	.globl _ET2
                                    138 	.globl _E_DIS
                                    139 	.globl _EA
                                    140 	.globl _P
                                    141 	.globl _F1
                                    142 	.globl _OV
                                    143 	.globl _RS0
                                    144 	.globl _RS1
                                    145 	.globl _F0
                                    146 	.globl _AC
                                    147 	.globl _CY
                                    148 	.globl _UEP1_DMA_H
                                    149 	.globl _UEP1_DMA_L
                                    150 	.globl _UEP1_DMA
                                    151 	.globl _UEP0_DMA_H
                                    152 	.globl _UEP0_DMA_L
                                    153 	.globl _UEP0_DMA
                                    154 	.globl _UEP2_3_MOD
                                    155 	.globl _UEP4_1_MOD
                                    156 	.globl _UEP3_DMA_H
                                    157 	.globl _UEP3_DMA_L
                                    158 	.globl _UEP3_DMA
                                    159 	.globl _UEP2_DMA_H
                                    160 	.globl _UEP2_DMA_L
                                    161 	.globl _UEP2_DMA
                                    162 	.globl _USB_DEV_AD
                                    163 	.globl _USB_CTRL
                                    164 	.globl _USB_INT_EN
                                    165 	.globl _UEP4_T_LEN
                                    166 	.globl _UEP4_CTRL
                                    167 	.globl _UEP0_T_LEN
                                    168 	.globl _UEP0_CTRL
                                    169 	.globl _USB_RX_LEN
                                    170 	.globl _USB_MIS_ST
                                    171 	.globl _USB_INT_ST
                                    172 	.globl _USB_INT_FG
                                    173 	.globl _UEP3_T_LEN
                                    174 	.globl _UEP3_CTRL
                                    175 	.globl _UEP2_T_LEN
                                    176 	.globl _UEP2_CTRL
                                    177 	.globl _UEP1_T_LEN
                                    178 	.globl _UEP1_CTRL
                                    179 	.globl _UDEV_CTRL
                                    180 	.globl _USB_C_CTRL
                                    181 	.globl _TKEY_DATH
                                    182 	.globl _TKEY_DATL
                                    183 	.globl _TKEY_DAT
                                    184 	.globl _TKEY_CTRL
                                    185 	.globl _ADC_DATA
                                    186 	.globl _ADC_CFG
                                    187 	.globl _ADC_CTRL
                                    188 	.globl _SBAUD1
                                    189 	.globl _SBUF1
                                    190 	.globl _SCON1
                                    191 	.globl _SPI0_SETUP
                                    192 	.globl _SPI0_CK_SE
                                    193 	.globl _SPI0_CTRL
                                    194 	.globl _SPI0_DATA
                                    195 	.globl _SPI0_STAT
                                    196 	.globl _PWM_CK_SE
                                    197 	.globl _PWM_CTRL
                                    198 	.globl _PWM_DATA1
                                    199 	.globl _PWM_DATA2
                                    200 	.globl _T2CAP1H
                                    201 	.globl _T2CAP1L
                                    202 	.globl _T2CAP1
                                    203 	.globl _TH2
                                    204 	.globl _TL2
                                    205 	.globl _T2COUNT
                                    206 	.globl _RCAP2H
                                    207 	.globl _RCAP2L
                                    208 	.globl _RCAP2
                                    209 	.globl _T2MOD
                                    210 	.globl _T2CON
                                    211 	.globl _SBUF
                                    212 	.globl _SCON
                                    213 	.globl _TH1
                                    214 	.globl _TH0
                                    215 	.globl _TL1
                                    216 	.globl _TL0
                                    217 	.globl _TMOD
                                    218 	.globl _TCON
                                    219 	.globl _XBUS_AUX
                                    220 	.globl _PIN_FUNC
                                    221 	.globl _P3_DIR_PU
                                    222 	.globl _P3_MOD_OC
                                    223 	.globl _P3
                                    224 	.globl _P2
                                    225 	.globl _P1_DIR_PU
                                    226 	.globl _P1_MOD_OC
                                    227 	.globl _P1
                                    228 	.globl _ROM_CTRL
                                    229 	.globl _ROM_DATA_H
                                    230 	.globl _ROM_DATA_L
                                    231 	.globl _ROM_DATA
                                    232 	.globl _ROM_ADDR_H
                                    233 	.globl _ROM_ADDR_L
                                    234 	.globl _ROM_ADDR
                                    235 	.globl _GPIO_IE
                                    236 	.globl _IP_EX
                                    237 	.globl _IE_EX
                                    238 	.globl _IP
                                    239 	.globl _IE
                                    240 	.globl _WDOG_COUNT
                                    241 	.globl _RESET_KEEP
                                    242 	.globl _WAKE_CTRL
                                    243 	.globl _CLOCK_CFG
                                    244 	.globl _PCON
                                    245 	.globl _GLOBAL_CFG
                                    246 	.globl _SAFE_MOD
                                    247 	.globl _DPH
                                    248 	.globl _DPL
                                    249 	.globl _SP
                                    250 	.globl _B
                                    251 	.globl _ACC
                                    252 	.globl _PSW
                                    253 ;--------------------------------------------------------
                                    254 ; special function registers
                                    255 ;--------------------------------------------------------
                                    256 	.area RSEG    (ABS,DATA)
      000000                        257 	.org 0x0000
                           0000D0   258 _PSW	=	0x00d0
                           0000E0   259 _ACC	=	0x00e0
                           0000F0   260 _B	=	0x00f0
                           000081   261 _SP	=	0x0081
                           000082   262 _DPL	=	0x0082
                           000083   263 _DPH	=	0x0083
                           0000A1   264 _SAFE_MOD	=	0x00a1
                           0000B1   265 _GLOBAL_CFG	=	0x00b1
                           000087   266 _PCON	=	0x0087
                           0000B9   267 _CLOCK_CFG	=	0x00b9
                           0000A9   268 _WAKE_CTRL	=	0x00a9
                           0000FE   269 _RESET_KEEP	=	0x00fe
                           0000FF   270 _WDOG_COUNT	=	0x00ff
                           0000A8   271 _IE	=	0x00a8
                           0000B8   272 _IP	=	0x00b8
                           0000E8   273 _IE_EX	=	0x00e8
                           0000E9   274 _IP_EX	=	0x00e9
                           0000C7   275 _GPIO_IE	=	0x00c7
                           008584   276 _ROM_ADDR	=	0x8584
                           000084   277 _ROM_ADDR_L	=	0x0084
                           000085   278 _ROM_ADDR_H	=	0x0085
                           008F8E   279 _ROM_DATA	=	0x8f8e
                           00008E   280 _ROM_DATA_L	=	0x008e
                           00008F   281 _ROM_DATA_H	=	0x008f
                           000086   282 _ROM_CTRL	=	0x0086
                           000090   283 _P1	=	0x0090
                           000092   284 _P1_MOD_OC	=	0x0092
                           000093   285 _P1_DIR_PU	=	0x0093
                           0000A0   286 _P2	=	0x00a0
                           0000B0   287 _P3	=	0x00b0
                           000096   288 _P3_MOD_OC	=	0x0096
                           000097   289 _P3_DIR_PU	=	0x0097
                           0000C6   290 _PIN_FUNC	=	0x00c6
                           0000A2   291 _XBUS_AUX	=	0x00a2
                           000088   292 _TCON	=	0x0088
                           000089   293 _TMOD	=	0x0089
                           00008A   294 _TL0	=	0x008a
                           00008B   295 _TL1	=	0x008b
                           00008C   296 _TH0	=	0x008c
                           00008D   297 _TH1	=	0x008d
                           000098   298 _SCON	=	0x0098
                           000099   299 _SBUF	=	0x0099
                           0000C8   300 _T2CON	=	0x00c8
                           0000C9   301 _T2MOD	=	0x00c9
                           00CBCA   302 _RCAP2	=	0xcbca
                           0000CA   303 _RCAP2L	=	0x00ca
                           0000CB   304 _RCAP2H	=	0x00cb
                           00CDCC   305 _T2COUNT	=	0xcdcc
                           0000CC   306 _TL2	=	0x00cc
                           0000CD   307 _TH2	=	0x00cd
                           00CFCE   308 _T2CAP1	=	0xcfce
                           0000CE   309 _T2CAP1L	=	0x00ce
                           0000CF   310 _T2CAP1H	=	0x00cf
                           00009B   311 _PWM_DATA2	=	0x009b
                           00009C   312 _PWM_DATA1	=	0x009c
                           00009D   313 _PWM_CTRL	=	0x009d
                           00009E   314 _PWM_CK_SE	=	0x009e
                           0000F8   315 _SPI0_STAT	=	0x00f8
                           0000F9   316 _SPI0_DATA	=	0x00f9
                           0000FA   317 _SPI0_CTRL	=	0x00fa
                           0000FB   318 _SPI0_CK_SE	=	0x00fb
                           0000FC   319 _SPI0_SETUP	=	0x00fc
                           0000C0   320 _SCON1	=	0x00c0
                           0000C1   321 _SBUF1	=	0x00c1
                           0000C2   322 _SBAUD1	=	0x00c2
                           000080   323 _ADC_CTRL	=	0x0080
                           00009A   324 _ADC_CFG	=	0x009a
                           00009F   325 _ADC_DATA	=	0x009f
                           0000C3   326 _TKEY_CTRL	=	0x00c3
                           00C5C4   327 _TKEY_DAT	=	0xc5c4
                           0000C4   328 _TKEY_DATL	=	0x00c4
                           0000C5   329 _TKEY_DATH	=	0x00c5
                           000091   330 _USB_C_CTRL	=	0x0091
                           0000D1   331 _UDEV_CTRL	=	0x00d1
                           0000D2   332 _UEP1_CTRL	=	0x00d2
                           0000D3   333 _UEP1_T_LEN	=	0x00d3
                           0000D4   334 _UEP2_CTRL	=	0x00d4
                           0000D5   335 _UEP2_T_LEN	=	0x00d5
                           0000D6   336 _UEP3_CTRL	=	0x00d6
                           0000D7   337 _UEP3_T_LEN	=	0x00d7
                           0000D8   338 _USB_INT_FG	=	0x00d8
                           0000D9   339 _USB_INT_ST	=	0x00d9
                           0000DA   340 _USB_MIS_ST	=	0x00da
                           0000DB   341 _USB_RX_LEN	=	0x00db
                           0000DC   342 _UEP0_CTRL	=	0x00dc
                           0000DD   343 _UEP0_T_LEN	=	0x00dd
                           0000DE   344 _UEP4_CTRL	=	0x00de
                           0000DF   345 _UEP4_T_LEN	=	0x00df
                           0000E1   346 _USB_INT_EN	=	0x00e1
                           0000E2   347 _USB_CTRL	=	0x00e2
                           0000E3   348 _USB_DEV_AD	=	0x00e3
                           00E5E4   349 _UEP2_DMA	=	0xe5e4
                           0000E4   350 _UEP2_DMA_L	=	0x00e4
                           0000E5   351 _UEP2_DMA_H	=	0x00e5
                           00E7E6   352 _UEP3_DMA	=	0xe7e6
                           0000E6   353 _UEP3_DMA_L	=	0x00e6
                           0000E7   354 _UEP3_DMA_H	=	0x00e7
                           0000EA   355 _UEP4_1_MOD	=	0x00ea
                           0000EB   356 _UEP2_3_MOD	=	0x00eb
                           00EDEC   357 _UEP0_DMA	=	0xedec
                           0000EC   358 _UEP0_DMA_L	=	0x00ec
                           0000ED   359 _UEP0_DMA_H	=	0x00ed
                           00EFEE   360 _UEP1_DMA	=	0xefee
                           0000EE   361 _UEP1_DMA_L	=	0x00ee
                           0000EF   362 _UEP1_DMA_H	=	0x00ef
                                    363 ;--------------------------------------------------------
                                    364 ; special function bits
                                    365 ;--------------------------------------------------------
                                    366 	.area RSEG    (ABS,DATA)
      000000                        367 	.org 0x0000
                           0000D7   368 _CY	=	0x00d7
                           0000D6   369 _AC	=	0x00d6
                           0000D5   370 _F0	=	0x00d5
                           0000D4   371 _RS1	=	0x00d4
                           0000D3   372 _RS0	=	0x00d3
                           0000D2   373 _OV	=	0x00d2
                           0000D1   374 _F1	=	0x00d1
                           0000D0   375 _P	=	0x00d0
                           0000AF   376 _EA	=	0x00af
                           0000AE   377 _E_DIS	=	0x00ae
                           0000AD   378 _ET2	=	0x00ad
                           0000AC   379 _ES	=	0x00ac
                           0000AB   380 _ET1	=	0x00ab
                           0000AA   381 _EX1	=	0x00aa
                           0000A9   382 _ET0	=	0x00a9
                           0000A8   383 _EX0	=	0x00a8
                           0000BF   384 _PH_FLAG	=	0x00bf
                           0000BE   385 _PL_FLAG	=	0x00be
                           0000BD   386 _PT2	=	0x00bd
                           0000BC   387 _PS	=	0x00bc
                           0000BB   388 _PT1	=	0x00bb
                           0000BA   389 _PX1	=	0x00ba
                           0000B9   390 _PT0	=	0x00b9
                           0000B8   391 _PX0	=	0x00b8
                           0000EF   392 _IE_WDOG	=	0x00ef
                           0000EE   393 _IE_GPIO	=	0x00ee
                           0000ED   394 _IE_PWMX	=	0x00ed
                           0000EC   395 _IE_UART1	=	0x00ec
                           0000EB   396 _IE_ADC	=	0x00eb
                           0000EA   397 _IE_USB	=	0x00ea
                           0000E9   398 _IE_TKEY	=	0x00e9
                           0000E8   399 _IE_SPI0	=	0x00e8
                           000097   400 _SCK	=	0x0097
                           000097   401 _TXD1	=	0x0097
                           000097   402 _TIN5	=	0x0097
                           000096   403 _MISO	=	0x0096
                           000096   404 _RXD1	=	0x0096
                           000096   405 _TIN4	=	0x0096
                           000095   406 _MOSI	=	0x0095
                           000095   407 _PWM1	=	0x0095
                           000095   408 _TIN3	=	0x0095
                           000095   409 _UCC2	=	0x0095
                           000095   410 _AIN2	=	0x0095
                           000094   411 _T2_	=	0x0094
                           000094   412 _CAP1_	=	0x0094
                           000094   413 _SCS	=	0x0094
                           000094   414 _TIN2	=	0x0094
                           000094   415 _UCC1	=	0x0094
                           000094   416 _AIN1	=	0x0094
                           000093   417 _TXD_	=	0x0093
                           000092   418 _RXD_	=	0x0092
                           000091   419 _T2EX	=	0x0091
                           000091   420 _CAP2	=	0x0091
                           000091   421 _TIN1	=	0x0091
                           000091   422 _VBUS2	=	0x0091
                           000091   423 _AIN0	=	0x0091
                           000090   424 _T2	=	0x0090
                           000090   425 _CAP1	=	0x0090
                           000090   426 _TIN0	=	0x0090
                           0000B7   427 _UDM	=	0x00b7
                           0000B6   428 _UDP	=	0x00b6
                           0000B5   429 _T1	=	0x00b5
                           0000B4   430 _PWM2	=	0x00b4
                           0000B4   431 _RXD1_	=	0x00b4
                           0000B4   432 _T0	=	0x00b4
                           0000B3   433 _INT1	=	0x00b3
                           0000B2   434 _TXD1_	=	0x00b2
                           0000B2   435 _INT0	=	0x00b2
                           0000B2   436 _VBUS1	=	0x00b2
                           0000B2   437 _AIN3	=	0x00b2
                           0000B1   438 _PWM2_	=	0x00b1
                           0000B1   439 _TXD	=	0x00b1
                           0000B0   440 _PWM1_	=	0x00b0
                           0000B0   441 _RXD	=	0x00b0
                           00008F   442 _TF1	=	0x008f
                           00008E   443 _TR1	=	0x008e
                           00008D   444 _TF0	=	0x008d
                           00008C   445 _TR0	=	0x008c
                           00008B   446 _IE1	=	0x008b
                           00008A   447 _IT1	=	0x008a
                           000089   448 _IE0	=	0x0089
                           000088   449 _IT0	=	0x0088
                           00009F   450 _SM0	=	0x009f
                           00009E   451 _SM1	=	0x009e
                           00009D   452 _SM2	=	0x009d
                           00009C   453 _REN	=	0x009c
                           00009B   454 _TB8	=	0x009b
                           00009A   455 _RB8	=	0x009a
                           000099   456 _TI	=	0x0099
                           000098   457 _RI	=	0x0098
                           0000CF   458 _TF2	=	0x00cf
                           0000CF   459 _CAP1F	=	0x00cf
                           0000CE   460 _EXF2	=	0x00ce
                           0000CD   461 _RCLK	=	0x00cd
                           0000CC   462 _TCLK	=	0x00cc
                           0000CB   463 _EXEN2	=	0x00cb
                           0000CA   464 _TR2	=	0x00ca
                           0000C9   465 _C_T2	=	0x00c9
                           0000C8   466 _CP_RL2	=	0x00c8
                           0000FF   467 _S0_FST_ACT	=	0x00ff
                           0000FE   468 _S0_IF_OV	=	0x00fe
                           0000FD   469 _S0_IF_FIRST	=	0x00fd
                           0000FC   470 _S0_IF_BYTE	=	0x00fc
                           0000FB   471 _S0_FREE	=	0x00fb
                           0000FA   472 _S0_T_FIFO	=	0x00fa
                           0000F8   473 _S0_R_FIFO	=	0x00f8
                           0000C7   474 _U1SM0	=	0x00c7
                           0000C5   475 _U1SMOD	=	0x00c5
                           0000C4   476 _U1REN	=	0x00c4
                           0000C3   477 _U1TB8	=	0x00c3
                           0000C2   478 _U1RB8	=	0x00c2
                           0000C1   479 _U1TI	=	0x00c1
                           0000C0   480 _U1RI	=	0x00c0
                           000087   481 _CMPO	=	0x0087
                           000086   482 _CMP_IF	=	0x0086
                           000085   483 _ADC_IF	=	0x0085
                           000084   484 _ADC_START	=	0x0084
                           000083   485 _CMP_CHAN	=	0x0083
                           000081   486 _ADC_CHAN1	=	0x0081
                           000080   487 _ADC_CHAN0	=	0x0080
                           0000DF   488 _U_IS_NAK	=	0x00df
                           0000DE   489 _U_TOG_OK	=	0x00de
                           0000DD   490 _U_SIE_FREE	=	0x00dd
                           0000DC   491 _UIF_FIFO_OV	=	0x00dc
                           0000DB   492 _UIF_HST_SOF	=	0x00db
                           0000DA   493 _UIF_SUSPEND	=	0x00da
                           0000D9   494 _UIF_TRANSFER	=	0x00d9
                           0000D8   495 _UIF_DETECT	=	0x00d8
                           0000D8   496 _UIF_BUS_RST	=	0x00d8
                                    497 ;--------------------------------------------------------
                                    498 ; overlayable register banks
                                    499 ;--------------------------------------------------------
                                    500 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        501 	.ds 8
                                    502 ;--------------------------------------------------------
                                    503 ; internal ram data
                                    504 ;--------------------------------------------------------
                                    505 	.area DSEG    (DATA)
                                    506 ;--------------------------------------------------------
                                    507 ; overlayable items in internal ram 
                                    508 ;--------------------------------------------------------
                                    509 ;--------------------------------------------------------
                                    510 ; Stack segment in internal ram 
                                    511 ;--------------------------------------------------------
                                    512 	.area	SSEG
      00004F                        513 __start__stack:
      00004F                        514 	.ds	1
                                    515 
                                    516 ;--------------------------------------------------------
                                    517 ; indirectly addressable internal ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area ISEG    (DATA)
                                    520 ;--------------------------------------------------------
                                    521 ; absolute internal ram data
                                    522 ;--------------------------------------------------------
                                    523 	.area IABS    (ABS,DATA)
                                    524 	.area IABS    (ABS,DATA)
                                    525 ;--------------------------------------------------------
                                    526 ; bit data
                                    527 ;--------------------------------------------------------
                                    528 	.area BSEG    (BIT)
                                    529 ;--------------------------------------------------------
                                    530 ; paged external ram data
                                    531 ;--------------------------------------------------------
                                    532 	.area PSEG    (PAG,XDATA)
                                    533 ;--------------------------------------------------------
                                    534 ; external ram data
                                    535 ;--------------------------------------------------------
                                    536 	.area XSEG    (XDATA)
                                    537 ;--------------------------------------------------------
                                    538 ; absolute external ram data
                                    539 ;--------------------------------------------------------
                                    540 	.area XABS    (ABS,XDATA)
                                    541 ;--------------------------------------------------------
                                    542 ; external initialized ram data
                                    543 ;--------------------------------------------------------
                                    544 	.area XISEG   (XDATA)
                                    545 	.area HOME    (CODE)
                                    546 	.area GSINIT0 (CODE)
                                    547 	.area GSINIT1 (CODE)
                                    548 	.area GSINIT2 (CODE)
                                    549 	.area GSINIT3 (CODE)
                                    550 	.area GSINIT4 (CODE)
                                    551 	.area GSINIT5 (CODE)
                                    552 	.area GSINIT  (CODE)
                                    553 	.area GSFINAL (CODE)
                                    554 	.area CSEG    (CODE)
                                    555 ;--------------------------------------------------------
                                    556 ; interrupt vector 
                                    557 ;--------------------------------------------------------
                                    558 	.area HOME    (CODE)
      000000                        559 __interrupt_vect:
      000000 02 00 06         [24]  560 	ljmp	__sdcc_gsinit_startup
                                    561 ;--------------------------------------------------------
                                    562 ; global & static initialisations
                                    563 ;--------------------------------------------------------
                                    564 	.area HOME    (CODE)
                                    565 	.area GSINIT  (CODE)
                                    566 	.area GSFINAL (CODE)
                                    567 	.area GSINIT  (CODE)
                                    568 	.globl __sdcc_gsinit_startup
                                    569 	.globl __sdcc_program_startup
                                    570 	.globl __start__stack
                                    571 	.globl __mcs51_genXINIT
                                    572 	.globl __mcs51_genXRAMCLEAR
                                    573 	.globl __mcs51_genRAMCLEAR
                                    574 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  575 	ljmp	__sdcc_program_startup
                                    576 ;--------------------------------------------------------
                                    577 ; Home
                                    578 ;--------------------------------------------------------
                                    579 	.area HOME    (CODE)
                                    580 	.area HOME    (CODE)
      000003                        581 __sdcc_program_startup:
      000003 02 00 62         [24]  582 	ljmp	_main
                                    583 ;	return from main will return to caller
                                    584 ;--------------------------------------------------------
                                    585 ; code
                                    586 ;--------------------------------------------------------
                                    587 	.area CSEG    (CODE)
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'main'
                                    590 ;------------------------------------------------------------
                                    591 ;i                         Allocated with name '_main_i_65536_23'
                                    592 ;------------------------------------------------------------
                                    593 ;	main.c:15: void main()
                                    594 ;	-----------------------------------------
                                    595 ;	 function main
                                    596 ;	-----------------------------------------
      000062                        597 _main:
                           000007   598 	ar7 = 0x07
                           000006   599 	ar6 = 0x06
                           000005   600 	ar5 = 0x05
                           000004   601 	ar4 = 0x04
                           000003   602 	ar3 = 0x03
                           000002   603 	ar2 = 0x02
                           000001   604 	ar1 = 0x01
                           000000   605 	ar0 = 0x00
                                    606 ;	main.c:18: CfgFsys( );                                                                //CH554??????????????????
      000062 12 00 BE         [24]  607 	lcall	_CfgFsys
                                    608 ;	main.c:19: mDelaymS(5);                                                               //??????????????????????????????????????????????????????
      000065 90 00 05         [24]  609 	mov	dptr,#0x0005
      000068 12 00 E6         [24]  610 	lcall	_mDelaymS
                                    611 ;	main.c:20: mInitSTDIO( );                                                             //??????0?????????
      00006B 12 01 08         [24]  612 	lcall	_mInitSTDIO
                                    613 ;	main.c:21: UART1Setup();
      00006E 12 01 CA         [24]  614 	lcall	_UART1Setup
                                    615 ;	main.c:23: printf("start ...\n");
      000071 74 36            [12]  616 	mov	a,#___str_0
      000073 C0 E0            [24]  617 	push	acc
      000075 74 0D            [12]  618 	mov	a,#(___str_0 >> 8)
      000077 C0 E0            [24]  619 	push	acc
      000079 74 80            [12]  620 	mov	a,#0x80
      00007B C0 E0            [24]  621 	push	acc
      00007D 12 03 FB         [24]  622 	lcall	_printf
      000080 15 81            [12]  623 	dec	sp
      000082 15 81            [12]  624 	dec	sp
      000084 15 81            [12]  625 	dec	sp
                                    626 ;	main.c:25: P1_DIR_PU &= 0x0C;                                                         //???????????????????????????????????????????????????????????????????????????
      000086 53 93 0C         [24]  627 	anl	_P1_DIR_PU,#0x0c
                                    628 ;	main.c:26: TouchKeyQueryCyl2ms();                                                     //TouchKey????????????2ms
      000089 43 C3 10         [24]  629 	orl	_TKEY_CTRL,#0x10
                                    630 ;	main.c:27: GetTouchKeyFree();                                                         //?????????????????????
      00008C 12 02 04         [24]  631 	lcall	_GetTouchKeyFree
                                    632 ;	main.c:48: while(1)
      00008F                        633 00104$:
                                    634 ;	main.c:50: TouchKeyChannelQuery();                                                  //????????????????????????
      00008F 12 02 88         [24]  635 	lcall	_TouchKeyChannelQuery
                                    636 ;	main.c:51: if(KeyBuf)                                                               //key_buf???0??????????????????????????????
      000092 E5 15            [12]  637 	mov	a,_KeyBuf
      000094 60 F9            [24]  638 	jz	00104$
                                    639 ;	main.c:53: printf("Query TouchKey Channel %02x \n",(uint16_t)KeyBuf);              //??????????????????????????????
      000096 AE 15            [24]  640 	mov	r6,_KeyBuf
      000098 7F 00            [12]  641 	mov	r7,#0x00
      00009A C0 06            [24]  642 	push	ar6
      00009C C0 07            [24]  643 	push	ar7
      00009E 74 41            [12]  644 	mov	a,#___str_1
      0000A0 C0 E0            [24]  645 	push	acc
      0000A2 74 0D            [12]  646 	mov	a,#(___str_1 >> 8)
      0000A4 C0 E0            [24]  647 	push	acc
      0000A6 74 80            [12]  648 	mov	a,#0x80
      0000A8 C0 E0            [24]  649 	push	acc
      0000AA 12 03 FB         [24]  650 	lcall	_printf
      0000AD E5 81            [12]  651 	mov	a,sp
      0000AF 24 FB            [12]  652 	add	a,#0xfb
      0000B1 F5 81            [12]  653 	mov	sp,a
                                    654 ;	main.c:54: KeyBuf = 0;                                                           //????????????????????????
      0000B3 75 15 00         [24]  655 	mov	_KeyBuf,#0x00
                                    656 ;	main.c:55: mDelaymS(20);                                                         //????????????????????????????????????????????????
      0000B6 90 00 14         [24]  657 	mov	dptr,#0x0014
      0000B9 12 00 E6         [24]  658 	lcall	_mDelaymS
                                    659 ;	main.c:60: }
      0000BC 80 D1            [24]  660 	sjmp	00104$
                                    661 	.area CSEG    (CODE)
                                    662 	.area CONST   (CODE)
                                    663 	.area CONST   (CODE)
      000D36                        664 ___str_0:
      000D36 73 74 61 72 74 20 2E   665 	.ascii "start ..."
             2E 2E
      000D3F 0A                     666 	.db 0x0a
      000D40 00                     667 	.db 0x00
                                    668 	.area CSEG    (CODE)
                                    669 	.area CONST   (CODE)
      000D41                        670 ___str_1:
      000D41 51 75 65 72 79 20 54   671 	.ascii "Query TouchKey Channel %02x "
             6F 75 63 68 4B 65 79
             20 43 68 61 6E 6E 65
             6C 20 25 30 32 78 20
      000D5D 0A                     672 	.db 0x0a
      000D5E 00                     673 	.db 0x00
                                    674 	.area CSEG    (CODE)
                                    675 	.area XINIT   (CODE)
                                    676 	.area CABS    (ABS,CODE)
