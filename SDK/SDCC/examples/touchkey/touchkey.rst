                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module touchkey
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
                                    245 	.globl _KeyBuf
                                    246 	.globl _KeyFree
                                    247 	.globl _GetTouchKeyFree
                                    248 	.globl _TouchKeyChannelSelect
                                    249 	.globl _TouchKeyChannelQuery
                                    250 ;--------------------------------------------------------
                                    251 ; special function registers
                                    252 ;--------------------------------------------------------
                                    253 	.area RSEG    (ABS,DATA)
      000000                        254 	.org 0x0000
                           0000D0   255 _PSW	=	0x00d0
                           0000E0   256 _ACC	=	0x00e0
                           0000F0   257 _B	=	0x00f0
                           000081   258 _SP	=	0x0081
                           000082   259 _DPL	=	0x0082
                           000083   260 _DPH	=	0x0083
                           0000A1   261 _SAFE_MOD	=	0x00a1
                           0000B1   262 _GLOBAL_CFG	=	0x00b1
                           000087   263 _PCON	=	0x0087
                           0000B9   264 _CLOCK_CFG	=	0x00b9
                           0000A9   265 _WAKE_CTRL	=	0x00a9
                           0000FE   266 _RESET_KEEP	=	0x00fe
                           0000FF   267 _WDOG_COUNT	=	0x00ff
                           0000A8   268 _IE	=	0x00a8
                           0000B8   269 _IP	=	0x00b8
                           0000E8   270 _IE_EX	=	0x00e8
                           0000E9   271 _IP_EX	=	0x00e9
                           0000C7   272 _GPIO_IE	=	0x00c7
                           008584   273 _ROM_ADDR	=	0x8584
                           000084   274 _ROM_ADDR_L	=	0x0084
                           000085   275 _ROM_ADDR_H	=	0x0085
                           008F8E   276 _ROM_DATA	=	0x8f8e
                           00008E   277 _ROM_DATA_L	=	0x008e
                           00008F   278 _ROM_DATA_H	=	0x008f
                           000086   279 _ROM_CTRL	=	0x0086
                           000090   280 _P1	=	0x0090
                           000092   281 _P1_MOD_OC	=	0x0092
                           000093   282 _P1_DIR_PU	=	0x0093
                           0000A0   283 _P2	=	0x00a0
                           0000B0   284 _P3	=	0x00b0
                           000096   285 _P3_MOD_OC	=	0x0096
                           000097   286 _P3_DIR_PU	=	0x0097
                           0000C6   287 _PIN_FUNC	=	0x00c6
                           0000A2   288 _XBUS_AUX	=	0x00a2
                           000088   289 _TCON	=	0x0088
                           000089   290 _TMOD	=	0x0089
                           00008A   291 _TL0	=	0x008a
                           00008B   292 _TL1	=	0x008b
                           00008C   293 _TH0	=	0x008c
                           00008D   294 _TH1	=	0x008d
                           000098   295 _SCON	=	0x0098
                           000099   296 _SBUF	=	0x0099
                           0000C8   297 _T2CON	=	0x00c8
                           0000C9   298 _T2MOD	=	0x00c9
                           00CBCA   299 _RCAP2	=	0xcbca
                           0000CA   300 _RCAP2L	=	0x00ca
                           0000CB   301 _RCAP2H	=	0x00cb
                           00CDCC   302 _T2COUNT	=	0xcdcc
                           0000CC   303 _TL2	=	0x00cc
                           0000CD   304 _TH2	=	0x00cd
                           00CFCE   305 _T2CAP1	=	0xcfce
                           0000CE   306 _T2CAP1L	=	0x00ce
                           0000CF   307 _T2CAP1H	=	0x00cf
                           00009B   308 _PWM_DATA2	=	0x009b
                           00009C   309 _PWM_DATA1	=	0x009c
                           00009D   310 _PWM_CTRL	=	0x009d
                           00009E   311 _PWM_CK_SE	=	0x009e
                           0000F8   312 _SPI0_STAT	=	0x00f8
                           0000F9   313 _SPI0_DATA	=	0x00f9
                           0000FA   314 _SPI0_CTRL	=	0x00fa
                           0000FB   315 _SPI0_CK_SE	=	0x00fb
                           0000FC   316 _SPI0_SETUP	=	0x00fc
                           0000C0   317 _SCON1	=	0x00c0
                           0000C1   318 _SBUF1	=	0x00c1
                           0000C2   319 _SBAUD1	=	0x00c2
                           000080   320 _ADC_CTRL	=	0x0080
                           00009A   321 _ADC_CFG	=	0x009a
                           00009F   322 _ADC_DATA	=	0x009f
                           0000C3   323 _TKEY_CTRL	=	0x00c3
                           00C5C4   324 _TKEY_DAT	=	0xc5c4
                           0000C4   325 _TKEY_DATL	=	0x00c4
                           0000C5   326 _TKEY_DATH	=	0x00c5
                           000091   327 _USB_C_CTRL	=	0x0091
                           0000D1   328 _UDEV_CTRL	=	0x00d1
                           0000D2   329 _UEP1_CTRL	=	0x00d2
                           0000D3   330 _UEP1_T_LEN	=	0x00d3
                           0000D4   331 _UEP2_CTRL	=	0x00d4
                           0000D5   332 _UEP2_T_LEN	=	0x00d5
                           0000D6   333 _UEP3_CTRL	=	0x00d6
                           0000D7   334 _UEP3_T_LEN	=	0x00d7
                           0000D8   335 _USB_INT_FG	=	0x00d8
                           0000D9   336 _USB_INT_ST	=	0x00d9
                           0000DA   337 _USB_MIS_ST	=	0x00da
                           0000DB   338 _USB_RX_LEN	=	0x00db
                           0000DC   339 _UEP0_CTRL	=	0x00dc
                           0000DD   340 _UEP0_T_LEN	=	0x00dd
                           0000DE   341 _UEP4_CTRL	=	0x00de
                           0000DF   342 _UEP4_T_LEN	=	0x00df
                           0000E1   343 _USB_INT_EN	=	0x00e1
                           0000E2   344 _USB_CTRL	=	0x00e2
                           0000E3   345 _USB_DEV_AD	=	0x00e3
                           00E5E4   346 _UEP2_DMA	=	0xe5e4
                           0000E4   347 _UEP2_DMA_L	=	0x00e4
                           0000E5   348 _UEP2_DMA_H	=	0x00e5
                           00E7E6   349 _UEP3_DMA	=	0xe7e6
                           0000E6   350 _UEP3_DMA_L	=	0x00e6
                           0000E7   351 _UEP3_DMA_H	=	0x00e7
                           0000EA   352 _UEP4_1_MOD	=	0x00ea
                           0000EB   353 _UEP2_3_MOD	=	0x00eb
                           00EDEC   354 _UEP0_DMA	=	0xedec
                           0000EC   355 _UEP0_DMA_L	=	0x00ec
                           0000ED   356 _UEP0_DMA_H	=	0x00ed
                           00EFEE   357 _UEP1_DMA	=	0xefee
                           0000EE   358 _UEP1_DMA_L	=	0x00ee
                           0000EF   359 _UEP1_DMA_H	=	0x00ef
                                    360 ;--------------------------------------------------------
                                    361 ; special function bits
                                    362 ;--------------------------------------------------------
                                    363 	.area RSEG    (ABS,DATA)
      000000                        364 	.org 0x0000
                           0000D7   365 _CY	=	0x00d7
                           0000D6   366 _AC	=	0x00d6
                           0000D5   367 _F0	=	0x00d5
                           0000D4   368 _RS1	=	0x00d4
                           0000D3   369 _RS0	=	0x00d3
                           0000D2   370 _OV	=	0x00d2
                           0000D1   371 _F1	=	0x00d1
                           0000D0   372 _P	=	0x00d0
                           0000AF   373 _EA	=	0x00af
                           0000AE   374 _E_DIS	=	0x00ae
                           0000AD   375 _ET2	=	0x00ad
                           0000AC   376 _ES	=	0x00ac
                           0000AB   377 _ET1	=	0x00ab
                           0000AA   378 _EX1	=	0x00aa
                           0000A9   379 _ET0	=	0x00a9
                           0000A8   380 _EX0	=	0x00a8
                           0000BF   381 _PH_FLAG	=	0x00bf
                           0000BE   382 _PL_FLAG	=	0x00be
                           0000BD   383 _PT2	=	0x00bd
                           0000BC   384 _PS	=	0x00bc
                           0000BB   385 _PT1	=	0x00bb
                           0000BA   386 _PX1	=	0x00ba
                           0000B9   387 _PT0	=	0x00b9
                           0000B8   388 _PX0	=	0x00b8
                           0000EF   389 _IE_WDOG	=	0x00ef
                           0000EE   390 _IE_GPIO	=	0x00ee
                           0000ED   391 _IE_PWMX	=	0x00ed
                           0000EC   392 _IE_UART1	=	0x00ec
                           0000EB   393 _IE_ADC	=	0x00eb
                           0000EA   394 _IE_USB	=	0x00ea
                           0000E9   395 _IE_TKEY	=	0x00e9
                           0000E8   396 _IE_SPI0	=	0x00e8
                           000097   397 _SCK	=	0x0097
                           000097   398 _TXD1	=	0x0097
                           000097   399 _TIN5	=	0x0097
                           000096   400 _MISO	=	0x0096
                           000096   401 _RXD1	=	0x0096
                           000096   402 _TIN4	=	0x0096
                           000095   403 _MOSI	=	0x0095
                           000095   404 _PWM1	=	0x0095
                           000095   405 _TIN3	=	0x0095
                           000095   406 _UCC2	=	0x0095
                           000095   407 _AIN2	=	0x0095
                           000094   408 _T2_	=	0x0094
                           000094   409 _CAP1_	=	0x0094
                           000094   410 _SCS	=	0x0094
                           000094   411 _TIN2	=	0x0094
                           000094   412 _UCC1	=	0x0094
                           000094   413 _AIN1	=	0x0094
                           000093   414 _TXD_	=	0x0093
                           000092   415 _RXD_	=	0x0092
                           000091   416 _T2EX	=	0x0091
                           000091   417 _CAP2	=	0x0091
                           000091   418 _TIN1	=	0x0091
                           000091   419 _VBUS2	=	0x0091
                           000091   420 _AIN0	=	0x0091
                           000090   421 _T2	=	0x0090
                           000090   422 _CAP1	=	0x0090
                           000090   423 _TIN0	=	0x0090
                           0000B7   424 _UDM	=	0x00b7
                           0000B6   425 _UDP	=	0x00b6
                           0000B5   426 _T1	=	0x00b5
                           0000B4   427 _PWM2	=	0x00b4
                           0000B4   428 _RXD1_	=	0x00b4
                           0000B4   429 _T0	=	0x00b4
                           0000B3   430 _INT1	=	0x00b3
                           0000B2   431 _TXD1_	=	0x00b2
                           0000B2   432 _INT0	=	0x00b2
                           0000B2   433 _VBUS1	=	0x00b2
                           0000B2   434 _AIN3	=	0x00b2
                           0000B1   435 _PWM2_	=	0x00b1
                           0000B1   436 _TXD	=	0x00b1
                           0000B0   437 _PWM1_	=	0x00b0
                           0000B0   438 _RXD	=	0x00b0
                           00008F   439 _TF1	=	0x008f
                           00008E   440 _TR1	=	0x008e
                           00008D   441 _TF0	=	0x008d
                           00008C   442 _TR0	=	0x008c
                           00008B   443 _IE1	=	0x008b
                           00008A   444 _IT1	=	0x008a
                           000089   445 _IE0	=	0x0089
                           000088   446 _IT0	=	0x0088
                           00009F   447 _SM0	=	0x009f
                           00009E   448 _SM1	=	0x009e
                           00009D   449 _SM2	=	0x009d
                           00009C   450 _REN	=	0x009c
                           00009B   451 _TB8	=	0x009b
                           00009A   452 _RB8	=	0x009a
                           000099   453 _TI	=	0x0099
                           000098   454 _RI	=	0x0098
                           0000CF   455 _TF2	=	0x00cf
                           0000CF   456 _CAP1F	=	0x00cf
                           0000CE   457 _EXF2	=	0x00ce
                           0000CD   458 _RCLK	=	0x00cd
                           0000CC   459 _TCLK	=	0x00cc
                           0000CB   460 _EXEN2	=	0x00cb
                           0000CA   461 _TR2	=	0x00ca
                           0000C9   462 _C_T2	=	0x00c9
                           0000C8   463 _CP_RL2	=	0x00c8
                           0000FF   464 _S0_FST_ACT	=	0x00ff
                           0000FE   465 _S0_IF_OV	=	0x00fe
                           0000FD   466 _S0_IF_FIRST	=	0x00fd
                           0000FC   467 _S0_IF_BYTE	=	0x00fc
                           0000FB   468 _S0_FREE	=	0x00fb
                           0000FA   469 _S0_T_FIFO	=	0x00fa
                           0000F8   470 _S0_R_FIFO	=	0x00f8
                           0000C7   471 _U1SM0	=	0x00c7
                           0000C5   472 _U1SMOD	=	0x00c5
                           0000C4   473 _U1REN	=	0x00c4
                           0000C3   474 _U1TB8	=	0x00c3
                           0000C2   475 _U1RB8	=	0x00c2
                           0000C1   476 _U1TI	=	0x00c1
                           0000C0   477 _U1RI	=	0x00c0
                           000087   478 _CMPO	=	0x0087
                           000086   479 _CMP_IF	=	0x0086
                           000085   480 _ADC_IF	=	0x0085
                           000084   481 _ADC_START	=	0x0084
                           000083   482 _CMP_CHAN	=	0x0083
                           000081   483 _ADC_CHAN1	=	0x0081
                           000080   484 _ADC_CHAN0	=	0x0080
                           0000DF   485 _U_IS_NAK	=	0x00df
                           0000DE   486 _U_TOG_OK	=	0x00de
                           0000DD   487 _U_SIE_FREE	=	0x00dd
                           0000DC   488 _UIF_FIFO_OV	=	0x00dc
                           0000DB   489 _UIF_HST_SOF	=	0x00db
                           0000DA   490 _UIF_SUSPEND	=	0x00da
                           0000D9   491 _UIF_TRANSFER	=	0x00d9
                           0000D8   492 _UIF_DETECT	=	0x00d8
                           0000D8   493 _UIF_BUS_RST	=	0x00d8
                                    494 ;--------------------------------------------------------
                                    495 ; overlayable register banks
                                    496 ;--------------------------------------------------------
                                    497 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        498 	.ds 8
                                    499 ;--------------------------------------------------------
                                    500 ; internal ram data
                                    501 ;--------------------------------------------------------
                                    502 	.area DSEG    (DATA)
      00000D                        503 _KeyFree::
      00000D                        504 	.ds 8
      000015                        505 _KeyBuf::
      000015                        506 	.ds 1
                                    507 ;--------------------------------------------------------
                                    508 ; overlayable items in internal ram 
                                    509 ;--------------------------------------------------------
                                    510 	.area	OSEG    (OVR,DATA)
                                    511 	.area	OSEG    (OVR,DATA)
                                    512 ;--------------------------------------------------------
                                    513 ; indirectly addressable internal ram data
                                    514 ;--------------------------------------------------------
                                    515 	.area ISEG    (DATA)
                                    516 ;--------------------------------------------------------
                                    517 ; absolute internal ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area IABS    (ABS,DATA)
                                    520 	.area IABS    (ABS,DATA)
                                    521 ;--------------------------------------------------------
                                    522 ; bit data
                                    523 ;--------------------------------------------------------
                                    524 	.area BSEG    (BIT)
                                    525 ;--------------------------------------------------------
                                    526 ; paged external ram data
                                    527 ;--------------------------------------------------------
                                    528 	.area PSEG    (PAG,XDATA)
                                    529 ;--------------------------------------------------------
                                    530 ; external ram data
                                    531 ;--------------------------------------------------------
                                    532 	.area XSEG    (XDATA)
                                    533 ;--------------------------------------------------------
                                    534 ; absolute external ram data
                                    535 ;--------------------------------------------------------
                                    536 	.area XABS    (ABS,XDATA)
                                    537 ;--------------------------------------------------------
                                    538 ; external initialized ram data
                                    539 ;--------------------------------------------------------
                                    540 	.area XISEG   (XDATA)
                                    541 	.area HOME    (CODE)
                                    542 	.area GSINIT0 (CODE)
                                    543 	.area GSINIT1 (CODE)
                                    544 	.area GSINIT2 (CODE)
                                    545 	.area GSINIT3 (CODE)
                                    546 	.area GSINIT4 (CODE)
                                    547 	.area GSINIT5 (CODE)
                                    548 	.area GSINIT  (CODE)
                                    549 	.area GSFINAL (CODE)
                                    550 	.area CSEG    (CODE)
                                    551 ;--------------------------------------------------------
                                    552 ; global & static initialisations
                                    553 ;--------------------------------------------------------
                                    554 	.area HOME    (CODE)
                                    555 	.area GSINIT  (CODE)
                                    556 	.area GSFINAL (CODE)
                                    557 	.area GSINIT  (CODE)
                                    558 ;--------------------------------------------------------
                                    559 ; Home
                                    560 ;--------------------------------------------------------
                                    561 	.area HOME    (CODE)
                                    562 	.area HOME    (CODE)
                                    563 ;--------------------------------------------------------
                                    564 ; code
                                    565 ;--------------------------------------------------------
                                    566 	.area CSEG    (CODE)
                                    567 ;------------------------------------------------------------
                                    568 ;Allocation info for local variables in function 'GetTouchKeyFree'
                                    569 ;------------------------------------------------------------
                                    570 ;i                         Allocated to registers r6 
                                    571 ;j                         Allocated to registers r5 
                                    572 ;TmpSum                    Allocated to registers r7 
                                    573 ;------------------------------------------------------------
                                    574 ;	../../include/touchkey.c:25: void GetTouchKeyFree()
                                    575 ;	-----------------------------------------
                                    576 ;	 function GetTouchKeyFree
                                    577 ;	-----------------------------------------
      000204                        578 _GetTouchKeyFree:
                           000007   579 	ar7 = 0x07
                           000006   580 	ar6 = 0x06
                           000005   581 	ar5 = 0x05
                           000004   582 	ar4 = 0x04
                           000003   583 	ar3 = 0x03
                           000002   584 	ar2 = 0x02
                           000001   585 	ar1 = 0x01
                           000000   586 	ar0 = 0x00
                                    587 ;	../../include/touchkey.c:28: uint8_t TmpSum = 0;
      000204 7F 00            [12]  588 	mov	r7,#0x00
                                    589 ;	../../include/touchkey.c:29: KeyBuf = 0;                                                                 //?????????????????????????????????
                                    590 ;	1-genFromRTrack replaced	mov	_KeyBuf,#0x00
      000206 8F 15            [24]  591 	mov	_KeyBuf,r7
                                    592 ;	../../include/touchkey.c:30: for(i=KEY_FIRST;i<(KEY_LAST+1);i++)
      000208 7E 00            [12]  593 	mov	r6,#0x00
      00020A                        594 00108$:
                                    595 ;	../../include/touchkey.c:33: TKEY_CTRL = (TKEY_CTRL & 0xF8 | i)+1;                                     //??????????????????
      00020A AD C3            [24]  596 	mov	r5,_TKEY_CTRL
      00020C 53 05 F8         [24]  597 	anl	ar5,#0xf8
      00020F 8E 04            [24]  598 	mov	ar4,r6
      000211 EC               [12]  599 	mov	a,r4
      000212 4D               [12]  600 	orl	a,r5
      000213 04               [12]  601 	inc	a
      000214 F5 C3            [12]  602 	mov	_TKEY_CTRL,a
                                    603 ;	../../include/touchkey.c:34: while(j--)
      000216 7D 05            [12]  604 	mov	r5,#0x05
      000218                        605 00104$:
      000218 8D 04            [24]  606 	mov	ar4,r5
      00021A 1D               [12]  607 	dec	r5
      00021B EC               [12]  608 	mov	a,r4
      00021C 60 0E            [24]  609 	jz	00106$
                                    610 ;	../../include/touchkey.c:36: while((TKEY_CTRL&bTKC_IF) == 0);                                      //bTKC_IF??????1???????????????????????????
      00021E                        611 00101$:
      00021E E5 C3            [12]  612 	mov	a,_TKEY_CTRL
      000220 30 E7 FB         [24]  613 	jnb	acc.7,00101$
                                    614 ;	../../include/touchkey.c:37: TmpSum += TKEY_DAT&0x0F;                                              //????????????????????????4????????????
      000223 AC C4            [24]  615 	mov	r4,((_TKEY_DAT >> 0) & 0xFF)
      000225 74 0F            [12]  616 	mov	a,#0x0f
      000227 5C               [12]  617 	anl	a,r4
      000228 2F               [12]  618 	add	a,r7
      000229 FF               [12]  619 	mov	r7,a
      00022A 80 EC            [24]  620 	sjmp	00104$
      00022C                        621 00106$:
                                    622 ;	../../include/touchkey.c:39: KeyFree[i] = TKEY_DAT&0x07F0 + TmpSum/5;                                  //??????????????? 
      00022C EE               [12]  623 	mov	a,r6
      00022D 2E               [12]  624 	add	a,r6
      00022E 24 0D            [12]  625 	add	a,#_KeyFree
      000230 F9               [12]  626 	mov	r1,a
      000231 8F 04            [24]  627 	mov	ar4,r7
      000233 7D 00            [12]  628 	mov	r5,#0x00
      000235 75 45 05         [24]  629 	mov	__divsint_PARM_2,#0x05
                                    630 ;	1-genFromRTrack replaced	mov	(__divsint_PARM_2 + 1),#0x00
      000238 8D 46            [24]  631 	mov	(__divsint_PARM_2 + 1),r5
      00023A 8C 82            [24]  632 	mov	dpl,r4
      00023C 8D 83            [24]  633 	mov	dph,r5
      00023E C0 07            [24]  634 	push	ar7
      000240 C0 06            [24]  635 	push	ar6
      000242 C0 01            [24]  636 	push	ar1
      000244 12 0C FA         [24]  637 	lcall	__divsint
      000247 E5 82            [12]  638 	mov	a,dpl
      000249 85 83 F0         [24]  639 	mov	b,dph
      00024C D0 01            [24]  640 	pop	ar1
      00024E D0 06            [24]  641 	pop	ar6
      000250 D0 07            [24]  642 	pop	ar7
      000252 24 F0            [12]  643 	add	a,#0xf0
      000254 FC               [12]  644 	mov	r4,a
      000255 74 07            [12]  645 	mov	a,#0x07
      000257 35 F0            [12]  646 	addc	a,b
      000259 FD               [12]  647 	mov	r5,a
      00025A E5 C4            [12]  648 	mov	a,((_TKEY_DAT >> 0) & 0xFF)
      00025C 52 04            [12]  649 	anl	ar4,a
      00025E E5 C5            [12]  650 	mov	a,((_TKEY_DAT >> 8) & 0xFF)
      000260 52 05            [12]  651 	anl	ar5,a
      000262 A7 04            [24]  652 	mov	@r1,ar4
      000264 09               [12]  653 	inc	r1
      000265 A7 05            [24]  654 	mov	@r1,ar5
      000267 19               [12]  655 	dec	r1
                                    656 ;	../../include/touchkey.c:30: for(i=KEY_FIRST;i<(KEY_LAST+1);i++)
      000268 0E               [12]  657 	inc	r6
      000269 BE 04 00         [24]  658 	cjne	r6,#0x04,00132$
      00026C                        659 00132$:
      00026C 40 9C            [24]  660 	jc	00108$
                                    661 ;	../../include/touchkey.c:44: }
      00026E 22               [24]  662 	ret
                                    663 ;------------------------------------------------------------
                                    664 ;Allocation info for local variables in function 'TouchKeyChannelSelect'
                                    665 ;------------------------------------------------------------
                                    666 ;ch                        Allocated to registers r7 
                                    667 ;------------------------------------------------------------
                                    668 ;	../../include/touchkey.c:55: uint8_t TouchKeyChannelSelect(uint8_t ch)
                                    669 ;	-----------------------------------------
                                    670 ;	 function TouchKeyChannelSelect
                                    671 ;	-----------------------------------------
      00026F                        672 _TouchKeyChannelSelect:
      00026F AF 82            [24]  673 	mov	r7,dpl
                                    674 ;	../../include/touchkey.c:57: if(ch < 6)
      000271 BF 06 00         [24]  675 	cjne	r7,#0x06,00109$
      000274                        676 00109$:
      000274 50 0E            [24]  677 	jnc	00102$
                                    678 ;	../../include/touchkey.c:59: TKEY_CTRL = (TKEY_CTRL & 0xF8 | ch)+1;
      000276 AE C3            [24]  679 	mov	r6,_TKEY_CTRL
      000278 53 06 F8         [24]  680 	anl	ar6,#0xf8
      00027B EF               [12]  681 	mov	a,r7
      00027C 4E               [12]  682 	orl	a,r6
      00027D 04               [12]  683 	inc	a
      00027E F5 C3            [12]  684 	mov	_TKEY_CTRL,a
                                    685 ;	../../include/touchkey.c:60: return 1;
      000280 75 82 01         [24]  686 	mov	dpl,#0x01
      000283 22               [24]  687 	ret
      000284                        688 00102$:
                                    689 ;	../../include/touchkey.c:62: return 0;
      000284 75 82 00         [24]  690 	mov	dpl,#0x00
                                    691 ;	../../include/touchkey.c:63: }
      000287 22               [24]  692 	ret
                                    693 ;------------------------------------------------------------
                                    694 ;Allocation info for local variables in function 'TouchKeyChannelQuery'
                                    695 ;------------------------------------------------------------
                                    696 ;ch                        Allocated to registers r5 
                                    697 ;KeyData                   Allocated to registers r6 r7 
                                    698 ;------------------------------------------------------------
                                    699 ;	../../include/touchkey.c:97: void TouchKeyChannelQuery()
                                    700 ;	-----------------------------------------
                                    701 ;	 function TouchKeyChannelQuery
                                    702 ;	-----------------------------------------
      000288                        703 _TouchKeyChannelQuery:
                                    704 ;	../../include/touchkey.c:102: while((TKEY_CTRL&bTKC_IF) == 0);                                          //bTKC_IF??????1???????????????????????????
      000288                        705 00101$:
      000288 E5 C3            [12]  706 	mov	a,_TKEY_CTRL
      00028A 30 E7 FB         [24]  707 	jnb	acc.7,00101$
                                    708 ;	../../include/touchkey.c:103: KeyData = TKEY_DAT;                                                       //??????87us,????????????
      00028D AE C4            [24]  709 	mov	r6,((_TKEY_DAT >> 0) & 0xFF)
      00028F AF C5            [24]  710 	mov	r7,((_TKEY_DAT >> 8) & 0xFF)
                                    711 ;	../../include/touchkey.c:104: ch = TKEY_CTRL&7;                                                         //????????????????????????
      000291 E5 C3            [12]  712 	mov	a,_TKEY_CTRL
      000293 54 07            [12]  713 	anl	a,#0x07
                                    714 ;	../../include/touchkey.c:105: if ( ch > KEY_LAST ){
      000295 FD               [12]  715 	mov  r5,a
      000296 24 FC            [12]  716 	add	a,#0xff - 0x03
      000298 50 05            [24]  717 	jnc	00105$
                                    718 ;	../../include/touchkey.c:106: TKEY_CTRL = TKEY_CTRL & 0xF8 | KEY_FIRST;                              //????????????????????????
      00029A 53 C3 F8         [24]  719 	anl	_TKEY_CTRL,#0xf8
      00029D 80 05            [24]  720 	sjmp	00106$
      00029F                        721 00105$:
                                    722 ;	../../include/touchkey.c:110: TKEY_CTRL ++;                                                          //??????????????????????????????
      00029F E5 C3            [12]  723 	mov	a,_TKEY_CTRL
      0002A1 04               [12]  724 	inc	a
      0002A2 F5 C3            [12]  725 	mov	_TKEY_CTRL,a
      0002A4                        726 00106$:
                                    727 ;	../../include/touchkey.c:112: if ( KeyData < (KeyFree[ch-KEY_FIRST] - KEY_ACT) )                        //????????????????????????????????????   
      0002A4 8D 04            [24]  728 	mov	ar4,r5
      0002A6 EC               [12]  729 	mov	a,r4
      0002A7 2C               [12]  730 	add	a,r4
      0002A8 24 0D            [12]  731 	add	a,#_KeyFree
      0002AA F9               [12]  732 	mov	r1,a
      0002AB 87 03            [24]  733 	mov	ar3,@r1
      0002AD 09               [12]  734 	inc	r1
      0002AE 87 04            [24]  735 	mov	ar4,@r1
      0002B0 EB               [12]  736 	mov	a,r3
      0002B1 24 EC            [12]  737 	add	a,#0xec
      0002B3 FB               [12]  738 	mov	r3,a
      0002B4 EC               [12]  739 	mov	a,r4
      0002B5 34 FF            [12]  740 	addc	a,#0xff
      0002B7 FC               [12]  741 	mov	r4,a
      0002B8 C3               [12]  742 	clr	c
      0002B9 EE               [12]  743 	mov	a,r6
      0002BA 9B               [12]  744 	subb	a,r3
      0002BB EF               [12]  745 	mov	a,r7
      0002BC 9C               [12]  746 	subb	a,r4
      0002BD 50 02            [24]  747 	jnc	00109$
                                    748 ;	../../include/touchkey.c:114: KeyBuf=ch;                                                            //????????????????????????????????????????????????????????????main????????????
      0002BF 8D 15            [24]  749 	mov	_KeyBuf,r5
      0002C1                        750 00109$:
                                    751 ;	../../include/touchkey.c:116: }
      0002C1 22               [24]  752 	ret
                                    753 	.area CSEG    (CODE)
                                    754 	.area CONST   (CODE)
                                    755 	.area XINIT   (CODE)
                                    756 	.area CABS    (ABS,CODE)
