                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module timer
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _lcd_data
                                     12 	.globl _lcd_cmd
                                     13 	.globl _TF1
                                     14 	.globl _TR1
                                     15 	.globl _TF0
                                     16 	.globl _TR0
                                     17 	.globl _IE1
                                     18 	.globl _IT1
                                     19 	.globl _IE0
                                     20 	.globl _IT0
                                     21 	.globl _SM0
                                     22 	.globl _SM1
                                     23 	.globl _SM2
                                     24 	.globl _REN
                                     25 	.globl _TB8
                                     26 	.globl _RB8
                                     27 	.globl _TI
                                     28 	.globl _RI
                                     29 	.globl _CY
                                     30 	.globl _AC
                                     31 	.globl _F0
                                     32 	.globl _RS1
                                     33 	.globl _RS0
                                     34 	.globl _OV
                                     35 	.globl _F1
                                     36 	.globl _P
                                     37 	.globl _RD
                                     38 	.globl _WR
                                     39 	.globl _T1
                                     40 	.globl _T0
                                     41 	.globl _INT1
                                     42 	.globl _INT0
                                     43 	.globl _TXD0
                                     44 	.globl _TXD
                                     45 	.globl _RXD0
                                     46 	.globl _RXD
                                     47 	.globl _P3_7
                                     48 	.globl _P3_6
                                     49 	.globl _P3_5
                                     50 	.globl _P3_4
                                     51 	.globl _P3_3
                                     52 	.globl _P3_2
                                     53 	.globl _P3_1
                                     54 	.globl _P3_0
                                     55 	.globl _P2_7
                                     56 	.globl _P2_6
                                     57 	.globl _P2_5
                                     58 	.globl _P2_4
                                     59 	.globl _P2_3
                                     60 	.globl _P2_2
                                     61 	.globl _P2_1
                                     62 	.globl _P2_0
                                     63 	.globl _P1_7
                                     64 	.globl _P1_6
                                     65 	.globl _P1_5
                                     66 	.globl _P1_4
                                     67 	.globl _P1_3
                                     68 	.globl _P1_2
                                     69 	.globl _P1_1
                                     70 	.globl _P1_0
                                     71 	.globl _P0_7
                                     72 	.globl _P0_6
                                     73 	.globl _P0_5
                                     74 	.globl _P0_4
                                     75 	.globl _P0_3
                                     76 	.globl _P0_2
                                     77 	.globl _P0_1
                                     78 	.globl _P0_0
                                     79 	.globl _PS
                                     80 	.globl _PT1
                                     81 	.globl _PX1
                                     82 	.globl _PT0
                                     83 	.globl _PX0
                                     84 	.globl _EA
                                     85 	.globl _ES
                                     86 	.globl _ET1
                                     87 	.globl _EX1
                                     88 	.globl _ET0
                                     89 	.globl _EX0
                                     90 	.globl _BREG_F7
                                     91 	.globl _BREG_F6
                                     92 	.globl _BREG_F5
                                     93 	.globl _BREG_F4
                                     94 	.globl _BREG_F3
                                     95 	.globl _BREG_F2
                                     96 	.globl _BREG_F1
                                     97 	.globl _BREG_F0
                                     98 	.globl _P5_7
                                     99 	.globl _P5_6
                                    100 	.globl _P5_5
                                    101 	.globl _P5_4
                                    102 	.globl _P5_3
                                    103 	.globl _P5_2
                                    104 	.globl _P5_1
                                    105 	.globl _P5_0
                                    106 	.globl _P4_7
                                    107 	.globl _P4_6
                                    108 	.globl _P4_5
                                    109 	.globl _P4_4
                                    110 	.globl _P4_3
                                    111 	.globl _P4_2
                                    112 	.globl _P4_1
                                    113 	.globl _P4_0
                                    114 	.globl _PX0L
                                    115 	.globl _PT0L
                                    116 	.globl _PX1L
                                    117 	.globl _PT1L
                                    118 	.globl _PSL
                                    119 	.globl _PT2L
                                    120 	.globl _PPCL
                                    121 	.globl _EC
                                    122 	.globl _CCF0
                                    123 	.globl _CCF1
                                    124 	.globl _CCF2
                                    125 	.globl _CCF3
                                    126 	.globl _CCF4
                                    127 	.globl _CR
                                    128 	.globl _CF
                                    129 	.globl _TF2
                                    130 	.globl _EXF2
                                    131 	.globl _RCLK
                                    132 	.globl _TCLK
                                    133 	.globl _EXEN2
                                    134 	.globl _TR2
                                    135 	.globl _C_T2
                                    136 	.globl _CP_RL2
                                    137 	.globl _T2CON_7
                                    138 	.globl _T2CON_6
                                    139 	.globl _T2CON_5
                                    140 	.globl _T2CON_4
                                    141 	.globl _T2CON_3
                                    142 	.globl _T2CON_2
                                    143 	.globl _T2CON_1
                                    144 	.globl _T2CON_0
                                    145 	.globl _PT2
                                    146 	.globl _ET2
                                    147 	.globl _TMOD
                                    148 	.globl _TL1
                                    149 	.globl _TL0
                                    150 	.globl _TH1
                                    151 	.globl _TH0
                                    152 	.globl _TCON
                                    153 	.globl _SP
                                    154 	.globl _SCON
                                    155 	.globl _SBUF0
                                    156 	.globl _SBUF
                                    157 	.globl _PSW
                                    158 	.globl _PCON
                                    159 	.globl _P3
                                    160 	.globl _P2
                                    161 	.globl _P1
                                    162 	.globl _P0
                                    163 	.globl _IP
                                    164 	.globl _IE
                                    165 	.globl _DP0L
                                    166 	.globl _DPL
                                    167 	.globl _DP0H
                                    168 	.globl _DPH
                                    169 	.globl _B
                                    170 	.globl _ACC
                                    171 	.globl _EECON
                                    172 	.globl _KBF
                                    173 	.globl _KBE
                                    174 	.globl _KBLS
                                    175 	.globl _BRL
                                    176 	.globl _BDRCON
                                    177 	.globl _T2MOD
                                    178 	.globl _SPDAT
                                    179 	.globl _SPSTA
                                    180 	.globl _SPCON
                                    181 	.globl _SADEN
                                    182 	.globl _SADDR
                                    183 	.globl _WDTPRG
                                    184 	.globl _WDTRST
                                    185 	.globl _P5
                                    186 	.globl _P4
                                    187 	.globl _IPH1
                                    188 	.globl _IPL1
                                    189 	.globl _IPH0
                                    190 	.globl _IPL0
                                    191 	.globl _IEN1
                                    192 	.globl _IEN0
                                    193 	.globl _CMOD
                                    194 	.globl _CL
                                    195 	.globl _CH
                                    196 	.globl _CCON
                                    197 	.globl _CCAPM4
                                    198 	.globl _CCAPM3
                                    199 	.globl _CCAPM2
                                    200 	.globl _CCAPM1
                                    201 	.globl _CCAPM0
                                    202 	.globl _CCAP4L
                                    203 	.globl _CCAP3L
                                    204 	.globl _CCAP2L
                                    205 	.globl _CCAP1L
                                    206 	.globl _CCAP0L
                                    207 	.globl _CCAP4H
                                    208 	.globl _CCAP3H
                                    209 	.globl _CCAP2H
                                    210 	.globl _CCAP1H
                                    211 	.globl _CCAP0H
                                    212 	.globl _CKCON1
                                    213 	.globl _CKCON0
                                    214 	.globl _CKRL
                                    215 	.globl _AUXR1
                                    216 	.globl _AUXR
                                    217 	.globl _TH2
                                    218 	.globl _TL2
                                    219 	.globl _RCAP2H
                                    220 	.globl _RCAP2L
                                    221 	.globl _T2CON
                                    222 	.globl _isr_count
                                    223 	.globl _ML
                                    224 	.globl _MH
                                    225 	.globl _SL
                                    226 	.globl _SH
                                    227 	.globl _MS
                                    228 	.globl _Init_timer
                                    229 	.globl _put_timer
                                    230 	.globl _reset_timer
                                    231 	.globl _timer0_ISR
                                    232 ;--------------------------------------------------------
                                    233 ; special function registers
                                    234 ;--------------------------------------------------------
                                    235 	.area RSEG    (ABS,DATA)
      000000                        236 	.org 0x0000
                           0000C8   237 _T2CON	=	0x00c8
                           0000CA   238 _RCAP2L	=	0x00ca
                           0000CB   239 _RCAP2H	=	0x00cb
                           0000CC   240 _TL2	=	0x00cc
                           0000CD   241 _TH2	=	0x00cd
                           00008E   242 _AUXR	=	0x008e
                           0000A2   243 _AUXR1	=	0x00a2
                           000097   244 _CKRL	=	0x0097
                           00008F   245 _CKCON0	=	0x008f
                           0000AF   246 _CKCON1	=	0x00af
                           0000FA   247 _CCAP0H	=	0x00fa
                           0000FB   248 _CCAP1H	=	0x00fb
                           0000FC   249 _CCAP2H	=	0x00fc
                           0000FD   250 _CCAP3H	=	0x00fd
                           0000FE   251 _CCAP4H	=	0x00fe
                           0000EA   252 _CCAP0L	=	0x00ea
                           0000EB   253 _CCAP1L	=	0x00eb
                           0000EC   254 _CCAP2L	=	0x00ec
                           0000ED   255 _CCAP3L	=	0x00ed
                           0000EE   256 _CCAP4L	=	0x00ee
                           0000DA   257 _CCAPM0	=	0x00da
                           0000DB   258 _CCAPM1	=	0x00db
                           0000DC   259 _CCAPM2	=	0x00dc
                           0000DD   260 _CCAPM3	=	0x00dd
                           0000DE   261 _CCAPM4	=	0x00de
                           0000D8   262 _CCON	=	0x00d8
                           0000F9   263 _CH	=	0x00f9
                           0000E9   264 _CL	=	0x00e9
                           0000D9   265 _CMOD	=	0x00d9
                           0000A8   266 _IEN0	=	0x00a8
                           0000B1   267 _IEN1	=	0x00b1
                           0000B8   268 _IPL0	=	0x00b8
                           0000B7   269 _IPH0	=	0x00b7
                           0000B2   270 _IPL1	=	0x00b2
                           0000B3   271 _IPH1	=	0x00b3
                           0000C0   272 _P4	=	0x00c0
                           0000E8   273 _P5	=	0x00e8
                           0000A6   274 _WDTRST	=	0x00a6
                           0000A7   275 _WDTPRG	=	0x00a7
                           0000A9   276 _SADDR	=	0x00a9
                           0000B9   277 _SADEN	=	0x00b9
                           0000C3   278 _SPCON	=	0x00c3
                           0000C4   279 _SPSTA	=	0x00c4
                           0000C5   280 _SPDAT	=	0x00c5
                           0000C9   281 _T2MOD	=	0x00c9
                           00009B   282 _BDRCON	=	0x009b
                           00009A   283 _BRL	=	0x009a
                           00009C   284 _KBLS	=	0x009c
                           00009D   285 _KBE	=	0x009d
                           00009E   286 _KBF	=	0x009e
                           0000D2   287 _EECON	=	0x00d2
                           0000E0   288 _ACC	=	0x00e0
                           0000F0   289 _B	=	0x00f0
                           000083   290 _DPH	=	0x0083
                           000083   291 _DP0H	=	0x0083
                           000082   292 _DPL	=	0x0082
                           000082   293 _DP0L	=	0x0082
                           0000A8   294 _IE	=	0x00a8
                           0000B8   295 _IP	=	0x00b8
                           000080   296 _P0	=	0x0080
                           000090   297 _P1	=	0x0090
                           0000A0   298 _P2	=	0x00a0
                           0000B0   299 _P3	=	0x00b0
                           000087   300 _PCON	=	0x0087
                           0000D0   301 _PSW	=	0x00d0
                           000099   302 _SBUF	=	0x0099
                           000099   303 _SBUF0	=	0x0099
                           000098   304 _SCON	=	0x0098
                           000081   305 _SP	=	0x0081
                           000088   306 _TCON	=	0x0088
                           00008C   307 _TH0	=	0x008c
                           00008D   308 _TH1	=	0x008d
                           00008A   309 _TL0	=	0x008a
                           00008B   310 _TL1	=	0x008b
                           000089   311 _TMOD	=	0x0089
                                    312 ;--------------------------------------------------------
                                    313 ; special function bits
                                    314 ;--------------------------------------------------------
                                    315 	.area RSEG    (ABS,DATA)
      000000                        316 	.org 0x0000
                           0000AD   317 _ET2	=	0x00ad
                           0000BD   318 _PT2	=	0x00bd
                           0000C8   319 _T2CON_0	=	0x00c8
                           0000C9   320 _T2CON_1	=	0x00c9
                           0000CA   321 _T2CON_2	=	0x00ca
                           0000CB   322 _T2CON_3	=	0x00cb
                           0000CC   323 _T2CON_4	=	0x00cc
                           0000CD   324 _T2CON_5	=	0x00cd
                           0000CE   325 _T2CON_6	=	0x00ce
                           0000CF   326 _T2CON_7	=	0x00cf
                           0000C8   327 _CP_RL2	=	0x00c8
                           0000C9   328 _C_T2	=	0x00c9
                           0000CA   329 _TR2	=	0x00ca
                           0000CB   330 _EXEN2	=	0x00cb
                           0000CC   331 _TCLK	=	0x00cc
                           0000CD   332 _RCLK	=	0x00cd
                           0000CE   333 _EXF2	=	0x00ce
                           0000CF   334 _TF2	=	0x00cf
                           0000DF   335 _CF	=	0x00df
                           0000DE   336 _CR	=	0x00de
                           0000DC   337 _CCF4	=	0x00dc
                           0000DB   338 _CCF3	=	0x00db
                           0000DA   339 _CCF2	=	0x00da
                           0000D9   340 _CCF1	=	0x00d9
                           0000D8   341 _CCF0	=	0x00d8
                           0000AE   342 _EC	=	0x00ae
                           0000BE   343 _PPCL	=	0x00be
                           0000BD   344 _PT2L	=	0x00bd
                           0000BC   345 _PSL	=	0x00bc
                           0000BB   346 _PT1L	=	0x00bb
                           0000BA   347 _PX1L	=	0x00ba
                           0000B9   348 _PT0L	=	0x00b9
                           0000B8   349 _PX0L	=	0x00b8
                           0000C0   350 _P4_0	=	0x00c0
                           0000C1   351 _P4_1	=	0x00c1
                           0000C2   352 _P4_2	=	0x00c2
                           0000C3   353 _P4_3	=	0x00c3
                           0000C4   354 _P4_4	=	0x00c4
                           0000C5   355 _P4_5	=	0x00c5
                           0000C6   356 _P4_6	=	0x00c6
                           0000C7   357 _P4_7	=	0x00c7
                           0000E8   358 _P5_0	=	0x00e8
                           0000E9   359 _P5_1	=	0x00e9
                           0000EA   360 _P5_2	=	0x00ea
                           0000EB   361 _P5_3	=	0x00eb
                           0000EC   362 _P5_4	=	0x00ec
                           0000ED   363 _P5_5	=	0x00ed
                           0000EE   364 _P5_6	=	0x00ee
                           0000EF   365 _P5_7	=	0x00ef
                           0000F0   366 _BREG_F0	=	0x00f0
                           0000F1   367 _BREG_F1	=	0x00f1
                           0000F2   368 _BREG_F2	=	0x00f2
                           0000F3   369 _BREG_F3	=	0x00f3
                           0000F4   370 _BREG_F4	=	0x00f4
                           0000F5   371 _BREG_F5	=	0x00f5
                           0000F6   372 _BREG_F6	=	0x00f6
                           0000F7   373 _BREG_F7	=	0x00f7
                           0000A8   374 _EX0	=	0x00a8
                           0000A9   375 _ET0	=	0x00a9
                           0000AA   376 _EX1	=	0x00aa
                           0000AB   377 _ET1	=	0x00ab
                           0000AC   378 _ES	=	0x00ac
                           0000AF   379 _EA	=	0x00af
                           0000B8   380 _PX0	=	0x00b8
                           0000B9   381 _PT0	=	0x00b9
                           0000BA   382 _PX1	=	0x00ba
                           0000BB   383 _PT1	=	0x00bb
                           0000BC   384 _PS	=	0x00bc
                           000080   385 _P0_0	=	0x0080
                           000081   386 _P0_1	=	0x0081
                           000082   387 _P0_2	=	0x0082
                           000083   388 _P0_3	=	0x0083
                           000084   389 _P0_4	=	0x0084
                           000085   390 _P0_5	=	0x0085
                           000086   391 _P0_6	=	0x0086
                           000087   392 _P0_7	=	0x0087
                           000090   393 _P1_0	=	0x0090
                           000091   394 _P1_1	=	0x0091
                           000092   395 _P1_2	=	0x0092
                           000093   396 _P1_3	=	0x0093
                           000094   397 _P1_4	=	0x0094
                           000095   398 _P1_5	=	0x0095
                           000096   399 _P1_6	=	0x0096
                           000097   400 _P1_7	=	0x0097
                           0000A0   401 _P2_0	=	0x00a0
                           0000A1   402 _P2_1	=	0x00a1
                           0000A2   403 _P2_2	=	0x00a2
                           0000A3   404 _P2_3	=	0x00a3
                           0000A4   405 _P2_4	=	0x00a4
                           0000A5   406 _P2_5	=	0x00a5
                           0000A6   407 _P2_6	=	0x00a6
                           0000A7   408 _P2_7	=	0x00a7
                           0000B0   409 _P3_0	=	0x00b0
                           0000B1   410 _P3_1	=	0x00b1
                           0000B2   411 _P3_2	=	0x00b2
                           0000B3   412 _P3_3	=	0x00b3
                           0000B4   413 _P3_4	=	0x00b4
                           0000B5   414 _P3_5	=	0x00b5
                           0000B6   415 _P3_6	=	0x00b6
                           0000B7   416 _P3_7	=	0x00b7
                           0000B0   417 _RXD	=	0x00b0
                           0000B0   418 _RXD0	=	0x00b0
                           0000B1   419 _TXD	=	0x00b1
                           0000B1   420 _TXD0	=	0x00b1
                           0000B2   421 _INT0	=	0x00b2
                           0000B3   422 _INT1	=	0x00b3
                           0000B4   423 _T0	=	0x00b4
                           0000B5   424 _T1	=	0x00b5
                           0000B6   425 _WR	=	0x00b6
                           0000B7   426 _RD	=	0x00b7
                           0000D0   427 _P	=	0x00d0
                           0000D1   428 _F1	=	0x00d1
                           0000D2   429 _OV	=	0x00d2
                           0000D3   430 _RS0	=	0x00d3
                           0000D4   431 _RS1	=	0x00d4
                           0000D5   432 _F0	=	0x00d5
                           0000D6   433 _AC	=	0x00d6
                           0000D7   434 _CY	=	0x00d7
                           000098   435 _RI	=	0x0098
                           000099   436 _TI	=	0x0099
                           00009A   437 _RB8	=	0x009a
                           00009B   438 _TB8	=	0x009b
                           00009C   439 _REN	=	0x009c
                           00009D   440 _SM2	=	0x009d
                           00009E   441 _SM1	=	0x009e
                           00009F   442 _SM0	=	0x009f
                           000088   443 _IT0	=	0x0088
                           000089   444 _IE0	=	0x0089
                           00008A   445 _IT1	=	0x008a
                           00008B   446 _IE1	=	0x008b
                           00008C   447 _TR0	=	0x008c
                           00008D   448 _TF0	=	0x008d
                           00008E   449 _TR1	=	0x008e
                           00008F   450 _TF1	=	0x008f
                                    451 ;--------------------------------------------------------
                                    452 ; overlayable register banks
                                    453 ;--------------------------------------------------------
                                    454 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        455 	.ds 8
                                    456 ;--------------------------------------------------------
                                    457 ; overlayable bit register bank
                                    458 ;--------------------------------------------------------
                                    459 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        460 bits:
      000020                        461 	.ds 1
                           008000   462 	b0 = bits[0]
                           008100   463 	b1 = bits[1]
                           008200   464 	b2 = bits[2]
                           008300   465 	b3 = bits[3]
                           008400   466 	b4 = bits[4]
                           008500   467 	b5 = bits[5]
                           008600   468 	b6 = bits[6]
                           008700   469 	b7 = bits[7]
                                    470 ;--------------------------------------------------------
                                    471 ; internal ram data
                                    472 ;--------------------------------------------------------
                                    473 	.area DSEG    (DATA)
                                    474 ;--------------------------------------------------------
                                    475 ; overlayable items in internal ram 
                                    476 ;--------------------------------------------------------
                                    477 ;--------------------------------------------------------
                                    478 ; indirectly addressable internal ram data
                                    479 ;--------------------------------------------------------
                                    480 	.area ISEG    (DATA)
                                    481 ;--------------------------------------------------------
                                    482 ; absolute internal ram data
                                    483 ;--------------------------------------------------------
                                    484 	.area IABS    (ABS,DATA)
                                    485 	.area IABS    (ABS,DATA)
                                    486 ;--------------------------------------------------------
                                    487 ; bit data
                                    488 ;--------------------------------------------------------
                                    489 	.area BSEG    (BIT)
                                    490 ;--------------------------------------------------------
                                    491 ; paged external ram data
                                    492 ;--------------------------------------------------------
                                    493 	.area PSEG    (PAG,XDATA)
                                    494 ;--------------------------------------------------------
                                    495 ; external ram data
                                    496 ;--------------------------------------------------------
                                    497 	.area XSEG    (XDATA)
      000008                        498 _MS::
      000008                        499 	.ds 1
      000009                        500 _SH::
      000009                        501 	.ds 1
      00000A                        502 _SL::
      00000A                        503 	.ds 1
      00000B                        504 _MH::
      00000B                        505 	.ds 1
      00000C                        506 _ML::
      00000C                        507 	.ds 1
                                    508 ;--------------------------------------------------------
                                    509 ; absolute external ram data
                                    510 ;--------------------------------------------------------
                                    511 	.area XABS    (ABS,XDATA)
                                    512 ;--------------------------------------------------------
                                    513 ; external initialized ram data
                                    514 ;--------------------------------------------------------
                                    515 	.area XISEG   (XDATA)
      000024                        516 _isr_count::
      000024                        517 	.ds 2
                                    518 	.area HOME    (CODE)
                                    519 	.area GSINIT0 (CODE)
                                    520 	.area GSINIT1 (CODE)
                                    521 	.area GSINIT2 (CODE)
                                    522 	.area GSINIT3 (CODE)
                                    523 	.area GSINIT4 (CODE)
                                    524 	.area GSINIT5 (CODE)
                                    525 	.area GSINIT  (CODE)
                                    526 	.area GSFINAL (CODE)
                                    527 	.area CSEG    (CODE)
                                    528 ;--------------------------------------------------------
                                    529 ; global & static initialisations
                                    530 ;--------------------------------------------------------
                                    531 	.area HOME    (CODE)
                                    532 	.area GSINIT  (CODE)
                                    533 	.area GSFINAL (CODE)
                                    534 	.area GSINIT  (CODE)
                                    535 ;--------------------------------------------------------
                                    536 ; Home
                                    537 ;--------------------------------------------------------
                                    538 	.area HOME    (CODE)
                                    539 	.area HOME    (CODE)
                                    540 ;--------------------------------------------------------
                                    541 ; code
                                    542 ;--------------------------------------------------------
                                    543 	.area CSEG    (CODE)
                                    544 ;------------------------------------------------------------
                                    545 ;Allocation info for local variables in function 'Init_timer'
                                    546 ;------------------------------------------------------------
                                    547 ;MS                        Allocated with name '_Init_timer_MS_65536_51'
                                    548 ;MH                        Allocated with name '_Init_timer_MH_65536_51'
                                    549 ;ML                        Allocated with name '_Init_timer_ML_65536_51'
                                    550 ;SH                        Allocated with name '_Init_timer_SH_65536_51'
                                    551 ;SL                        Allocated with name '_Init_timer_SL_65536_51'
                                    552 ;------------------------------------------------------------
                                    553 ;	timer.c:34: void Init_timer(void)
                                    554 ;	-----------------------------------------
                                    555 ;	 function Init_timer
                                    556 ;	-----------------------------------------
      002199                        557 _Init_timer:
                           000007   558 	ar7 = 0x07
                           000006   559 	ar6 = 0x06
                           000005   560 	ar5 = 0x05
                           000004   561 	ar4 = 0x04
                           000003   562 	ar3 = 0x03
                           000002   563 	ar2 = 0x02
                           000001   564 	ar1 = 0x01
                           000000   565 	ar0 = 0x00
                                    566 ;	timer.c:41: isr_count=0;
      002199 90 00 24         [24]  567 	mov	dptr,#_isr_count
      00219C E4               [12]  568 	clr	a
      00219D F0               [24]  569 	movx	@dptr,a
      00219E A3               [24]  570 	inc	dptr
      00219F F0               [24]  571 	movx	@dptr,a
                                    572 ;	timer.c:43: TMOD |= 0x01;
      0021A0 43 89 01         [24]  573 	orl	_TMOD,#0x01
                                    574 ;	timer.c:44: IE |= 0x82;
      0021A3 43 A8 82         [24]  575 	orl	_IE,#0x82
                                    576 ;	timer.c:45: TH0 = 0x4B;
      0021A6 75 8C 4B         [24]  577 	mov	_TH0,#0x4b
                                    578 ;	timer.c:46: TL0 = 0xFD;
      0021A9 75 8A FD         [24]  579 	mov	_TL0,#0xfd
                                    580 ;	timer.c:47: TF0 = 0;
                                    581 ;	assignBit
      0021AC C2 8D            [12]  582 	clr	_TF0
                                    583 ;	timer.c:48: TR0 = 1;
                                    584 ;	assignBit
      0021AE D2 8C            [12]  585 	setb	_TR0
                                    586 ;	timer.c:50: }
      0021B0 22               [24]  587 	ret
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'put_timer'
                                    590 ;------------------------------------------------------------
                                    591 ;	timer.c:62: void put_timer(void)
                                    592 ;	-----------------------------------------
                                    593 ;	 function put_timer
                                    594 ;	-----------------------------------------
      0021B1                        595 _put_timer:
                                    596 ;	timer.c:66: if(isr_count == 2){
      0021B1 90 00 24         [24]  597 	mov	dptr,#_isr_count
      0021B4 E0               [24]  598 	movx	a,@dptr
      0021B5 FE               [12]  599 	mov	r6,a
      0021B6 A3               [24]  600 	inc	dptr
      0021B7 E0               [24]  601 	movx	a,@dptr
      0021B8 FF               [12]  602 	mov	r7,a
      0021B9 BE 02 0A         [24]  603 	cjne	r6,#0x02,00102$
      0021BC BF 00 07         [24]  604 	cjne	r7,#0x00,00102$
                                    605 ;	timer.c:67: MS++;
      0021BF 90 00 08         [24]  606 	mov	dptr,#_MS
      0021C2 E0               [24]  607 	movx	a,@dptr
      0021C3 24 01            [12]  608 	add	a,#0x01
      0021C5 F0               [24]  609 	movx	@dptr,a
      0021C6                        610 00102$:
                                    611 ;	timer.c:68: }if(MS==10){
      0021C6 90 00 08         [24]  612 	mov	dptr,#_MS
      0021C9 E0               [24]  613 	movx	a,@dptr
      0021CA FF               [12]  614 	mov	r7,a
      0021CB BF 0A 0C         [24]  615 	cjne	r7,#0x0a,00104$
                                    616 ;	timer.c:69: MS=0;
      0021CE 90 00 08         [24]  617 	mov	dptr,#_MS
      0021D1 E4               [12]  618 	clr	a
      0021D2 F0               [24]  619 	movx	@dptr,a
                                    620 ;	timer.c:70: SL++;
      0021D3 90 00 0A         [24]  621 	mov	dptr,#_SL
      0021D6 E0               [24]  622 	movx	a,@dptr
      0021D7 24 01            [12]  623 	add	a,#0x01
      0021D9 F0               [24]  624 	movx	@dptr,a
      0021DA                        625 00104$:
                                    626 ;	timer.c:71: }if(SL==10){
      0021DA 90 00 0A         [24]  627 	mov	dptr,#_SL
      0021DD E0               [24]  628 	movx	a,@dptr
      0021DE FF               [12]  629 	mov	r7,a
      0021DF BF 0A 0C         [24]  630 	cjne	r7,#0x0a,00106$
                                    631 ;	timer.c:72: SL=0;
      0021E2 90 00 0A         [24]  632 	mov	dptr,#_SL
      0021E5 E4               [12]  633 	clr	a
      0021E6 F0               [24]  634 	movx	@dptr,a
                                    635 ;	timer.c:73: SH++;
      0021E7 90 00 09         [24]  636 	mov	dptr,#_SH
      0021EA E0               [24]  637 	movx	a,@dptr
      0021EB 24 01            [12]  638 	add	a,#0x01
      0021ED F0               [24]  639 	movx	@dptr,a
      0021EE                        640 00106$:
                                    641 ;	timer.c:74: }if(SH==6){
      0021EE 90 00 09         [24]  642 	mov	dptr,#_SH
      0021F1 E0               [24]  643 	movx	a,@dptr
      0021F2 FF               [12]  644 	mov	r7,a
      0021F3 BF 06 0C         [24]  645 	cjne	r7,#0x06,00108$
                                    646 ;	timer.c:75: SH=0;
      0021F6 90 00 09         [24]  647 	mov	dptr,#_SH
      0021F9 E4               [12]  648 	clr	a
      0021FA F0               [24]  649 	movx	@dptr,a
                                    650 ;	timer.c:76: ML++;
      0021FB 90 00 0C         [24]  651 	mov	dptr,#_ML
      0021FE E0               [24]  652 	movx	a,@dptr
      0021FF 24 01            [12]  653 	add	a,#0x01
      002201 F0               [24]  654 	movx	@dptr,a
      002202                        655 00108$:
                                    656 ;	timer.c:77: }if(ML==10){
      002202 90 00 0C         [24]  657 	mov	dptr,#_ML
      002205 E0               [24]  658 	movx	a,@dptr
      002206 FF               [12]  659 	mov	r7,a
      002207 BF 0A 0C         [24]  660 	cjne	r7,#0x0a,00110$
                                    661 ;	timer.c:78: ML=0;
      00220A 90 00 0C         [24]  662 	mov	dptr,#_ML
      00220D E4               [12]  663 	clr	a
      00220E F0               [24]  664 	movx	@dptr,a
                                    665 ;	timer.c:79: MH++;
      00220F 90 00 0B         [24]  666 	mov	dptr,#_MH
      002212 E0               [24]  667 	movx	a,@dptr
      002213 24 01            [12]  668 	add	a,#0x01
      002215 F0               [24]  669 	movx	@dptr,a
      002216                        670 00110$:
                                    671 ;	timer.c:80: }if(MH==6){
      002216 90 00 0B         [24]  672 	mov	dptr,#_MH
      002219 E0               [24]  673 	movx	a,@dptr
      00221A FF               [12]  674 	mov	r7,a
      00221B BF 06 05         [24]  675 	cjne	r7,#0x06,00112$
                                    676 ;	timer.c:81: MH=0;
      00221E 90 00 0B         [24]  677 	mov	dptr,#_MH
      002221 E4               [12]  678 	clr	a
      002222 F0               [24]  679 	movx	@dptr,a
      002223                        680 00112$:
                                    681 ;	timer.c:85: lcd_cmd(0x90);
      002223 75 82 90         [24]  682 	mov	dpl,#0x90
      002226 12 20 A4         [24]  683 	lcall	_lcd_cmd
                                    684 ;	timer.c:86: lcd_data(MH|0x30);
      002229 90 00 0B         [24]  685 	mov	dptr,#_MH
      00222C E0               [24]  686 	movx	a,@dptr
      00222D 44 30            [12]  687 	orl	a,#0x30
      00222F F5 82            [12]  688 	mov	dpl,a
      002231 12 20 CD         [24]  689 	lcall	_lcd_data
                                    690 ;	timer.c:87: lcd_data(ML|0x30);
      002234 90 00 0C         [24]  691 	mov	dptr,#_ML
      002237 E0               [24]  692 	movx	a,@dptr
      002238 44 30            [12]  693 	orl	a,#0x30
      00223A F5 82            [12]  694 	mov	dpl,a
      00223C 12 20 CD         [24]  695 	lcall	_lcd_data
                                    696 ;	timer.c:89: lcd_data(':');
      00223F 75 82 3A         [24]  697 	mov	dpl,#0x3a
      002242 12 20 CD         [24]  698 	lcall	_lcd_data
                                    699 ;	timer.c:90: lcd_data(SH|0x30);
      002245 90 00 09         [24]  700 	mov	dptr,#_SH
      002248 E0               [24]  701 	movx	a,@dptr
      002249 44 30            [12]  702 	orl	a,#0x30
      00224B F5 82            [12]  703 	mov	dpl,a
      00224D 12 20 CD         [24]  704 	lcall	_lcd_data
                                    705 ;	timer.c:92: lcd_data(SL|0x30);
      002250 90 00 0A         [24]  706 	mov	dptr,#_SL
      002253 E0               [24]  707 	movx	a,@dptr
      002254 44 30            [12]  708 	orl	a,#0x30
      002256 F5 82            [12]  709 	mov	dpl,a
      002258 12 20 CD         [24]  710 	lcall	_lcd_data
                                    711 ;	timer.c:93: lcd_data('.');
      00225B 75 82 2E         [24]  712 	mov	dpl,#0x2e
      00225E 12 20 CD         [24]  713 	lcall	_lcd_data
                                    714 ;	timer.c:95: lcd_data(MS | 0x30);
      002261 90 00 08         [24]  715 	mov	dptr,#_MS
      002264 E0               [24]  716 	movx	a,@dptr
      002265 44 30            [12]  717 	orl	a,#0x30
      002267 F5 82            [12]  718 	mov	dpl,a
                                    719 ;	timer.c:99: }
      002269 02 20 CD         [24]  720 	ljmp	_lcd_data
                                    721 ;------------------------------------------------------------
                                    722 ;Allocation info for local variables in function 'reset_timer'
                                    723 ;------------------------------------------------------------
                                    724 ;	timer.c:108: void reset_timer()
                                    725 ;	-----------------------------------------
                                    726 ;	 function reset_timer
                                    727 ;	-----------------------------------------
      00226C                        728 _reset_timer:
                                    729 ;	timer.c:110: MS=0;
      00226C 90 00 08         [24]  730 	mov	dptr,#_MS
      00226F E4               [12]  731 	clr	a
      002270 F0               [24]  732 	movx	@dptr,a
                                    733 ;	timer.c:111: MH=0;
      002271 90 00 0B         [24]  734 	mov	dptr,#_MH
      002274 F0               [24]  735 	movx	@dptr,a
                                    736 ;	timer.c:112: ML=0;
      002275 90 00 0C         [24]  737 	mov	dptr,#_ML
      002278 F0               [24]  738 	movx	@dptr,a
                                    739 ;	timer.c:113: SH=0;
      002279 90 00 09         [24]  740 	mov	dptr,#_SH
      00227C F0               [24]  741 	movx	@dptr,a
                                    742 ;	timer.c:114: SL=0;
      00227D 90 00 0A         [24]  743 	mov	dptr,#_SL
      002280 F0               [24]  744 	movx	@dptr,a
                                    745 ;	timer.c:115: isr_count=0;
      002281 90 00 24         [24]  746 	mov	dptr,#_isr_count
      002284 F0               [24]  747 	movx	@dptr,a
      002285 A3               [24]  748 	inc	dptr
      002286 F0               [24]  749 	movx	@dptr,a
                                    750 ;	timer.c:116: put_timer();
                                    751 ;	timer.c:118: }
      002287 02 21 B1         [24]  752 	ljmp	_put_timer
                                    753 ;------------------------------------------------------------
                                    754 ;Allocation info for local variables in function 'timer0_ISR'
                                    755 ;------------------------------------------------------------
                                    756 ;	timer.c:128: void timer0_ISR(void)__interrupt(1)
                                    757 ;	-----------------------------------------
                                    758 ;	 function timer0_ISR
                                    759 ;	-----------------------------------------
      00228A                        760 _timer0_ISR:
      00228A C0 20            [24]  761 	push	bits
      00228C C0 E0            [24]  762 	push	acc
      00228E C0 F0            [24]  763 	push	b
      002290 C0 82            [24]  764 	push	dpl
      002292 C0 83            [24]  765 	push	dph
      002294 C0 07            [24]  766 	push	(0+7)
      002296 C0 06            [24]  767 	push	(0+6)
      002298 C0 05            [24]  768 	push	(0+5)
      00229A C0 04            [24]  769 	push	(0+4)
      00229C C0 03            [24]  770 	push	(0+3)
      00229E C0 02            [24]  771 	push	(0+2)
      0022A0 C0 01            [24]  772 	push	(0+1)
      0022A2 C0 00            [24]  773 	push	(0+0)
      0022A4 C0 D0            [24]  774 	push	psw
      0022A6 75 D0 00         [24]  775 	mov	psw,#0x00
                                    776 ;	timer.c:131: TH0 = 0x4B;
      0022A9 75 8C 4B         [24]  777 	mov	_TH0,#0x4b
                                    778 ;	timer.c:132: TL0 = 0xFB;
      0022AC 75 8A FB         [24]  779 	mov	_TL0,#0xfb
                                    780 ;	timer.c:133: TF0=0;
                                    781 ;	assignBit
      0022AF C2 8D            [12]  782 	clr	_TF0
                                    783 ;	timer.c:134: TR0=1;
                                    784 ;	assignBit
      0022B1 D2 8C            [12]  785 	setb	_TR0
                                    786 ;	timer.c:136: if(isr_count=2){
      0022B3 90 00 24         [24]  787 	mov	dptr,#_isr_count
      0022B6 74 02            [12]  788 	mov	a,#0x02
      0022B8 F0               [24]  789 	movx	@dptr,a
      0022B9 E4               [12]  790 	clr	a
      0022BA A3               [24]  791 	inc	dptr
      0022BB F0               [24]  792 	movx	@dptr,a
                                    793 ;	timer.c:137: P1_0 ^=1;
      0022BC B2 90            [12]  794 	cpl	_P1_0
                                    795 ;	timer.c:138: put_timer();
      0022BE 12 21 B1         [24]  796 	lcall	_put_timer
                                    797 ;	timer.c:139: isr_count=0;
      0022C1 90 00 24         [24]  798 	mov	dptr,#_isr_count
      0022C4 E4               [12]  799 	clr	a
      0022C5 F0               [24]  800 	movx	@dptr,a
      0022C6 A3               [24]  801 	inc	dptr
      0022C7 F0               [24]  802 	movx	@dptr,a
                                    803 ;	timer.c:142: }
      0022C8 D0 D0            [24]  804 	pop	psw
      0022CA D0 00            [24]  805 	pop	(0+0)
      0022CC D0 01            [24]  806 	pop	(0+1)
      0022CE D0 02            [24]  807 	pop	(0+2)
      0022D0 D0 03            [24]  808 	pop	(0+3)
      0022D2 D0 04            [24]  809 	pop	(0+4)
      0022D4 D0 05            [24]  810 	pop	(0+5)
      0022D6 D0 06            [24]  811 	pop	(0+6)
      0022D8 D0 07            [24]  812 	pop	(0+7)
      0022DA D0 83            [24]  813 	pop	dph
      0022DC D0 82            [24]  814 	pop	dpl
      0022DE D0 F0            [24]  815 	pop	b
      0022E0 D0 E0            [24]  816 	pop	acc
      0022E2 D0 20            [24]  817 	pop	bits
      0022E4 32               [24]  818 	reti
                                    819 	.area CSEG    (CODE)
                                    820 	.area CONST   (CODE)
                                    821 	.area XINIT   (CODE)
      002B41                        822 __xinit__isr_count:
      002B41 00 00                  823 	.byte #0x00, #0x00	;  0
                                    824 	.area CABS    (ABS,CODE)
