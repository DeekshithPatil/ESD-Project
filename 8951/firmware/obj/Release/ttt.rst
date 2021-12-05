                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module ttt
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _A
                                     12 	.globl _restartGame
                                     13 	.globl _putO
                                     14 	.globl _putX
                                     15 	.globl _ccSWO
                                     16 	.globl _ccSWX
                                     17 	.globl _ccSquare
                                     18 	.globl _lcdgotoaddr
                                     19 	.globl _lcdputstr
                                     20 	.globl _lcd_data
                                     21 	.globl _lcd_cmd
                                     22 	.globl _delay
                                     23 	.globl _getchar
                                     24 	.globl _TF1
                                     25 	.globl _TR1
                                     26 	.globl _TF0
                                     27 	.globl _TR0
                                     28 	.globl _IE1
                                     29 	.globl _IT1
                                     30 	.globl _IE0
                                     31 	.globl _IT0
                                     32 	.globl _SM0
                                     33 	.globl _SM1
                                     34 	.globl _SM2
                                     35 	.globl _REN
                                     36 	.globl _TB8
                                     37 	.globl _RB8
                                     38 	.globl _TI
                                     39 	.globl _RI
                                     40 	.globl _CY
                                     41 	.globl _AC
                                     42 	.globl _F0
                                     43 	.globl _RS1
                                     44 	.globl _RS0
                                     45 	.globl _OV
                                     46 	.globl _F1
                                     47 	.globl _P
                                     48 	.globl _RD
                                     49 	.globl _WR
                                     50 	.globl _T1
                                     51 	.globl _T0
                                     52 	.globl _INT1
                                     53 	.globl _INT0
                                     54 	.globl _TXD0
                                     55 	.globl _TXD
                                     56 	.globl _RXD0
                                     57 	.globl _RXD
                                     58 	.globl _P3_7
                                     59 	.globl _P3_6
                                     60 	.globl _P3_5
                                     61 	.globl _P3_4
                                     62 	.globl _P3_3
                                     63 	.globl _P3_2
                                     64 	.globl _P3_1
                                     65 	.globl _P3_0
                                     66 	.globl _P2_7
                                     67 	.globl _P2_6
                                     68 	.globl _P2_5
                                     69 	.globl _P2_4
                                     70 	.globl _P2_3
                                     71 	.globl _P2_2
                                     72 	.globl _P2_1
                                     73 	.globl _P2_0
                                     74 	.globl _P1_7
                                     75 	.globl _P1_6
                                     76 	.globl _P1_5
                                     77 	.globl _P1_4
                                     78 	.globl _P1_3
                                     79 	.globl _P1_2
                                     80 	.globl _P1_1
                                     81 	.globl _P1_0
                                     82 	.globl _P0_7
                                     83 	.globl _P0_6
                                     84 	.globl _P0_5
                                     85 	.globl _P0_4
                                     86 	.globl _P0_3
                                     87 	.globl _P0_2
                                     88 	.globl _P0_1
                                     89 	.globl _P0_0
                                     90 	.globl _PS
                                     91 	.globl _PT1
                                     92 	.globl _PX1
                                     93 	.globl _PT0
                                     94 	.globl _PX0
                                     95 	.globl _EA
                                     96 	.globl _ES
                                     97 	.globl _ET1
                                     98 	.globl _EX1
                                     99 	.globl _ET0
                                    100 	.globl _EX0
                                    101 	.globl _BREG_F7
                                    102 	.globl _BREG_F6
                                    103 	.globl _BREG_F5
                                    104 	.globl _BREG_F4
                                    105 	.globl _BREG_F3
                                    106 	.globl _BREG_F2
                                    107 	.globl _BREG_F1
                                    108 	.globl _BREG_F0
                                    109 	.globl _P5_7
                                    110 	.globl _P5_6
                                    111 	.globl _P5_5
                                    112 	.globl _P5_4
                                    113 	.globl _P5_3
                                    114 	.globl _P5_2
                                    115 	.globl _P5_1
                                    116 	.globl _P5_0
                                    117 	.globl _P4_7
                                    118 	.globl _P4_6
                                    119 	.globl _P4_5
                                    120 	.globl _P4_4
                                    121 	.globl _P4_3
                                    122 	.globl _P4_2
                                    123 	.globl _P4_1
                                    124 	.globl _P4_0
                                    125 	.globl _PX0L
                                    126 	.globl _PT0L
                                    127 	.globl _PX1L
                                    128 	.globl _PT1L
                                    129 	.globl _PSL
                                    130 	.globl _PT2L
                                    131 	.globl _PPCL
                                    132 	.globl _EC
                                    133 	.globl _CCF0
                                    134 	.globl _CCF1
                                    135 	.globl _CCF2
                                    136 	.globl _CCF3
                                    137 	.globl _CCF4
                                    138 	.globl _CR
                                    139 	.globl _CF
                                    140 	.globl _TF2
                                    141 	.globl _EXF2
                                    142 	.globl _RCLK
                                    143 	.globl _TCLK
                                    144 	.globl _EXEN2
                                    145 	.globl _TR2
                                    146 	.globl _C_T2
                                    147 	.globl _CP_RL2
                                    148 	.globl _T2CON_7
                                    149 	.globl _T2CON_6
                                    150 	.globl _T2CON_5
                                    151 	.globl _T2CON_4
                                    152 	.globl _T2CON_3
                                    153 	.globl _T2CON_2
                                    154 	.globl _T2CON_1
                                    155 	.globl _T2CON_0
                                    156 	.globl _PT2
                                    157 	.globl _ET2
                                    158 	.globl _TMOD
                                    159 	.globl _TL1
                                    160 	.globl _TL0
                                    161 	.globl _TH1
                                    162 	.globl _TH0
                                    163 	.globl _TCON
                                    164 	.globl _SP
                                    165 	.globl _SCON
                                    166 	.globl _SBUF0
                                    167 	.globl _SBUF
                                    168 	.globl _PSW
                                    169 	.globl _PCON
                                    170 	.globl _P3
                                    171 	.globl _P2
                                    172 	.globl _P1
                                    173 	.globl _P0
                                    174 	.globl _IP
                                    175 	.globl _IE
                                    176 	.globl _DP0L
                                    177 	.globl _DPL
                                    178 	.globl _DP0H
                                    179 	.globl _DPH
                                    180 	.globl _B
                                    181 	.globl _ACC
                                    182 	.globl _EECON
                                    183 	.globl _KBF
                                    184 	.globl _KBE
                                    185 	.globl _KBLS
                                    186 	.globl _BRL
                                    187 	.globl _BDRCON
                                    188 	.globl _T2MOD
                                    189 	.globl _SPDAT
                                    190 	.globl _SPSTA
                                    191 	.globl _SPCON
                                    192 	.globl _SADEN
                                    193 	.globl _SADDR
                                    194 	.globl _WDTPRG
                                    195 	.globl _WDTRST
                                    196 	.globl _P5
                                    197 	.globl _P4
                                    198 	.globl _IPH1
                                    199 	.globl _IPL1
                                    200 	.globl _IPH0
                                    201 	.globl _IPL0
                                    202 	.globl _IEN1
                                    203 	.globl _IEN0
                                    204 	.globl _CMOD
                                    205 	.globl _CL
                                    206 	.globl _CH
                                    207 	.globl _CCON
                                    208 	.globl _CCAPM4
                                    209 	.globl _CCAPM3
                                    210 	.globl _CCAPM2
                                    211 	.globl _CCAPM1
                                    212 	.globl _CCAPM0
                                    213 	.globl _CCAP4L
                                    214 	.globl _CCAP3L
                                    215 	.globl _CCAP2L
                                    216 	.globl _CCAP1L
                                    217 	.globl _CCAP0L
                                    218 	.globl _CCAP4H
                                    219 	.globl _CCAP3H
                                    220 	.globl _CCAP2H
                                    221 	.globl _CCAP1H
                                    222 	.globl _CCAP0H
                                    223 	.globl _CKCON1
                                    224 	.globl _CKCON0
                                    225 	.globl _CKRL
                                    226 	.globl _AUXR1
                                    227 	.globl _AUXR
                                    228 	.globl _TH2
                                    229 	.globl _TL2
                                    230 	.globl _RCAP2H
                                    231 	.globl _RCAP2L
                                    232 	.globl _T2CON
                                    233 	.globl _squareWO
                                    234 	.globl _squareWX
                                    235 	.globl _square
                                    236 	.globl _currentPlayer
                                    237 	.globl _currentIndex
                                    238 	.globl _currentPos
                                    239 	.globl _M
                                    240 	.globl _startGame
                                    241 	.globl _Init_Game
                                    242 	.globl _changeState
                                    243 	.globl _gameDecision
                                    244 	.globl _gameOver
                                    245 ;--------------------------------------------------------
                                    246 ; special function registers
                                    247 ;--------------------------------------------------------
                                    248 	.area RSEG    (ABS,DATA)
      000000                        249 	.org 0x0000
                           0000C8   250 _T2CON	=	0x00c8
                           0000CA   251 _RCAP2L	=	0x00ca
                           0000CB   252 _RCAP2H	=	0x00cb
                           0000CC   253 _TL2	=	0x00cc
                           0000CD   254 _TH2	=	0x00cd
                           00008E   255 _AUXR	=	0x008e
                           0000A2   256 _AUXR1	=	0x00a2
                           000097   257 _CKRL	=	0x0097
                           00008F   258 _CKCON0	=	0x008f
                           0000AF   259 _CKCON1	=	0x00af
                           0000FA   260 _CCAP0H	=	0x00fa
                           0000FB   261 _CCAP1H	=	0x00fb
                           0000FC   262 _CCAP2H	=	0x00fc
                           0000FD   263 _CCAP3H	=	0x00fd
                           0000FE   264 _CCAP4H	=	0x00fe
                           0000EA   265 _CCAP0L	=	0x00ea
                           0000EB   266 _CCAP1L	=	0x00eb
                           0000EC   267 _CCAP2L	=	0x00ec
                           0000ED   268 _CCAP3L	=	0x00ed
                           0000EE   269 _CCAP4L	=	0x00ee
                           0000DA   270 _CCAPM0	=	0x00da
                           0000DB   271 _CCAPM1	=	0x00db
                           0000DC   272 _CCAPM2	=	0x00dc
                           0000DD   273 _CCAPM3	=	0x00dd
                           0000DE   274 _CCAPM4	=	0x00de
                           0000D8   275 _CCON	=	0x00d8
                           0000F9   276 _CH	=	0x00f9
                           0000E9   277 _CL	=	0x00e9
                           0000D9   278 _CMOD	=	0x00d9
                           0000A8   279 _IEN0	=	0x00a8
                           0000B1   280 _IEN1	=	0x00b1
                           0000B8   281 _IPL0	=	0x00b8
                           0000B7   282 _IPH0	=	0x00b7
                           0000B2   283 _IPL1	=	0x00b2
                           0000B3   284 _IPH1	=	0x00b3
                           0000C0   285 _P4	=	0x00c0
                           0000E8   286 _P5	=	0x00e8
                           0000A6   287 _WDTRST	=	0x00a6
                           0000A7   288 _WDTPRG	=	0x00a7
                           0000A9   289 _SADDR	=	0x00a9
                           0000B9   290 _SADEN	=	0x00b9
                           0000C3   291 _SPCON	=	0x00c3
                           0000C4   292 _SPSTA	=	0x00c4
                           0000C5   293 _SPDAT	=	0x00c5
                           0000C9   294 _T2MOD	=	0x00c9
                           00009B   295 _BDRCON	=	0x009b
                           00009A   296 _BRL	=	0x009a
                           00009C   297 _KBLS	=	0x009c
                           00009D   298 _KBE	=	0x009d
                           00009E   299 _KBF	=	0x009e
                           0000D2   300 _EECON	=	0x00d2
                           0000E0   301 _ACC	=	0x00e0
                           0000F0   302 _B	=	0x00f0
                           000083   303 _DPH	=	0x0083
                           000083   304 _DP0H	=	0x0083
                           000082   305 _DPL	=	0x0082
                           000082   306 _DP0L	=	0x0082
                           0000A8   307 _IE	=	0x00a8
                           0000B8   308 _IP	=	0x00b8
                           000080   309 _P0	=	0x0080
                           000090   310 _P1	=	0x0090
                           0000A0   311 _P2	=	0x00a0
                           0000B0   312 _P3	=	0x00b0
                           000087   313 _PCON	=	0x0087
                           0000D0   314 _PSW	=	0x00d0
                           000099   315 _SBUF	=	0x0099
                           000099   316 _SBUF0	=	0x0099
                           000098   317 _SCON	=	0x0098
                           000081   318 _SP	=	0x0081
                           000088   319 _TCON	=	0x0088
                           00008C   320 _TH0	=	0x008c
                           00008D   321 _TH1	=	0x008d
                           00008A   322 _TL0	=	0x008a
                           00008B   323 _TL1	=	0x008b
                           000089   324 _TMOD	=	0x0089
                                    325 ;--------------------------------------------------------
                                    326 ; special function bits
                                    327 ;--------------------------------------------------------
                                    328 	.area RSEG    (ABS,DATA)
      000000                        329 	.org 0x0000
                           0000AD   330 _ET2	=	0x00ad
                           0000BD   331 _PT2	=	0x00bd
                           0000C8   332 _T2CON_0	=	0x00c8
                           0000C9   333 _T2CON_1	=	0x00c9
                           0000CA   334 _T2CON_2	=	0x00ca
                           0000CB   335 _T2CON_3	=	0x00cb
                           0000CC   336 _T2CON_4	=	0x00cc
                           0000CD   337 _T2CON_5	=	0x00cd
                           0000CE   338 _T2CON_6	=	0x00ce
                           0000CF   339 _T2CON_7	=	0x00cf
                           0000C8   340 _CP_RL2	=	0x00c8
                           0000C9   341 _C_T2	=	0x00c9
                           0000CA   342 _TR2	=	0x00ca
                           0000CB   343 _EXEN2	=	0x00cb
                           0000CC   344 _TCLK	=	0x00cc
                           0000CD   345 _RCLK	=	0x00cd
                           0000CE   346 _EXF2	=	0x00ce
                           0000CF   347 _TF2	=	0x00cf
                           0000DF   348 _CF	=	0x00df
                           0000DE   349 _CR	=	0x00de
                           0000DC   350 _CCF4	=	0x00dc
                           0000DB   351 _CCF3	=	0x00db
                           0000DA   352 _CCF2	=	0x00da
                           0000D9   353 _CCF1	=	0x00d9
                           0000D8   354 _CCF0	=	0x00d8
                           0000AE   355 _EC	=	0x00ae
                           0000BE   356 _PPCL	=	0x00be
                           0000BD   357 _PT2L	=	0x00bd
                           0000BC   358 _PSL	=	0x00bc
                           0000BB   359 _PT1L	=	0x00bb
                           0000BA   360 _PX1L	=	0x00ba
                           0000B9   361 _PT0L	=	0x00b9
                           0000B8   362 _PX0L	=	0x00b8
                           0000C0   363 _P4_0	=	0x00c0
                           0000C1   364 _P4_1	=	0x00c1
                           0000C2   365 _P4_2	=	0x00c2
                           0000C3   366 _P4_3	=	0x00c3
                           0000C4   367 _P4_4	=	0x00c4
                           0000C5   368 _P4_5	=	0x00c5
                           0000C6   369 _P4_6	=	0x00c6
                           0000C7   370 _P4_7	=	0x00c7
                           0000E8   371 _P5_0	=	0x00e8
                           0000E9   372 _P5_1	=	0x00e9
                           0000EA   373 _P5_2	=	0x00ea
                           0000EB   374 _P5_3	=	0x00eb
                           0000EC   375 _P5_4	=	0x00ec
                           0000ED   376 _P5_5	=	0x00ed
                           0000EE   377 _P5_6	=	0x00ee
                           0000EF   378 _P5_7	=	0x00ef
                           0000F0   379 _BREG_F0	=	0x00f0
                           0000F1   380 _BREG_F1	=	0x00f1
                           0000F2   381 _BREG_F2	=	0x00f2
                           0000F3   382 _BREG_F3	=	0x00f3
                           0000F4   383 _BREG_F4	=	0x00f4
                           0000F5   384 _BREG_F5	=	0x00f5
                           0000F6   385 _BREG_F6	=	0x00f6
                           0000F7   386 _BREG_F7	=	0x00f7
                           0000A8   387 _EX0	=	0x00a8
                           0000A9   388 _ET0	=	0x00a9
                           0000AA   389 _EX1	=	0x00aa
                           0000AB   390 _ET1	=	0x00ab
                           0000AC   391 _ES	=	0x00ac
                           0000AF   392 _EA	=	0x00af
                           0000B8   393 _PX0	=	0x00b8
                           0000B9   394 _PT0	=	0x00b9
                           0000BA   395 _PX1	=	0x00ba
                           0000BB   396 _PT1	=	0x00bb
                           0000BC   397 _PS	=	0x00bc
                           000080   398 _P0_0	=	0x0080
                           000081   399 _P0_1	=	0x0081
                           000082   400 _P0_2	=	0x0082
                           000083   401 _P0_3	=	0x0083
                           000084   402 _P0_4	=	0x0084
                           000085   403 _P0_5	=	0x0085
                           000086   404 _P0_6	=	0x0086
                           000087   405 _P0_7	=	0x0087
                           000090   406 _P1_0	=	0x0090
                           000091   407 _P1_1	=	0x0091
                           000092   408 _P1_2	=	0x0092
                           000093   409 _P1_3	=	0x0093
                           000094   410 _P1_4	=	0x0094
                           000095   411 _P1_5	=	0x0095
                           000096   412 _P1_6	=	0x0096
                           000097   413 _P1_7	=	0x0097
                           0000A0   414 _P2_0	=	0x00a0
                           0000A1   415 _P2_1	=	0x00a1
                           0000A2   416 _P2_2	=	0x00a2
                           0000A3   417 _P2_3	=	0x00a3
                           0000A4   418 _P2_4	=	0x00a4
                           0000A5   419 _P2_5	=	0x00a5
                           0000A6   420 _P2_6	=	0x00a6
                           0000A7   421 _P2_7	=	0x00a7
                           0000B0   422 _P3_0	=	0x00b0
                           0000B1   423 _P3_1	=	0x00b1
                           0000B2   424 _P3_2	=	0x00b2
                           0000B3   425 _P3_3	=	0x00b3
                           0000B4   426 _P3_4	=	0x00b4
                           0000B5   427 _P3_5	=	0x00b5
                           0000B6   428 _P3_6	=	0x00b6
                           0000B7   429 _P3_7	=	0x00b7
                           0000B0   430 _RXD	=	0x00b0
                           0000B0   431 _RXD0	=	0x00b0
                           0000B1   432 _TXD	=	0x00b1
                           0000B1   433 _TXD0	=	0x00b1
                           0000B2   434 _INT0	=	0x00b2
                           0000B3   435 _INT1	=	0x00b3
                           0000B4   436 _T0	=	0x00b4
                           0000B5   437 _T1	=	0x00b5
                           0000B6   438 _WR	=	0x00b6
                           0000B7   439 _RD	=	0x00b7
                           0000D0   440 _P	=	0x00d0
                           0000D1   441 _F1	=	0x00d1
                           0000D2   442 _OV	=	0x00d2
                           0000D3   443 _RS0	=	0x00d3
                           0000D4   444 _RS1	=	0x00d4
                           0000D5   445 _F0	=	0x00d5
                           0000D6   446 _AC	=	0x00d6
                           0000D7   447 _CY	=	0x00d7
                           000098   448 _RI	=	0x0098
                           000099   449 _TI	=	0x0099
                           00009A   450 _RB8	=	0x009a
                           00009B   451 _TB8	=	0x009b
                           00009C   452 _REN	=	0x009c
                           00009D   453 _SM2	=	0x009d
                           00009E   454 _SM1	=	0x009e
                           00009F   455 _SM0	=	0x009f
                           000088   456 _IT0	=	0x0088
                           000089   457 _IE0	=	0x0089
                           00008A   458 _IT1	=	0x008a
                           00008B   459 _IE1	=	0x008b
                           00008C   460 _TR0	=	0x008c
                           00008D   461 _TF0	=	0x008d
                           00008E   462 _TR1	=	0x008e
                           00008F   463 _TF1	=	0x008f
                                    464 ;--------------------------------------------------------
                                    465 ; overlayable register banks
                                    466 ;--------------------------------------------------------
                                    467 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        468 	.ds 8
                                    469 ;--------------------------------------------------------
                                    470 ; internal ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area DSEG    (DATA)
                                    473 ;--------------------------------------------------------
                                    474 ; overlayable items in internal ram 
                                    475 ;--------------------------------------------------------
                                    476 	.area	OSEG    (OVR,DATA)
      000008                        477 _gameDecision_sloc0_1_0:
      000008                        478 	.ds 2
      00000A                        479 _gameDecision_sloc1_1_0:
      00000A                        480 	.ds 1
      00000B                        481 _gameDecision_sloc2_1_0:
      00000B                        482 	.ds 1
                                    483 ;--------------------------------------------------------
                                    484 ; indirectly addressable internal ram data
                                    485 ;--------------------------------------------------------
                                    486 	.area ISEG    (DATA)
                                    487 ;--------------------------------------------------------
                                    488 ; absolute internal ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area IABS    (ABS,DATA)
                                    491 	.area IABS    (ABS,DATA)
                                    492 ;--------------------------------------------------------
                                    493 ; bit data
                                    494 ;--------------------------------------------------------
                                    495 	.area BSEG    (BIT)
                                    496 ;--------------------------------------------------------
                                    497 ; paged external ram data
                                    498 ;--------------------------------------------------------
                                    499 	.area PSEG    (PAG,XDATA)
                                    500 ;--------------------------------------------------------
                                    501 ; external ram data
                                    502 ;--------------------------------------------------------
                                    503 	.area XSEG    (XDATA)
      00000D                        504 _M::
      00000D                        505 	.ds 9
      000016                        506 _currentPos::
      000016                        507 	.ds 1
      000017                        508 _currentIndex::
      000017                        509 	.ds 1
      000018                        510 _currentPlayer::
      000018                        511 	.ds 2
      00001A                        512 _gameDecision_decision_65536_91:
      00001A                        513 	.ds 2
      00001C                        514 _gameOver_player_65536_107:
      00001C                        515 	.ds 2
                                    516 ;--------------------------------------------------------
                                    517 ; absolute external ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area XABS    (ABS,XDATA)
                                    520 ;--------------------------------------------------------
                                    521 ; external initialized ram data
                                    522 ;--------------------------------------------------------
                                    523 	.area XISEG   (XDATA)
      000026                        524 _square::
      000026                        525 	.ds 32
      000046                        526 _squareWX::
      000046                        527 	.ds 32
      000066                        528 _squareWO::
      000066                        529 	.ds 32
                                    530 	.area HOME    (CODE)
                                    531 	.area GSINIT0 (CODE)
                                    532 	.area GSINIT1 (CODE)
                                    533 	.area GSINIT2 (CODE)
                                    534 	.area GSINIT3 (CODE)
                                    535 	.area GSINIT4 (CODE)
                                    536 	.area GSINIT5 (CODE)
                                    537 	.area GSINIT  (CODE)
                                    538 	.area GSFINAL (CODE)
                                    539 	.area CSEG    (CODE)
                                    540 ;--------------------------------------------------------
                                    541 ; global & static initialisations
                                    542 ;--------------------------------------------------------
                                    543 	.area HOME    (CODE)
                                    544 	.area GSINIT  (CODE)
                                    545 	.area GSFINAL (CODE)
                                    546 	.area GSINIT  (CODE)
                                    547 ;--------------------------------------------------------
                                    548 ; Home
                                    549 ;--------------------------------------------------------
                                    550 	.area HOME    (CODE)
                                    551 	.area HOME    (CODE)
                                    552 ;--------------------------------------------------------
                                    553 ; code
                                    554 ;--------------------------------------------------------
                                    555 	.area CSEG    (CODE)
                                    556 ;------------------------------------------------------------
                                    557 ;Allocation info for local variables in function 'ccSquare'
                                    558 ;------------------------------------------------------------
                                    559 ;rows                      Allocated with name '_ccSquare_rows_65536_53'
                                    560 ;i                         Allocated with name '_ccSquare_i_131072_54'
                                    561 ;------------------------------------------------------------
                                    562 ;	ttt.c:21: void ccSquare(void)
                                    563 ;	-----------------------------------------
                                    564 ;	 function ccSquare
                                    565 ;	-----------------------------------------
      0022E5                        566 _ccSquare:
                           000007   567 	ar7 = 0x07
                           000006   568 	ar6 = 0x06
                           000005   569 	ar5 = 0x05
                           000004   570 	ar4 = 0x04
                           000003   571 	ar3 = 0x03
                           000002   572 	ar2 = 0x02
                           000001   573 	ar1 = 0x01
                           000000   574 	ar0 = 0x00
                                    575 ;	ttt.c:23: uint16_t *rows =square;
                                    576 ;	ttt.c:24: lcd_cmd(0x02);
      0022E5 75 82 02         [24]  577 	mov	dpl,#0x02
      0022E8 12 20 A4         [24]  578 	lcall	_lcd_cmd
                                    579 ;	ttt.c:25: lcd_cmd(0x40|0x00);
      0022EB 75 82 40         [24]  580 	mov	dpl,#0x40
      0022EE 12 20 A4         [24]  581 	lcall	_lcd_cmd
                                    582 ;	ttt.c:26: for(int i=0;i<16;i++){
      0022F1 7D 26            [12]  583 	mov	r5,#_square
      0022F3 7E 00            [12]  584 	mov	r6,#(_square >> 8)
      0022F5 7F 00            [12]  585 	mov	r7,#0x00
      0022F7 7B 00            [12]  586 	mov	r3,#0x00
      0022F9 7C 00            [12]  587 	mov	r4,#0x00
      0022FB                        588 00103$:
      0022FB C3               [12]  589 	clr	c
      0022FC EB               [12]  590 	mov	a,r3
      0022FD 94 10            [12]  591 	subb	a,#0x10
      0022FF EC               [12]  592 	mov	a,r4
      002300 64 80            [12]  593 	xrl	a,#0x80
      002302 94 80            [12]  594 	subb	a,#0x80
      002304 50 5D            [24]  595 	jnc	00105$
                                    596 ;	ttt.c:27: lcd_data((*rows>>8)& 0xFF);
      002306 8D 82            [24]  597 	mov	dpl,r5
      002308 8E 83            [24]  598 	mov	dph,r6
      00230A 8F F0            [24]  599 	mov	b,r7
      00230C 12 2A E0         [24]  600 	lcall	__gptrget
      00230F A3               [24]  601 	inc	dptr
      002310 12 2A E0         [24]  602 	lcall	__gptrget
      002313 F5 82            [12]  603 	mov	dpl,a
      002315 C0 07            [24]  604 	push	ar7
      002317 C0 06            [24]  605 	push	ar6
      002319 C0 05            [24]  606 	push	ar5
      00231B C0 04            [24]  607 	push	ar4
      00231D C0 03            [24]  608 	push	ar3
      00231F 12 20 CD         [24]  609 	lcall	_lcd_data
      002322 D0 03            [24]  610 	pop	ar3
      002324 D0 04            [24]  611 	pop	ar4
      002326 D0 05            [24]  612 	pop	ar5
      002328 D0 06            [24]  613 	pop	ar6
      00232A D0 07            [24]  614 	pop	ar7
                                    615 ;	ttt.c:28: lcd_data((*rows++) & 0xFF);
      00232C 8D 82            [24]  616 	mov	dpl,r5
      00232E 8E 83            [24]  617 	mov	dph,r6
      002330 8F F0            [24]  618 	mov	b,r7
      002332 12 2A E0         [24]  619 	lcall	__gptrget
      002335 FA               [12]  620 	mov	r2,a
      002336 74 02            [12]  621 	mov	a,#0x02
      002338 2D               [12]  622 	add	a,r5
      002339 FD               [12]  623 	mov	r5,a
      00233A E4               [12]  624 	clr	a
      00233B 3E               [12]  625 	addc	a,r6
      00233C FE               [12]  626 	mov	r6,a
      00233D 8A 82            [24]  627 	mov	dpl,r2
      00233F C0 07            [24]  628 	push	ar7
      002341 C0 06            [24]  629 	push	ar6
      002343 C0 05            [24]  630 	push	ar5
      002345 C0 04            [24]  631 	push	ar4
      002347 C0 03            [24]  632 	push	ar3
      002349 12 20 CD         [24]  633 	lcall	_lcd_data
                                    634 ;	ttt.c:29: delay(1);
      00234C 90 00 01         [24]  635 	mov	dptr,#0x0001
      00234F 12 20 62         [24]  636 	lcall	_delay
      002352 D0 03            [24]  637 	pop	ar3
      002354 D0 04            [24]  638 	pop	ar4
      002356 D0 05            [24]  639 	pop	ar5
      002358 D0 06            [24]  640 	pop	ar6
      00235A D0 07            [24]  641 	pop	ar7
                                    642 ;	ttt.c:26: for(int i=0;i<16;i++){
      00235C 0B               [12]  643 	inc	r3
      00235D BB 00 9B         [24]  644 	cjne	r3,#0x00,00103$
      002360 0C               [12]  645 	inc	r4
      002361 80 98            [24]  646 	sjmp	00103$
      002363                        647 00105$:
                                    648 ;	ttt.c:31: }
      002363 22               [24]  649 	ret
                                    650 ;------------------------------------------------------------
                                    651 ;Allocation info for local variables in function 'ccSWX'
                                    652 ;------------------------------------------------------------
                                    653 ;rows                      Allocated with name '_ccSWX_rows_65536_57'
                                    654 ;i                         Allocated with name '_ccSWX_i_131072_58'
                                    655 ;------------------------------------------------------------
                                    656 ;	ttt.c:33: void ccSWX(void)
                                    657 ;	-----------------------------------------
                                    658 ;	 function ccSWX
                                    659 ;	-----------------------------------------
      002364                        660 _ccSWX:
                                    661 ;	ttt.c:35: uint16_t *rows =squareWX;
                                    662 ;	ttt.c:36: lcd_cmd(0x02);
      002364 75 82 02         [24]  663 	mov	dpl,#0x02
      002367 12 20 A4         [24]  664 	lcall	_lcd_cmd
                                    665 ;	ttt.c:37: lcd_cmd(0x40|0x10);
      00236A 75 82 50         [24]  666 	mov	dpl,#0x50
      00236D 12 20 A4         [24]  667 	lcall	_lcd_cmd
                                    668 ;	ttt.c:38: for(int i=0;i<16;i++){
      002370 7D 46            [12]  669 	mov	r5,#_squareWX
      002372 7E 00            [12]  670 	mov	r6,#(_squareWX >> 8)
      002374 7F 00            [12]  671 	mov	r7,#0x00
      002376 7B 00            [12]  672 	mov	r3,#0x00
      002378 7C 00            [12]  673 	mov	r4,#0x00
      00237A                        674 00103$:
      00237A C3               [12]  675 	clr	c
      00237B EB               [12]  676 	mov	a,r3
      00237C 94 10            [12]  677 	subb	a,#0x10
      00237E EC               [12]  678 	mov	a,r4
      00237F 64 80            [12]  679 	xrl	a,#0x80
      002381 94 80            [12]  680 	subb	a,#0x80
      002383 50 5D            [24]  681 	jnc	00105$
                                    682 ;	ttt.c:39: lcd_data((*rows>>8)& 0xFF);
      002385 8D 82            [24]  683 	mov	dpl,r5
      002387 8E 83            [24]  684 	mov	dph,r6
      002389 8F F0            [24]  685 	mov	b,r7
      00238B 12 2A E0         [24]  686 	lcall	__gptrget
      00238E A3               [24]  687 	inc	dptr
      00238F 12 2A E0         [24]  688 	lcall	__gptrget
      002392 F5 82            [12]  689 	mov	dpl,a
      002394 C0 07            [24]  690 	push	ar7
      002396 C0 06            [24]  691 	push	ar6
      002398 C0 05            [24]  692 	push	ar5
      00239A C0 04            [24]  693 	push	ar4
      00239C C0 03            [24]  694 	push	ar3
      00239E 12 20 CD         [24]  695 	lcall	_lcd_data
      0023A1 D0 03            [24]  696 	pop	ar3
      0023A3 D0 04            [24]  697 	pop	ar4
      0023A5 D0 05            [24]  698 	pop	ar5
      0023A7 D0 06            [24]  699 	pop	ar6
      0023A9 D0 07            [24]  700 	pop	ar7
                                    701 ;	ttt.c:40: lcd_data((*rows++) & 0xFF);
      0023AB 8D 82            [24]  702 	mov	dpl,r5
      0023AD 8E 83            [24]  703 	mov	dph,r6
      0023AF 8F F0            [24]  704 	mov	b,r7
      0023B1 12 2A E0         [24]  705 	lcall	__gptrget
      0023B4 FA               [12]  706 	mov	r2,a
      0023B5 74 02            [12]  707 	mov	a,#0x02
      0023B7 2D               [12]  708 	add	a,r5
      0023B8 FD               [12]  709 	mov	r5,a
      0023B9 E4               [12]  710 	clr	a
      0023BA 3E               [12]  711 	addc	a,r6
      0023BB FE               [12]  712 	mov	r6,a
      0023BC 8A 82            [24]  713 	mov	dpl,r2
      0023BE C0 07            [24]  714 	push	ar7
      0023C0 C0 06            [24]  715 	push	ar6
      0023C2 C0 05            [24]  716 	push	ar5
      0023C4 C0 04            [24]  717 	push	ar4
      0023C6 C0 03            [24]  718 	push	ar3
      0023C8 12 20 CD         [24]  719 	lcall	_lcd_data
                                    720 ;	ttt.c:41: delay(1);
      0023CB 90 00 01         [24]  721 	mov	dptr,#0x0001
      0023CE 12 20 62         [24]  722 	lcall	_delay
      0023D1 D0 03            [24]  723 	pop	ar3
      0023D3 D0 04            [24]  724 	pop	ar4
      0023D5 D0 05            [24]  725 	pop	ar5
      0023D7 D0 06            [24]  726 	pop	ar6
      0023D9 D0 07            [24]  727 	pop	ar7
                                    728 ;	ttt.c:38: for(int i=0;i<16;i++){
      0023DB 0B               [12]  729 	inc	r3
      0023DC BB 00 9B         [24]  730 	cjne	r3,#0x00,00103$
      0023DF 0C               [12]  731 	inc	r4
      0023E0 80 98            [24]  732 	sjmp	00103$
      0023E2                        733 00105$:
                                    734 ;	ttt.c:43: }
      0023E2 22               [24]  735 	ret
                                    736 ;------------------------------------------------------------
                                    737 ;Allocation info for local variables in function 'ccSWO'
                                    738 ;------------------------------------------------------------
                                    739 ;rows                      Allocated with name '_ccSWO_rows_65536_61'
                                    740 ;i                         Allocated with name '_ccSWO_i_131072_62'
                                    741 ;------------------------------------------------------------
                                    742 ;	ttt.c:45: void ccSWO(void)
                                    743 ;	-----------------------------------------
                                    744 ;	 function ccSWO
                                    745 ;	-----------------------------------------
      0023E3                        746 _ccSWO:
                                    747 ;	ttt.c:47: uint16_t *rows =squareWO;
                                    748 ;	ttt.c:48: lcd_cmd(0x02);
      0023E3 75 82 02         [24]  749 	mov	dpl,#0x02
      0023E6 12 20 A4         [24]  750 	lcall	_lcd_cmd
                                    751 ;	ttt.c:49: lcd_cmd(0x40|0x20);
      0023E9 75 82 60         [24]  752 	mov	dpl,#0x60
      0023EC 12 20 A4         [24]  753 	lcall	_lcd_cmd
                                    754 ;	ttt.c:50: for(int i=0;i<16;i++){
      0023EF 7D 66            [12]  755 	mov	r5,#_squareWO
      0023F1 7E 00            [12]  756 	mov	r6,#(_squareWO >> 8)
      0023F3 7F 00            [12]  757 	mov	r7,#0x00
      0023F5 7B 00            [12]  758 	mov	r3,#0x00
      0023F7 7C 00            [12]  759 	mov	r4,#0x00
      0023F9                        760 00103$:
      0023F9 C3               [12]  761 	clr	c
      0023FA EB               [12]  762 	mov	a,r3
      0023FB 94 10            [12]  763 	subb	a,#0x10
      0023FD EC               [12]  764 	mov	a,r4
      0023FE 64 80            [12]  765 	xrl	a,#0x80
      002400 94 80            [12]  766 	subb	a,#0x80
      002402 50 5D            [24]  767 	jnc	00105$
                                    768 ;	ttt.c:51: lcd_data((*rows>>8)& 0xFF);
      002404 8D 82            [24]  769 	mov	dpl,r5
      002406 8E 83            [24]  770 	mov	dph,r6
      002408 8F F0            [24]  771 	mov	b,r7
      00240A 12 2A E0         [24]  772 	lcall	__gptrget
      00240D A3               [24]  773 	inc	dptr
      00240E 12 2A E0         [24]  774 	lcall	__gptrget
      002411 F5 82            [12]  775 	mov	dpl,a
      002413 C0 07            [24]  776 	push	ar7
      002415 C0 06            [24]  777 	push	ar6
      002417 C0 05            [24]  778 	push	ar5
      002419 C0 04            [24]  779 	push	ar4
      00241B C0 03            [24]  780 	push	ar3
      00241D 12 20 CD         [24]  781 	lcall	_lcd_data
      002420 D0 03            [24]  782 	pop	ar3
      002422 D0 04            [24]  783 	pop	ar4
      002424 D0 05            [24]  784 	pop	ar5
      002426 D0 06            [24]  785 	pop	ar6
      002428 D0 07            [24]  786 	pop	ar7
                                    787 ;	ttt.c:52: lcd_data((*rows++) & 0xFF);
      00242A 8D 82            [24]  788 	mov	dpl,r5
      00242C 8E 83            [24]  789 	mov	dph,r6
      00242E 8F F0            [24]  790 	mov	b,r7
      002430 12 2A E0         [24]  791 	lcall	__gptrget
      002433 FA               [12]  792 	mov	r2,a
      002434 74 02            [12]  793 	mov	a,#0x02
      002436 2D               [12]  794 	add	a,r5
      002437 FD               [12]  795 	mov	r5,a
      002438 E4               [12]  796 	clr	a
      002439 3E               [12]  797 	addc	a,r6
      00243A FE               [12]  798 	mov	r6,a
      00243B 8A 82            [24]  799 	mov	dpl,r2
      00243D C0 07            [24]  800 	push	ar7
      00243F C0 06            [24]  801 	push	ar6
      002441 C0 05            [24]  802 	push	ar5
      002443 C0 04            [24]  803 	push	ar4
      002445 C0 03            [24]  804 	push	ar3
      002447 12 20 CD         [24]  805 	lcall	_lcd_data
                                    806 ;	ttt.c:53: delay(1);
      00244A 90 00 01         [24]  807 	mov	dptr,#0x0001
      00244D 12 20 62         [24]  808 	lcall	_delay
      002450 D0 03            [24]  809 	pop	ar3
      002452 D0 04            [24]  810 	pop	ar4
      002454 D0 05            [24]  811 	pop	ar5
      002456 D0 06            [24]  812 	pop	ar6
      002458 D0 07            [24]  813 	pop	ar7
                                    814 ;	ttt.c:50: for(int i=0;i<16;i++){
      00245A 0B               [12]  815 	inc	r3
      00245B BB 00 9B         [24]  816 	cjne	r3,#0x00,00103$
      00245E 0C               [12]  817 	inc	r4
      00245F 80 98            [24]  818 	sjmp	00103$
      002461                        819 00105$:
                                    820 ;	ttt.c:55: }
      002461 22               [24]  821 	ret
                                    822 ;------------------------------------------------------------
                                    823 ;Allocation info for local variables in function 'putX'
                                    824 ;------------------------------------------------------------
                                    825 ;	ttt.c:57: void putX(void)
                                    826 ;	-----------------------------------------
                                    827 ;	 function putX
                                    828 ;	-----------------------------------------
      002462                        829 _putX:
                                    830 ;	ttt.c:59: lcd_data(0x00);
      002462 75 82 00         [24]  831 	mov	dpl,#0x00
      002465 12 20 CD         [24]  832 	lcall	_lcd_data
                                    833 ;	ttt.c:60: lcd_data(0x02);
      002468 75 82 02         [24]  834 	mov	dpl,#0x02
                                    835 ;	ttt.c:62: }
      00246B 02 20 CD         [24]  836 	ljmp	_lcd_data
                                    837 ;------------------------------------------------------------
                                    838 ;Allocation info for local variables in function 'putO'
                                    839 ;------------------------------------------------------------
                                    840 ;	ttt.c:64: void putO(void)
                                    841 ;	-----------------------------------------
                                    842 ;	 function putO
                                    843 ;	-----------------------------------------
      00246E                        844 _putO:
                                    845 ;	ttt.c:66: lcd_data(0x00);
      00246E 75 82 00         [24]  846 	mov	dpl,#0x00
      002471 12 20 CD         [24]  847 	lcall	_lcd_data
                                    848 ;	ttt.c:67: lcd_data(0x04);
      002474 75 82 04         [24]  849 	mov	dpl,#0x04
                                    850 ;	ttt.c:69: }
      002477 02 20 CD         [24]  851 	ljmp	_lcd_data
                                    852 ;------------------------------------------------------------
                                    853 ;Allocation info for local variables in function 'startGame'
                                    854 ;------------------------------------------------------------
                                    855 ;command                   Allocated with name '_startGame_command_65536_69'
                                    856 ;decision                  Allocated with name '_startGame_decision_262145_73'
                                    857 ;------------------------------------------------------------
                                    858 ;	ttt.c:71: void startGame(void){
                                    859 ;	-----------------------------------------
                                    860 ;	 function startGame
                                    861 ;	-----------------------------------------
      00247A                        862 _startGame:
                                    863 ;	ttt.c:76: lcdgotoaddr(0x96);
      00247A 75 82 96         [24]  864 	mov	dpl,#0x96
      00247D 12 20 96         [24]  865 	lcall	_lcdgotoaddr
                                    866 ;	ttt.c:77: putX();
      002480 12 24 62         [24]  867 	lcall	_putX
                                    868 ;	ttt.c:78: currentPlayer = 1;
      002483 90 00 18         [24]  869 	mov	dptr,#_currentPlayer
      002486 74 01            [12]  870 	mov	a,#0x01
      002488 F0               [24]  871 	movx	@dptr,a
      002489 E4               [12]  872 	clr	a
      00248A A3               [24]  873 	inc	dptr
      00248B F0               [24]  874 	movx	@dptr,a
                                    875 ;	ttt.c:79: currentIndex = 4;
      00248C 90 00 17         [24]  876 	mov	dptr,#_currentIndex
      00248F 74 04            [12]  877 	mov	a,#0x04
      002491 F0               [24]  878 	movx	@dptr,a
                                    879 ;	ttt.c:80: currentPos = A[4];
      002492 90 2B 04         [24]  880 	mov	dptr,#(_A + 0x0004)
      002495 E4               [12]  881 	clr	a
      002496 93               [24]  882 	movc	a,@a+dptr
      002497 FF               [12]  883 	mov	r7,a
      002498 90 00 16         [24]  884 	mov	dptr,#_currentPos
      00249B F0               [24]  885 	movx	@dptr,a
                                    886 ;	ttt.c:81: lcdgotoaddr(currentPos);
      00249C 8F 82            [24]  887 	mov	dpl,r7
      00249E 12 20 96         [24]  888 	lcall	_lcdgotoaddr
                                    889 ;	ttt.c:83: while(1){
      0024A1                        890 00143$:
                                    891 ;	ttt.c:87: command = getchar();
      0024A1 12 2A 3B         [24]  892 	lcall	_getchar
      0024A4 AE 82            [24]  893 	mov	r6,dpl
      0024A6 AF 83            [24]  894 	mov	r7,dph
                                    895 ;	ttt.c:88: switch(command){
      0024A8 BE 0D 02         [24]  896 	cjne	r6,#0x0d,00231$
      0024AB 80 16            [24]  897 	sjmp	00101$
      0024AD                        898 00231$:
      0024AD BE 61 02         [24]  899 	cjne	r6,#0x61,00232$
      0024B0 80 5A            [24]  900 	sjmp	00111$
      0024B2                        901 00232$:
      0024B2 BE 64 03         [24]  902 	cjne	r6,#0x64,00233$
      0024B5 02 25 8A         [24]  903 	ljmp	00140$
      0024B8                        904 00233$:
      0024B8 BE 73 03         [24]  905 	cjne	r6,#0x73,00234$
      0024BB 02 25 65         [24]  906 	ljmp	00124$
      0024BE                        907 00234$:
                                    908 ;	ttt.c:89: case 0x0d:
      0024BE BE 77 E0         [24]  909 	cjne	r6,#0x77,00143$
      0024C1 80 27            [24]  910 	sjmp	00107$
      0024C3                        911 00101$:
                                    912 ;	ttt.c:91: changeState();
      0024C3 12 26 9A         [24]  913 	lcall	_changeState
                                    914 ;	ttt.c:92: int decision = gameDecision();
      0024C6 12 27 27         [24]  915 	lcall	_gameDecision
      0024C9 AE 82            [24]  916 	mov	r6,dpl
      0024CB AF 83            [24]  917 	mov	r7,dph
                                    918 ;	ttt.c:93: if(decision == 1 || decision == 2 || decision == 9)
      0024CD BE 01 05         [24]  919 	cjne	r6,#0x01,00236$
      0024D0 BF 00 02         [24]  920 	cjne	r7,#0x00,00236$
      0024D3 80 0E            [24]  921 	sjmp	00102$
      0024D5                        922 00236$:
      0024D5 BE 02 05         [24]  923 	cjne	r6,#0x02,00237$
      0024D8 BF 00 02         [24]  924 	cjne	r7,#0x00,00237$
      0024DB 80 06            [24]  925 	sjmp	00102$
      0024DD                        926 00237$:
      0024DD BE 09 C1         [24]  927 	cjne	r6,#0x09,00143$
      0024E0 BF 00 BE         [24]  928 	cjne	r7,#0x00,00143$
      0024E3                        929 00102$:
                                    930 ;	ttt.c:94: gameOver(decision);
      0024E3 8E 82            [24]  931 	mov	dpl,r6
      0024E5 8F 83            [24]  932 	mov	dph,r7
      0024E7 12 29 A5         [24]  933 	lcall	_gameOver
                                    934 ;	ttt.c:99: case 'w':
      0024EA                        935 00107$:
                                    936 ;	ttt.c:101: if((currentIndex<3)){
      0024EA 90 00 17         [24]  937 	mov	dptr,#_currentIndex
      0024ED E0               [24]  938 	movx	a,@dptr
      0024EE FF               [12]  939 	mov	r7,a
      0024EF BF 03 00         [24]  940 	cjne	r7,#0x03,00240$
      0024F2                        941 00240$:
      0024F2 40 AD            [24]  942 	jc	00143$
                                    943 ;	ttt.c:104: currentIndex-=3;
      0024F4 EF               [12]  944 	mov	a,r7
      0024F5 24 FD            [12]  945 	add	a,#0xfd
      0024F7 90 00 17         [24]  946 	mov	dptr,#_currentIndex
      0024FA F0               [24]  947 	movx	@dptr,a
                                    948 ;	ttt.c:105: currentPos=A[currentIndex];
      0024FB E0               [24]  949 	movx	a,@dptr
      0024FC 90 2B 00         [24]  950 	mov	dptr,#_A
      0024FF 93               [24]  951 	movc	a,@a+dptr
      002500 FF               [12]  952 	mov	r7,a
      002501 90 00 16         [24]  953 	mov	dptr,#_currentPos
      002504 F0               [24]  954 	movx	@dptr,a
                                    955 ;	ttt.c:106: lcdgotoaddr(currentPos);
      002505 8F 82            [24]  956 	mov	dpl,r7
      002507 12 20 96         [24]  957 	lcall	_lcdgotoaddr
                                    958 ;	ttt.c:108: break;
                                    959 ;	ttt.c:111: case 'a':
      00250A 80 95            [24]  960 	sjmp	00143$
      00250C                        961 00111$:
                                    962 ;	ttt.c:113: if(currentIndex>0 && currentIndex<=2)
      00250C 90 00 17         [24]  963 	mov	dptr,#_currentIndex
      00250F E0               [24]  964 	movx	a,@dptr
      002510 FF               [12]  965 	mov	r7,a
      002511 60 0D            [24]  966 	jz	00121$
      002513 EF               [12]  967 	mov	a,r7
      002514 24 FD            [12]  968 	add	a,#0xff - 0x02
      002516 40 08            [24]  969 	jc	00121$
                                    970 ;	ttt.c:114: currentIndex-=1;
      002518 EF               [12]  971 	mov	a,r7
      002519 14               [12]  972 	dec	a
      00251A 90 00 17         [24]  973 	mov	dptr,#_currentIndex
      00251D F0               [24]  974 	movx	@dptr,a
      00251E 80 30            [24]  975 	sjmp	00122$
      002520                        976 00121$:
                                    977 ;	ttt.c:115: else if(currentIndex>3 && currentIndex<=5)
      002520 90 00 17         [24]  978 	mov	dptr,#_currentIndex
      002523 E0               [24]  979 	movx	a,@dptr
      002524 FF               [12]  980 	mov  r7,a
      002525 24 FC            [12]  981 	add	a,#0xff - 0x03
      002527 50 0D            [24]  982 	jnc	00117$
      002529 EF               [12]  983 	mov	a,r7
      00252A 24 FA            [12]  984 	add	a,#0xff - 0x05
      00252C 40 08            [24]  985 	jc	00117$
                                    986 ;	ttt.c:116: currentIndex-=1;
      00252E EF               [12]  987 	mov	a,r7
      00252F 14               [12]  988 	dec	a
      002530 90 00 17         [24]  989 	mov	dptr,#_currentIndex
      002533 F0               [24]  990 	movx	@dptr,a
      002534 80 1A            [24]  991 	sjmp	00122$
      002536                        992 00117$:
                                    993 ;	ttt.c:117: else if(currentIndex>6 && currentIndex<=8)
      002536 90 00 17         [24]  994 	mov	dptr,#_currentIndex
      002539 E0               [24]  995 	movx	a,@dptr
      00253A FF               [12]  996 	mov  r7,a
      00253B 24 F9            [12]  997 	add	a,#0xff - 0x06
      00253D 40 03            [24]  998 	jc	00246$
      00253F 02 24 A1         [24]  999 	ljmp	00143$
      002542                       1000 00246$:
      002542 EF               [12] 1001 	mov	a,r7
      002543 24 F7            [12] 1002 	add	a,#0xff - 0x08
      002545 50 03            [24] 1003 	jnc	00247$
      002547 02 24 A1         [24] 1004 	ljmp	00143$
      00254A                       1005 00247$:
                                   1006 ;	ttt.c:118: currentIndex-=1;
      00254A EF               [12] 1007 	mov	a,r7
      00254B 14               [12] 1008 	dec	a
      00254C 90 00 17         [24] 1009 	mov	dptr,#_currentIndex
      00254F F0               [24] 1010 	movx	@dptr,a
                                   1011 ;	ttt.c:120: break;
      002550                       1012 00122$:
                                   1013 ;	ttt.c:121: currentPos=A[currentIndex];
      002550 90 00 17         [24] 1014 	mov	dptr,#_currentIndex
      002553 E0               [24] 1015 	movx	a,@dptr
      002554 90 2B 00         [24] 1016 	mov	dptr,#_A
      002557 93               [24] 1017 	movc	a,@a+dptr
      002558 FF               [12] 1018 	mov	r7,a
      002559 90 00 16         [24] 1019 	mov	dptr,#_currentPos
      00255C F0               [24] 1020 	movx	@dptr,a
                                   1021 ;	ttt.c:122: lcdgotoaddr(currentPos);
      00255D 8F 82            [24] 1022 	mov	dpl,r7
      00255F 12 20 96         [24] 1023 	lcall	_lcdgotoaddr
                                   1024 ;	ttt.c:123: break;
      002562 02 24 A1         [24] 1025 	ljmp	00143$
                                   1026 ;	ttt.c:126: case 's':
      002565                       1027 00124$:
                                   1028 ;	ttt.c:128: if((currentIndex>5)){
      002565 90 00 17         [24] 1029 	mov	dptr,#_currentIndex
      002568 E0               [24] 1030 	movx	a,@dptr
      002569 FF               [12] 1031 	mov  r7,a
      00256A 24 FA            [12] 1032 	add	a,#0xff - 0x05
      00256C 50 03            [24] 1033 	jnc	00248$
      00256E 02 24 A1         [24] 1034 	ljmp	00143$
      002571                       1035 00248$:
                                   1036 ;	ttt.c:132: currentIndex +=3;
      002571 90 00 17         [24] 1037 	mov	dptr,#_currentIndex
      002574 74 03            [12] 1038 	mov	a,#0x03
      002576 2F               [12] 1039 	add	a,r7
      002577 F0               [24] 1040 	movx	@dptr,a
                                   1041 ;	ttt.c:133: currentPos=A[currentIndex];
      002578 E0               [24] 1042 	movx	a,@dptr
      002579 90 2B 00         [24] 1043 	mov	dptr,#_A
      00257C 93               [24] 1044 	movc	a,@a+dptr
      00257D FF               [12] 1045 	mov	r7,a
      00257E 90 00 16         [24] 1046 	mov	dptr,#_currentPos
      002581 F0               [24] 1047 	movx	@dptr,a
                                   1048 ;	ttt.c:134: lcdgotoaddr(currentPos);
      002582 8F 82            [24] 1049 	mov	dpl,r7
      002584 12 20 96         [24] 1050 	lcall	_lcdgotoaddr
                                   1051 ;	ttt.c:136: break;
      002587 02 24 A1         [24] 1052 	ljmp	00143$
                                   1053 ;	ttt.c:141: if(currentIndex>=0 && currentIndex<2)
      00258A                       1054 00140$:
      00258A 90 00 17         [24] 1055 	mov	dptr,#_currentIndex
      00258D E0               [24] 1056 	movx	a,@dptr
      00258E FF               [12] 1057 	mov	r7,a
      00258F BF 02 00         [24] 1058 	cjne	r7,#0x02,00249$
      002592                       1059 00249$:
      002592 50 0A            [24] 1060 	jnc	00138$
                                   1061 ;	ttt.c:142: currentIndex+=1;
      002594 8F 06            [24] 1062 	mov	ar6,r7
      002596 90 00 17         [24] 1063 	mov	dptr,#_currentIndex
      002599 EE               [12] 1064 	mov	a,r6
      00259A 04               [12] 1065 	inc	a
      00259B F0               [24] 1066 	movx	@dptr,a
      00259C 80 2D            [24] 1067 	sjmp	00139$
      00259E                       1068 00138$:
                                   1069 ;	ttt.c:143: else if(currentIndex>=3 && currentIndex<5)
      00259E BF 03 00         [24] 1070 	cjne	r7,#0x03,00251$
      0025A1                       1071 00251$:
      0025A1 40 0D            [24] 1072 	jc	00134$
      0025A3 BF 05 00         [24] 1073 	cjne	r7,#0x05,00253$
      0025A6                       1074 00253$:
      0025A6 50 08            [24] 1075 	jnc	00134$
                                   1076 ;	ttt.c:144: currentIndex+=1;
      0025A8 90 00 17         [24] 1077 	mov	dptr,#_currentIndex
      0025AB EF               [12] 1078 	mov	a,r7
      0025AC 04               [12] 1079 	inc	a
      0025AD F0               [24] 1080 	movx	@dptr,a
      0025AE 80 1B            [24] 1081 	sjmp	00139$
      0025B0                       1082 00134$:
                                   1083 ;	ttt.c:145: else if(currentIndex>=6 && currentIndex<8)
      0025B0 90 00 17         [24] 1084 	mov	dptr,#_currentIndex
      0025B3 E0               [24] 1085 	movx	a,@dptr
      0025B4 FF               [12] 1086 	mov	r7,a
      0025B5 BF 06 00         [24] 1087 	cjne	r7,#0x06,00255$
      0025B8                       1088 00255$:
      0025B8 50 03            [24] 1089 	jnc	00256$
      0025BA 02 24 A1         [24] 1090 	ljmp	00143$
      0025BD                       1091 00256$:
      0025BD BF 08 00         [24] 1092 	cjne	r7,#0x08,00257$
      0025C0                       1093 00257$:
      0025C0 40 03            [24] 1094 	jc	00258$
      0025C2 02 24 A1         [24] 1095 	ljmp	00143$
      0025C5                       1096 00258$:
                                   1097 ;	ttt.c:146: currentIndex+=1;
      0025C5 90 00 17         [24] 1098 	mov	dptr,#_currentIndex
      0025C8 EF               [12] 1099 	mov	a,r7
      0025C9 04               [12] 1100 	inc	a
      0025CA F0               [24] 1101 	movx	@dptr,a
                                   1102 ;	ttt.c:148: break;
      0025CB                       1103 00139$:
                                   1104 ;	ttt.c:149: currentPos=A[currentIndex];
      0025CB 90 00 17         [24] 1105 	mov	dptr,#_currentIndex
      0025CE E0               [24] 1106 	movx	a,@dptr
      0025CF 90 2B 00         [24] 1107 	mov	dptr,#_A
      0025D2 93               [24] 1108 	movc	a,@a+dptr
      0025D3 FF               [12] 1109 	mov	r7,a
      0025D4 90 00 16         [24] 1110 	mov	dptr,#_currentPos
      0025D7 F0               [24] 1111 	movx	@dptr,a
                                   1112 ;	ttt.c:150: lcdgotoaddr(currentPos);
      0025D8 8F 82            [24] 1113 	mov	dpl,r7
      0025DA 12 20 96         [24] 1114 	lcall	_lcdgotoaddr
                                   1115 ;	ttt.c:154: }//switch
                                   1116 ;	ttt.c:235: }
      0025DD 02 24 A1         [24] 1117 	ljmp	00143$
                                   1118 ;------------------------------------------------------------
                                   1119 ;Allocation info for local variables in function 'Init_Game'
                                   1120 ;------------------------------------------------------------
                                   1121 ;	ttt.c:237: void Init_Game(void)
                                   1122 ;	-----------------------------------------
                                   1123 ;	 function Init_Game
                                   1124 ;	-----------------------------------------
      0025E0                       1125 _Init_Game:
                                   1126 ;	ttt.c:239: ccSquare();
      0025E0 12 22 E5         [24] 1127 	lcall	_ccSquare
                                   1128 ;	ttt.c:240: ccSWO();
      0025E3 12 23 E3         [24] 1129 	lcall	_ccSWO
                                   1130 ;	ttt.c:241: ccSWX();
      0025E6 12 23 64         [24] 1131 	lcall	_ccSWX
                                   1132 ;	ttt.c:243: lcdgotoaddr(0x81);
      0025E9 75 82 81         [24] 1133 	mov	dpl,#0x81
      0025EC 12 20 96         [24] 1134 	lcall	_lcdgotoaddr
                                   1135 ;	ttt.c:244: lcdputstr(" TIC-TAC-TOE");
      0025EF 90 2B 09         [24] 1136 	mov	dptr,#___str_0
      0025F2 75 F0 80         [24] 1137 	mov	b,#0x80
      0025F5 12 21 38         [24] 1138 	lcall	_lcdputstr
                                   1139 ;	ttt.c:246: lcdgotoaddr(0x92);
      0025F8 75 82 92         [24] 1140 	mov	dpl,#0x92
      0025FB 12 20 96         [24] 1141 	lcall	_lcdgotoaddr
                                   1142 ;	ttt.c:247: lcd_data(0x00);
      0025FE 75 82 00         [24] 1143 	mov	dpl,#0x00
      002601 12 20 CD         [24] 1144 	lcall	_lcd_data
                                   1145 ;	ttt.c:248: lcd_data(0x00);
      002604 75 82 00         [24] 1146 	mov	dpl,#0x00
      002607 12 20 CD         [24] 1147 	lcall	_lcd_data
                                   1148 ;	ttt.c:249: lcdgotoaddr(0x93);
      00260A 75 82 93         [24] 1149 	mov	dpl,#0x93
      00260D 12 20 96         [24] 1150 	lcall	_lcdgotoaddr
                                   1151 ;	ttt.c:250: lcd_data(0x00);
      002610 75 82 00         [24] 1152 	mov	dpl,#0x00
      002613 12 20 CD         [24] 1153 	lcall	_lcd_data
                                   1154 ;	ttt.c:251: lcd_data(0x00);
      002616 75 82 00         [24] 1155 	mov	dpl,#0x00
      002619 12 20 CD         [24] 1156 	lcall	_lcd_data
                                   1157 ;	ttt.c:252: lcdgotoaddr(0x94);
      00261C 75 82 94         [24] 1158 	mov	dpl,#0x94
      00261F 12 20 96         [24] 1159 	lcall	_lcdgotoaddr
                                   1160 ;	ttt.c:253: lcd_data(0x00);
      002622 75 82 00         [24] 1161 	mov	dpl,#0x00
      002625 12 20 CD         [24] 1162 	lcall	_lcd_data
                                   1163 ;	ttt.c:254: lcd_data(0x00);
      002628 75 82 00         [24] 1164 	mov	dpl,#0x00
      00262B 12 20 CD         [24] 1165 	lcall	_lcd_data
                                   1166 ;	ttt.c:256: lcdgotoaddr(0x8A);
      00262E 75 82 8A         [24] 1167 	mov	dpl,#0x8a
      002631 12 20 96         [24] 1168 	lcall	_lcdgotoaddr
                                   1169 ;	ttt.c:257: lcd_data(0x00);
      002634 75 82 00         [24] 1170 	mov	dpl,#0x00
      002637 12 20 CD         [24] 1171 	lcall	_lcd_data
                                   1172 ;	ttt.c:258: lcd_data(0x00);
      00263A 75 82 00         [24] 1173 	mov	dpl,#0x00
      00263D 12 20 CD         [24] 1174 	lcall	_lcd_data
                                   1175 ;	ttt.c:259: lcdgotoaddr(0x8B);
      002640 75 82 8B         [24] 1176 	mov	dpl,#0x8b
      002643 12 20 96         [24] 1177 	lcall	_lcdgotoaddr
                                   1178 ;	ttt.c:260: lcd_data(0x00);
      002646 75 82 00         [24] 1179 	mov	dpl,#0x00
      002649 12 20 CD         [24] 1180 	lcall	_lcd_data
                                   1181 ;	ttt.c:261: lcd_data(0x00);
      00264C 75 82 00         [24] 1182 	mov	dpl,#0x00
      00264F 12 20 CD         [24] 1183 	lcall	_lcd_data
                                   1184 ;	ttt.c:262: lcdgotoaddr(0x8C);
      002652 75 82 8C         [24] 1185 	mov	dpl,#0x8c
      002655 12 20 96         [24] 1186 	lcall	_lcdgotoaddr
                                   1187 ;	ttt.c:263: lcd_data(0x00);
      002658 75 82 00         [24] 1188 	mov	dpl,#0x00
      00265B 12 20 CD         [24] 1189 	lcall	_lcd_data
                                   1190 ;	ttt.c:264: lcd_data(0x00);
      00265E 75 82 00         [24] 1191 	mov	dpl,#0x00
      002661 12 20 CD         [24] 1192 	lcall	_lcd_data
                                   1193 ;	ttt.c:266: lcdgotoaddr(0x9A);
      002664 75 82 9A         [24] 1194 	mov	dpl,#0x9a
      002667 12 20 96         [24] 1195 	lcall	_lcdgotoaddr
                                   1196 ;	ttt.c:267: lcd_data(0x00);
      00266A 75 82 00         [24] 1197 	mov	dpl,#0x00
      00266D 12 20 CD         [24] 1198 	lcall	_lcd_data
                                   1199 ;	ttt.c:268: lcd_data(0x00);
      002670 75 82 00         [24] 1200 	mov	dpl,#0x00
      002673 12 20 CD         [24] 1201 	lcall	_lcd_data
                                   1202 ;	ttt.c:269: lcdgotoaddr(0x9B);
      002676 75 82 9B         [24] 1203 	mov	dpl,#0x9b
      002679 12 20 96         [24] 1204 	lcall	_lcdgotoaddr
                                   1205 ;	ttt.c:270: lcd_data(0x00);
      00267C 75 82 00         [24] 1206 	mov	dpl,#0x00
      00267F 12 20 CD         [24] 1207 	lcall	_lcd_data
                                   1208 ;	ttt.c:271: lcd_data(0x00);
      002682 75 82 00         [24] 1209 	mov	dpl,#0x00
      002685 12 20 CD         [24] 1210 	lcall	_lcd_data
                                   1211 ;	ttt.c:272: lcdgotoaddr(0x9C);
      002688 75 82 9C         [24] 1212 	mov	dpl,#0x9c
      00268B 12 20 96         [24] 1213 	lcall	_lcdgotoaddr
                                   1214 ;	ttt.c:273: lcd_data(0x00);
      00268E 75 82 00         [24] 1215 	mov	dpl,#0x00
      002691 12 20 CD         [24] 1216 	lcall	_lcd_data
                                   1217 ;	ttt.c:274: lcd_data(0x00);
      002694 75 82 00         [24] 1218 	mov	dpl,#0x00
                                   1219 ;	ttt.c:275: }
      002697 02 20 CD         [24] 1220 	ljmp	_lcd_data
                                   1221 ;------------------------------------------------------------
                                   1222 ;Allocation info for local variables in function 'changeState'
                                   1223 ;------------------------------------------------------------
                                   1224 ;	ttt.c:278: int changeState(void)
                                   1225 ;	-----------------------------------------
                                   1226 ;	 function changeState
                                   1227 ;	-----------------------------------------
      00269A                       1228 _changeState:
                                   1229 ;	ttt.c:282: if( M[currentIndex] != 0)
      00269A 90 00 17         [24] 1230 	mov	dptr,#_currentIndex
      00269D E0               [24] 1231 	movx	a,@dptr
      00269E 24 0D            [12] 1232 	add	a,#_M
      0026A0 FF               [12] 1233 	mov	r7,a
      0026A1 E4               [12] 1234 	clr	a
      0026A2 34 00            [12] 1235 	addc	a,#(_M >> 8)
      0026A4 FE               [12] 1236 	mov	r6,a
      0026A5 8F 82            [24] 1237 	mov	dpl,r7
      0026A7 8E 83            [24] 1238 	mov	dph,r6
      0026A9 E0               [24] 1239 	movx	a,@dptr
      0026AA 60 04            [24] 1240 	jz	00102$
                                   1241 ;	ttt.c:283: return -1;
      0026AC 90 FF FF         [24] 1242 	mov	dptr,#0xffff
      0026AF 22               [24] 1243 	ret
      0026B0                       1244 00102$:
                                   1245 ;	ttt.c:286: if(currentPlayer == 1){
      0026B0 90 00 18         [24] 1246 	mov	dptr,#_currentPlayer
      0026B3 E0               [24] 1247 	movx	a,@dptr
      0026B4 FE               [12] 1248 	mov	r6,a
      0026B5 A3               [24] 1249 	inc	dptr
      0026B6 E0               [24] 1250 	movx	a,@dptr
      0026B7 FF               [12] 1251 	mov	r7,a
      0026B8 BE 01 21         [24] 1252 	cjne	r6,#0x01,00106$
      0026BB BF 00 1E         [24] 1253 	cjne	r7,#0x00,00106$
                                   1254 ;	ttt.c:287: putX();
      0026BE 12 24 62         [24] 1255 	lcall	_putX
                                   1256 ;	ttt.c:288: M[currentIndex] = 1;
      0026C1 90 00 17         [24] 1257 	mov	dptr,#_currentIndex
      0026C4 E0               [24] 1258 	movx	a,@dptr
      0026C5 FD               [12] 1259 	mov	r5,a
      0026C6 24 0D            [12] 1260 	add	a,#_M
      0026C8 F5 82            [12] 1261 	mov	dpl,a
      0026CA E4               [12] 1262 	clr	a
      0026CB 34 00            [12] 1263 	addc	a,#(_M >> 8)
      0026CD F5 83            [12] 1264 	mov	dph,a
      0026CF 74 01            [12] 1265 	mov	a,#0x01
      0026D1 F0               [24] 1266 	movx	@dptr,a
                                   1267 ;	ttt.c:289: currentPlayer = 2;
      0026D2 90 00 18         [24] 1268 	mov	dptr,#_currentPlayer
      0026D5 04               [12] 1269 	inc	a
      0026D6 F0               [24] 1270 	movx	@dptr,a
      0026D7 E4               [12] 1271 	clr	a
      0026D8 A3               [24] 1272 	inc	dptr
      0026D9 F0               [24] 1273 	movx	@dptr,a
      0026DA 80 22            [24] 1274 	sjmp	00107$
      0026DC                       1275 00106$:
                                   1276 ;	ttt.c:291: else if (currentPlayer == 2){
      0026DC BE 02 1F         [24] 1277 	cjne	r6,#0x02,00107$
      0026DF BF 00 1C         [24] 1278 	cjne	r7,#0x00,00107$
                                   1279 ;	ttt.c:292: putO();
      0026E2 12 24 6E         [24] 1280 	lcall	_putO
                                   1281 ;	ttt.c:293: M[currentIndex] = 2;
      0026E5 90 00 17         [24] 1282 	mov	dptr,#_currentIndex
      0026E8 E0               [24] 1283 	movx	a,@dptr
      0026E9 FF               [12] 1284 	mov	r7,a
      0026EA 24 0D            [12] 1285 	add	a,#_M
      0026EC F5 82            [12] 1286 	mov	dpl,a
      0026EE E4               [12] 1287 	clr	a
      0026EF 34 00            [12] 1288 	addc	a,#(_M >> 8)
      0026F1 F5 83            [12] 1289 	mov	dph,a
      0026F3 74 02            [12] 1290 	mov	a,#0x02
      0026F5 F0               [24] 1291 	movx	@dptr,a
                                   1292 ;	ttt.c:294: currentPlayer =1;
      0026F6 90 00 18         [24] 1293 	mov	dptr,#_currentPlayer
      0026F9 14               [12] 1294 	dec	a
      0026FA F0               [24] 1295 	movx	@dptr,a
      0026FB E4               [12] 1296 	clr	a
      0026FC A3               [24] 1297 	inc	dptr
      0026FD F0               [24] 1298 	movx	@dptr,a
      0026FE                       1299 00107$:
                                   1300 ;	ttt.c:297: lcdgotoaddr(0x96);
      0026FE 75 82 96         [24] 1301 	mov	dpl,#0x96
      002701 12 20 96         [24] 1302 	lcall	_lcdgotoaddr
                                   1303 ;	ttt.c:298: if(currentPlayer == 1){
      002704 90 00 18         [24] 1304 	mov	dptr,#_currentPlayer
      002707 E0               [24] 1305 	movx	a,@dptr
      002708 FE               [12] 1306 	mov	r6,a
      002709 A3               [24] 1307 	inc	dptr
      00270A E0               [24] 1308 	movx	a,@dptr
      00270B FF               [12] 1309 	mov	r7,a
      00270C BE 01 08         [24] 1310 	cjne	r6,#0x01,00109$
      00270F BF 00 05         [24] 1311 	cjne	r7,#0x00,00109$
                                   1312 ;	ttt.c:299: putX();
      002712 12 24 62         [24] 1313 	lcall	_putX
      002715 80 03            [24] 1314 	sjmp	00110$
      002717                       1315 00109$:
                                   1316 ;	ttt.c:302: putO();
      002717 12 24 6E         [24] 1317 	lcall	_putO
      00271A                       1318 00110$:
                                   1319 ;	ttt.c:305: lcdgotoaddr(currentPos);
      00271A 90 00 16         [24] 1320 	mov	dptr,#_currentPos
      00271D E0               [24] 1321 	movx	a,@dptr
      00271E F5 82            [12] 1322 	mov	dpl,a
      002720 12 20 96         [24] 1323 	lcall	_lcdgotoaddr
                                   1324 ;	ttt.c:307: return 1;
      002723 90 00 01         [24] 1325 	mov	dptr,#0x0001
                                   1326 ;	ttt.c:308: }
      002726 22               [24] 1327 	ret
                                   1328 ;------------------------------------------------------------
                                   1329 ;Allocation info for local variables in function 'gameDecision'
                                   1330 ;------------------------------------------------------------
                                   1331 ;decision                  Allocated with name '_gameDecision_decision_65536_91'
                                   1332 ;XCount                    Allocated with name '_gameDecision_XCount_65536_91'
                                   1333 ;OCount                    Allocated with name '_gameDecision_OCount_65536_91'
                                   1334 ;j                         Allocated with name '_gameDecision_j_131072_92'
                                   1335 ;i                         Allocated with name '_gameDecision_i_262144_94'
                                   1336 ;j                         Allocated with name '_gameDecision_j_131072_97'
                                   1337 ;i                         Allocated with name '_gameDecision_i_262144_99'
                                   1338 ;i                         Allocated with name '_gameDecision_i_131072_102'
                                   1339 ;sloc0                     Allocated with name '_gameDecision_sloc0_1_0'
                                   1340 ;sloc1                     Allocated with name '_gameDecision_sloc1_1_0'
                                   1341 ;sloc2                     Allocated with name '_gameDecision_sloc2_1_0'
                                   1342 ;------------------------------------------------------------
                                   1343 ;	ttt.c:310: int gameDecision(void)
                                   1344 ;	-----------------------------------------
                                   1345 ;	 function gameDecision
                                   1346 ;	-----------------------------------------
      002727                       1347 _gameDecision:
                                   1348 ;	ttt.c:317: for(int j=0; j<3; j++){
      002727 7E 00            [12] 1349 	mov	r6,#0x00
      002729 7F 00            [12] 1350 	mov	r7,#0x00
      00272B                       1351 00151$:
      00272B C3               [12] 1352 	clr	c
      00272C EE               [12] 1353 	mov	a,r6
      00272D 94 03            [12] 1354 	subb	a,#0x03
      00272F EF               [12] 1355 	mov	a,r7
      002730 64 80            [12] 1356 	xrl	a,#0x80
      002732 94 80            [12] 1357 	subb	a,#0x80
      002734 40 03            [24] 1358 	jc	00279$
      002736 02 27 FE         [24] 1359 	ljmp	00179$
      002739                       1360 00279$:
                                   1361 ;	ttt.c:319: for(int i=0; i<3 ; i++){
      002739 8E 04            [24] 1362 	mov	ar4,r6
      00273B 8F 05            [24] 1363 	mov	ar5,r7
      00273D E4               [12] 1364 	clr	a
      00273E FA               [12] 1365 	mov	r2,a
      00273F FB               [12] 1366 	mov	r3,a
      002740 F8               [12] 1367 	mov	r0,a
      002741 F9               [12] 1368 	mov	r1,a
      002742 F5 08            [12] 1369 	mov	_gameDecision_sloc0_1_0,a
      002744 F5 09            [12] 1370 	mov	(_gameDecision_sloc0_1_0 + 1),a
      002746                       1371 00148$:
      002746 C3               [12] 1372 	clr	c
      002747 E5 08            [12] 1373 	mov	a,_gameDecision_sloc0_1_0
      002749 94 03            [12] 1374 	subb	a,#0x03
      00274B E5 09            [12] 1375 	mov	a,(_gameDecision_sloc0_1_0 + 1)
      00274D 64 80            [12] 1376 	xrl	a,#0x80
      00274F 94 80            [12] 1377 	subb	a,#0x80
      002751 50 6E            [24] 1378 	jnc	00106$
                                   1379 ;	ttt.c:320: if( (M[j+(i*3)] == 1))
      002753 C0 02            [24] 1380 	push	ar2
      002755 C0 03            [24] 1381 	push	ar3
      002757 8C 0A            [24] 1382 	mov	_gameDecision_sloc1_1_0,r4
      002759 E5 08            [12] 1383 	mov	a,_gameDecision_sloc0_1_0
      00275B 75 F0 03         [24] 1384 	mov	b,#0x03
      00275E A4               [48] 1385 	mul	ab
      00275F F5 0B            [12] 1386 	mov	_gameDecision_sloc2_1_0,a
      002761 25 0A            [12] 1387 	add	a,_gameDecision_sloc1_1_0
      002763 FB               [12] 1388 	mov	r3,a
      002764 33               [12] 1389 	rlc	a
      002765 95 E0            [12] 1390 	subb	a,acc
      002767 FA               [12] 1391 	mov	r2,a
      002768 EB               [12] 1392 	mov	a,r3
      002769 24 0D            [12] 1393 	add	a,#_M
      00276B F5 82            [12] 1394 	mov	dpl,a
      00276D EA               [12] 1395 	mov	a,r2
      00276E 34 00            [12] 1396 	addc	a,#(_M >> 8)
      002770 F5 83            [12] 1397 	mov	dph,a
      002772 E0               [24] 1398 	movx	a,@dptr
      002773 FB               [12] 1399 	mov	r3,a
      002774 BB 01 02         [24] 1400 	cjne	r3,#0x01,00281$
      002777 80 06            [24] 1401 	sjmp	00282$
      002779                       1402 00281$:
      002779 D0 03            [24] 1403 	pop	ar3
      00277B D0 02            [24] 1404 	pop	ar2
      00277D 80 0B            [24] 1405 	sjmp	00104$
      00277F                       1406 00282$:
      00277F D0 03            [24] 1407 	pop	ar3
      002781 D0 02            [24] 1408 	pop	ar2
                                   1409 ;	ttt.c:321: XCount++;
      002783 08               [12] 1410 	inc	r0
      002784 B8 00 30         [24] 1411 	cjne	r0,#0x00,00149$
      002787 09               [12] 1412 	inc	r1
      002788 80 2D            [24] 1413 	sjmp	00149$
      00278A                       1414 00104$:
                                   1415 ;	ttt.c:322: else if ( (M[j+(i*3)] == 2))
      00278A C0 04            [24] 1416 	push	ar4
      00278C C0 05            [24] 1417 	push	ar5
      00278E E5 0B            [12] 1418 	mov	a,_gameDecision_sloc2_1_0
      002790 25 0A            [12] 1419 	add	a,_gameDecision_sloc1_1_0
      002792 FD               [12] 1420 	mov	r5,a
      002793 33               [12] 1421 	rlc	a
      002794 95 E0            [12] 1422 	subb	a,acc
      002796 FC               [12] 1423 	mov	r4,a
      002797 ED               [12] 1424 	mov	a,r5
      002798 24 0D            [12] 1425 	add	a,#_M
      00279A F5 82            [12] 1426 	mov	dpl,a
      00279C EC               [12] 1427 	mov	a,r4
      00279D 34 00            [12] 1428 	addc	a,#(_M >> 8)
      00279F F5 83            [12] 1429 	mov	dph,a
      0027A1 E0               [24] 1430 	movx	a,@dptr
      0027A2 FD               [12] 1431 	mov	r5,a
      0027A3 BD 02 02         [24] 1432 	cjne	r5,#0x02,00284$
      0027A6 80 06            [24] 1433 	sjmp	00285$
      0027A8                       1434 00284$:
      0027A8 D0 05            [24] 1435 	pop	ar5
      0027AA D0 04            [24] 1436 	pop	ar4
      0027AC 80 09            [24] 1437 	sjmp	00149$
      0027AE                       1438 00285$:
      0027AE D0 05            [24] 1439 	pop	ar5
      0027B0 D0 04            [24] 1440 	pop	ar4
                                   1441 ;	ttt.c:323: OCount++;
      0027B2 0A               [12] 1442 	inc	r2
      0027B3 BA 00 01         [24] 1443 	cjne	r2,#0x00,00286$
      0027B6 0B               [12] 1444 	inc	r3
      0027B7                       1445 00286$:
      0027B7                       1446 00149$:
                                   1447 ;	ttt.c:319: for(int i=0; i<3 ; i++){
      0027B7 05 08            [12] 1448 	inc	_gameDecision_sloc0_1_0
      0027B9 E4               [12] 1449 	clr	a
      0027BA B5 08 89         [24] 1450 	cjne	a,_gameDecision_sloc0_1_0,00148$
      0027BD 05 09            [12] 1451 	inc	(_gameDecision_sloc0_1_0 + 1)
      0027BF 80 85            [24] 1452 	sjmp	00148$
      0027C1                       1453 00106$:
                                   1454 ;	ttt.c:325: if(XCount == 3 || OCount == 3){
      0027C1 E4               [12] 1455 	clr	a
      0027C2 B8 03 04         [24] 1456 	cjne	r0,#0x03,00288$
      0027C5 B9 00 01         [24] 1457 	cjne	r1,#0x00,00288$
      0027C8 04               [12] 1458 	inc	a
      0027C9                       1459 00288$:
      0027C9 FD               [12] 1460 	mov	r5,a
      0027CA 70 06            [24] 1461 	jnz	00110$
      0027CC BA 03 27         [24] 1462 	cjne	r2,#0x03,00152$
      0027CF BB 00 24         [24] 1463 	cjne	r3,#0x00,00152$
      0027D2                       1464 00110$:
                                   1465 ;	ttt.c:326: if(XCount ==3 )
      0027D2 ED               [12] 1466 	mov	a,r5
      0027D3 60 0B            [24] 1467 	jz	00108$
                                   1468 ;	ttt.c:327: decision = 1;
      0027D5 90 00 1A         [24] 1469 	mov	dptr,#_gameDecision_decision_65536_91
      0027D8 74 01            [12] 1470 	mov	a,#0x01
      0027DA F0               [24] 1471 	movx	@dptr,a
      0027DB E4               [12] 1472 	clr	a
      0027DC A3               [24] 1473 	inc	dptr
      0027DD F0               [24] 1474 	movx	@dptr,a
      0027DE 80 09            [24] 1475 	sjmp	00109$
      0027E0                       1476 00108$:
                                   1477 ;	ttt.c:329: decision = 2;
      0027E0 90 00 1A         [24] 1478 	mov	dptr,#_gameDecision_decision_65536_91
      0027E3 74 02            [12] 1479 	mov	a,#0x02
      0027E5 F0               [24] 1480 	movx	@dptr,a
      0027E6 E4               [12] 1481 	clr	a
      0027E7 A3               [24] 1482 	inc	dptr
      0027E8 F0               [24] 1483 	movx	@dptr,a
      0027E9                       1484 00109$:
                                   1485 ;	ttt.c:330: return decision;
      0027E9 90 00 1A         [24] 1486 	mov	dptr,#_gameDecision_decision_65536_91
      0027EC E0               [24] 1487 	movx	a,@dptr
      0027ED FC               [12] 1488 	mov	r4,a
      0027EE A3               [24] 1489 	inc	dptr
      0027EF E0               [24] 1490 	movx	a,@dptr
      0027F0 FD               [12] 1491 	mov	r5,a
      0027F1 8C 82            [24] 1492 	mov	dpl,r4
      0027F3 8D 83            [24] 1493 	mov	dph,r5
      0027F5 22               [24] 1494 	ret
      0027F6                       1495 00152$:
                                   1496 ;	ttt.c:317: for(int j=0; j<3; j++){
      0027F6 0E               [12] 1497 	inc	r6
      0027F7 BE 00 01         [24] 1498 	cjne	r6,#0x00,00294$
      0027FA 0F               [12] 1499 	inc	r7
      0027FB                       1500 00294$:
      0027FB 02 27 2B         [24] 1501 	ljmp	00151$
                                   1502 ;	ttt.c:336: for(int j=0; j<3; j++){
      0027FE                       1503 00179$:
      0027FE 7E 00            [12] 1504 	mov	r6,#0x00
      002800 7F 00            [12] 1505 	mov	r7,#0x00
      002802                       1506 00157$:
      002802 C3               [12] 1507 	clr	c
      002803 EE               [12] 1508 	mov	a,r6
      002804 94 03            [12] 1509 	subb	a,#0x03
      002806 EF               [12] 1510 	mov	a,r7
      002807 64 80            [12] 1511 	xrl	a,#0x80
      002809 94 80            [12] 1512 	subb	a,#0x80
      00280B 40 03            [24] 1513 	jc	00295$
      00280D 02 28 D8         [24] 1514 	ljmp	00126$
      002810                       1515 00295$:
                                   1516 ;	ttt.c:338: for(int i=0; i<3 ; i++){
      002810 8E 04            [24] 1517 	mov	ar4,r6
      002812 8F 05            [24] 1518 	mov	ar5,r7
      002814 E4               [12] 1519 	clr	a
      002815 FA               [12] 1520 	mov	r2,a
      002816 FB               [12] 1521 	mov	r3,a
      002817 F8               [12] 1522 	mov	r0,a
      002818 F9               [12] 1523 	mov	r1,a
      002819 F5 08            [12] 1524 	mov	_gameDecision_sloc0_1_0,a
      00281B F5 09            [12] 1525 	mov	(_gameDecision_sloc0_1_0 + 1),a
      00281D                       1526 00154$:
      00281D C3               [12] 1527 	clr	c
      00281E E5 08            [12] 1528 	mov	a,_gameDecision_sloc0_1_0
      002820 94 03            [12] 1529 	subb	a,#0x03
      002822 E5 09            [12] 1530 	mov	a,(_gameDecision_sloc0_1_0 + 1)
      002824 64 80            [12] 1531 	xrl	a,#0x80
      002826 94 80            [12] 1532 	subb	a,#0x80
      002828 50 71            [24] 1533 	jnc	00119$
                                   1534 ;	ttt.c:339: if( (M[(j*3)+i] == 1))
      00282A C0 02            [24] 1535 	push	ar2
      00282C C0 03            [24] 1536 	push	ar3
      00282E 8C 03            [24] 1537 	mov	ar3,r4
      002830 EB               [12] 1538 	mov	a,r3
      002831 75 F0 03         [24] 1539 	mov	b,#0x03
      002834 A4               [48] 1540 	mul	ab
      002835 F5 0B            [12] 1541 	mov	_gameDecision_sloc2_1_0,a
      002837 E5 08            [12] 1542 	mov	a,_gameDecision_sloc0_1_0
      002839 F5 0A            [12] 1543 	mov	_gameDecision_sloc1_1_0,a
      00283B 25 0B            [12] 1544 	add	a,_gameDecision_sloc2_1_0
      00283D FB               [12] 1545 	mov	r3,a
      00283E 33               [12] 1546 	rlc	a
      00283F 95 E0            [12] 1547 	subb	a,acc
      002841 FA               [12] 1548 	mov	r2,a
      002842 EB               [12] 1549 	mov	a,r3
      002843 24 0D            [12] 1550 	add	a,#_M
      002845 F5 82            [12] 1551 	mov	dpl,a
      002847 EA               [12] 1552 	mov	a,r2
      002848 34 00            [12] 1553 	addc	a,#(_M >> 8)
      00284A F5 83            [12] 1554 	mov	dph,a
      00284C E0               [24] 1555 	movx	a,@dptr
      00284D FB               [12] 1556 	mov	r3,a
      00284E BB 01 02         [24] 1557 	cjne	r3,#0x01,00297$
      002851 80 06            [24] 1558 	sjmp	00298$
      002853                       1559 00297$:
      002853 D0 03            [24] 1560 	pop	ar3
      002855 D0 02            [24] 1561 	pop	ar2
      002857 80 0B            [24] 1562 	sjmp	00117$
      002859                       1563 00298$:
      002859 D0 03            [24] 1564 	pop	ar3
      00285B D0 02            [24] 1565 	pop	ar2
                                   1566 ;	ttt.c:340: XCount++;
      00285D 08               [12] 1567 	inc	r0
      00285E B8 00 30         [24] 1568 	cjne	r0,#0x00,00155$
      002861 09               [12] 1569 	inc	r1
      002862 80 2D            [24] 1570 	sjmp	00155$
      002864                       1571 00117$:
                                   1572 ;	ttt.c:341: else if ( (M[(j*3)+i] == 2))
      002864 C0 04            [24] 1573 	push	ar4
      002866 C0 05            [24] 1574 	push	ar5
      002868 E5 0A            [12] 1575 	mov	a,_gameDecision_sloc1_1_0
      00286A 25 0B            [12] 1576 	add	a,_gameDecision_sloc2_1_0
      00286C FD               [12] 1577 	mov	r5,a
      00286D 33               [12] 1578 	rlc	a
      00286E 95 E0            [12] 1579 	subb	a,acc
      002870 FC               [12] 1580 	mov	r4,a
      002871 ED               [12] 1581 	mov	a,r5
      002872 24 0D            [12] 1582 	add	a,#_M
      002874 F5 82            [12] 1583 	mov	dpl,a
      002876 EC               [12] 1584 	mov	a,r4
      002877 34 00            [12] 1585 	addc	a,#(_M >> 8)
      002879 F5 83            [12] 1586 	mov	dph,a
      00287B E0               [24] 1587 	movx	a,@dptr
      00287C FD               [12] 1588 	mov	r5,a
      00287D BD 02 02         [24] 1589 	cjne	r5,#0x02,00300$
      002880 80 06            [24] 1590 	sjmp	00301$
      002882                       1591 00300$:
      002882 D0 05            [24] 1592 	pop	ar5
      002884 D0 04            [24] 1593 	pop	ar4
      002886 80 09            [24] 1594 	sjmp	00155$
      002888                       1595 00301$:
      002888 D0 05            [24] 1596 	pop	ar5
      00288A D0 04            [24] 1597 	pop	ar4
                                   1598 ;	ttt.c:342: OCount++;
      00288C 0A               [12] 1599 	inc	r2
      00288D BA 00 01         [24] 1600 	cjne	r2,#0x00,00302$
      002890 0B               [12] 1601 	inc	r3
      002891                       1602 00302$:
      002891                       1603 00155$:
                                   1604 ;	ttt.c:338: for(int i=0; i<3 ; i++){
      002891 05 08            [12] 1605 	inc	_gameDecision_sloc0_1_0
      002893 E4               [12] 1606 	clr	a
      002894 B5 08 86         [24] 1607 	cjne	a,_gameDecision_sloc0_1_0,00154$
      002897 05 09            [12] 1608 	inc	(_gameDecision_sloc0_1_0 + 1)
      002899 80 82            [24] 1609 	sjmp	00154$
      00289B                       1610 00119$:
                                   1611 ;	ttt.c:344: if(XCount == 3 || OCount == 3){
      00289B E4               [12] 1612 	clr	a
      00289C B8 03 04         [24] 1613 	cjne	r0,#0x03,00304$
      00289F B9 00 01         [24] 1614 	cjne	r1,#0x00,00304$
      0028A2 04               [12] 1615 	inc	a
      0028A3                       1616 00304$:
      0028A3 FD               [12] 1617 	mov	r5,a
      0028A4 70 06            [24] 1618 	jnz	00123$
      0028A6 BA 03 27         [24] 1619 	cjne	r2,#0x03,00158$
      0028A9 BB 00 24         [24] 1620 	cjne	r3,#0x00,00158$
      0028AC                       1621 00123$:
                                   1622 ;	ttt.c:345: if(XCount ==3 )
      0028AC ED               [12] 1623 	mov	a,r5
      0028AD 60 0B            [24] 1624 	jz	00121$
                                   1625 ;	ttt.c:346: decision = 1;
      0028AF 90 00 1A         [24] 1626 	mov	dptr,#_gameDecision_decision_65536_91
      0028B2 74 01            [12] 1627 	mov	a,#0x01
      0028B4 F0               [24] 1628 	movx	@dptr,a
      0028B5 E4               [12] 1629 	clr	a
      0028B6 A3               [24] 1630 	inc	dptr
      0028B7 F0               [24] 1631 	movx	@dptr,a
      0028B8 80 09            [24] 1632 	sjmp	00122$
      0028BA                       1633 00121$:
                                   1634 ;	ttt.c:348: decision = 2;
      0028BA 90 00 1A         [24] 1635 	mov	dptr,#_gameDecision_decision_65536_91
      0028BD 74 02            [12] 1636 	mov	a,#0x02
      0028BF F0               [24] 1637 	movx	@dptr,a
      0028C0 E4               [12] 1638 	clr	a
      0028C1 A3               [24] 1639 	inc	dptr
      0028C2 F0               [24] 1640 	movx	@dptr,a
      0028C3                       1641 00122$:
                                   1642 ;	ttt.c:349: return decision;
      0028C3 90 00 1A         [24] 1643 	mov	dptr,#_gameDecision_decision_65536_91
      0028C6 E0               [24] 1644 	movx	a,@dptr
      0028C7 FC               [12] 1645 	mov	r4,a
      0028C8 A3               [24] 1646 	inc	dptr
      0028C9 E0               [24] 1647 	movx	a,@dptr
      0028CA FD               [12] 1648 	mov	r5,a
      0028CB 8C 82            [24] 1649 	mov	dpl,r4
      0028CD 8D 83            [24] 1650 	mov	dph,r5
      0028CF 22               [24] 1651 	ret
      0028D0                       1652 00158$:
                                   1653 ;	ttt.c:336: for(int j=0; j<3; j++){
      0028D0 0E               [12] 1654 	inc	r6
      0028D1 BE 00 01         [24] 1655 	cjne	r6,#0x00,00310$
      0028D4 0F               [12] 1656 	inc	r7
      0028D5                       1657 00310$:
      0028D5 02 28 02         [24] 1658 	ljmp	00157$
      0028D8                       1659 00126$:
                                   1660 ;	ttt.c:354: if( (M[0]== 1 && M[4]==1 && M[8]==1) || (M[2]==1 && M[4]==1 && M[6]==1) )
      0028D8 90 00 0D         [24] 1661 	mov	dptr,#_M
      0028DB E0               [24] 1662 	movx	a,@dptr
      0028DC FF               [12] 1663 	mov	r7,a
      0028DD BF 01 12         [24] 1664 	cjne	r7,#0x01,00133$
      0028E0 90 00 11         [24] 1665 	mov	dptr,#(_M + 0x0004)
      0028E3 E0               [24] 1666 	movx	a,@dptr
      0028E4 FE               [12] 1667 	mov	r6,a
      0028E5 BE 01 0A         [24] 1668 	cjne	r6,#0x01,00133$
      0028E8 90 00 15         [24] 1669 	mov	dptr,#(_M + 0x0008)
      0028EB E0               [24] 1670 	movx	a,@dptr
      0028EC FE               [12] 1671 	mov	r6,a
      0028ED BE 01 02         [24] 1672 	cjne	r6,#0x01,00315$
      0028F0 80 18            [24] 1673 	sjmp	00127$
      0028F2                       1674 00315$:
      0028F2                       1675 00133$:
      0028F2 90 00 0F         [24] 1676 	mov	dptr,#(_M + 0x0002)
      0028F5 E0               [24] 1677 	movx	a,@dptr
      0028F6 FE               [12] 1678 	mov	r6,a
      0028F7 BE 01 14         [24] 1679 	cjne	r6,#0x01,00128$
      0028FA 90 00 11         [24] 1680 	mov	dptr,#(_M + 0x0004)
      0028FD E0               [24] 1681 	movx	a,@dptr
      0028FE FD               [12] 1682 	mov	r5,a
      0028FF BD 01 0C         [24] 1683 	cjne	r5,#0x01,00128$
      002902 90 00 13         [24] 1684 	mov	dptr,#(_M + 0x0006)
      002905 E0               [24] 1685 	movx	a,@dptr
      002906 FD               [12] 1686 	mov	r5,a
      002907 BD 01 04         [24] 1687 	cjne	r5,#0x01,00128$
      00290A                       1688 00127$:
                                   1689 ;	ttt.c:355: return 1;
      00290A 90 00 01         [24] 1690 	mov	dptr,#0x0001
      00290D 22               [24] 1691 	ret
      00290E                       1692 00128$:
                                   1693 ;	ttt.c:357: if( (M[0]==2 && M[4]==2 && M[8]==2) || (M[2]==2 && M[4]==2 && M[6]==2) )
      00290E BF 02 12         [24] 1694 	cjne	r7,#0x02,00140$
      002911 90 00 11         [24] 1695 	mov	dptr,#(_M + 0x0004)
      002914 E0               [24] 1696 	movx	a,@dptr
      002915 FF               [12] 1697 	mov	r7,a
      002916 BF 02 0A         [24] 1698 	cjne	r7,#0x02,00140$
      002919 90 00 15         [24] 1699 	mov	dptr,#(_M + 0x0008)
      00291C E0               [24] 1700 	movx	a,@dptr
      00291D FF               [12] 1701 	mov	r7,a
      00291E BF 02 02         [24] 1702 	cjne	r7,#0x02,00326$
      002921 80 13            [24] 1703 	sjmp	00134$
      002923                       1704 00326$:
      002923                       1705 00140$:
      002923 BE 02 14         [24] 1706 	cjne	r6,#0x02,00190$
      002926 90 00 11         [24] 1707 	mov	dptr,#(_M + 0x0004)
      002929 E0               [24] 1708 	movx	a,@dptr
      00292A FF               [12] 1709 	mov	r7,a
      00292B BF 02 0C         [24] 1710 	cjne	r7,#0x02,00190$
      00292E 90 00 13         [24] 1711 	mov	dptr,#(_M + 0x0006)
      002931 E0               [24] 1712 	movx	a,@dptr
      002932 FF               [12] 1713 	mov	r7,a
      002933 BF 02 04         [24] 1714 	cjne	r7,#0x02,00190$
      002936                       1715 00134$:
                                   1716 ;	ttt.c:358: return 2;
      002936 90 00 02         [24] 1717 	mov	dptr,#0x0002
                                   1718 ;	ttt.c:360: for(int i=0; i<9; i++){
      002939 22               [24] 1719 	ret
      00293A                       1720 00190$:
      00293A 7E 00            [12] 1721 	mov	r6,#0x00
      00293C 7F 00            [12] 1722 	mov	r7,#0x00
      00293E 7C 00            [12] 1723 	mov	r4,#0x00
      002940 7D 00            [12] 1724 	mov	r5,#0x00
      002942                       1725 00160$:
      002942 C3               [12] 1726 	clr	c
      002943 EC               [12] 1727 	mov	a,r4
      002944 94 09            [12] 1728 	subb	a,#0x09
      002946 ED               [12] 1729 	mov	a,r5
      002947 64 80            [12] 1730 	xrl	a,#0x80
      002949 94 80            [12] 1731 	subb	a,#0x80
      00294B 50 1B            [24] 1732 	jnc	00143$
                                   1733 ;	ttt.c:361: if(M[i]!=0)
      00294D EC               [12] 1734 	mov	a,r4
      00294E 24 0D            [12] 1735 	add	a,#_M
      002950 FA               [12] 1736 	mov	r2,a
      002951 ED               [12] 1737 	mov	a,r5
      002952 34 00            [12] 1738 	addc	a,#(_M >> 8)
      002954 FB               [12] 1739 	mov	r3,a
      002955 8A 82            [24] 1740 	mov	dpl,r2
      002957 8B 83            [24] 1741 	mov	dph,r3
      002959 E0               [24] 1742 	movx	a,@dptr
      00295A 60 05            [24] 1743 	jz	00161$
                                   1744 ;	ttt.c:362: decision++;
      00295C 0E               [12] 1745 	inc	r6
      00295D BE 00 01         [24] 1746 	cjne	r6,#0x00,00335$
      002960 0F               [12] 1747 	inc	r7
      002961                       1748 00335$:
      002961                       1749 00161$:
                                   1750 ;	ttt.c:360: for(int i=0; i<9; i++){
      002961 0C               [12] 1751 	inc	r4
      002962 BC 00 DD         [24] 1752 	cjne	r4,#0x00,00160$
      002965 0D               [12] 1753 	inc	r5
      002966 80 DA            [24] 1754 	sjmp	00160$
      002968                       1755 00143$:
                                   1756 ;	ttt.c:365: if(decision == 9)
      002968 BE 09 08         [24] 1757 	cjne	r6,#0x09,00145$
      00296B BF 00 05         [24] 1758 	cjne	r7,#0x00,00145$
                                   1759 ;	ttt.c:366: return decision;
      00296E 8E 82            [24] 1760 	mov	dpl,r6
      002970 8F 83            [24] 1761 	mov	dph,r7
      002972 22               [24] 1762 	ret
      002973                       1763 00145$:
                                   1764 ;	ttt.c:368: return 0;
      002973 90 00 00         [24] 1765 	mov	dptr,#0x0000
                                   1766 ;	ttt.c:370: }
      002976 22               [24] 1767 	ret
                                   1768 ;------------------------------------------------------------
                                   1769 ;Allocation info for local variables in function 'restartGame'
                                   1770 ;------------------------------------------------------------
                                   1771 ;i                         Allocated with name '_restartGame_i_131072_106'
                                   1772 ;------------------------------------------------------------
                                   1773 ;	ttt.c:372: void restartGame(void)
                                   1774 ;	-----------------------------------------
                                   1775 ;	 function restartGame
                                   1776 ;	-----------------------------------------
      002977                       1777 _restartGame:
                                   1778 ;	ttt.c:374: lcd_cmd(0x01);
      002977 75 82 01         [24] 1779 	mov	dpl,#0x01
      00297A 12 20 A4         [24] 1780 	lcall	_lcd_cmd
                                   1781 ;	ttt.c:375: for(int i=0; i<9; i++)
      00297D 7E 00            [12] 1782 	mov	r6,#0x00
      00297F 7F 00            [12] 1783 	mov	r7,#0x00
      002981                       1784 00103$:
      002981 C3               [12] 1785 	clr	c
      002982 EE               [12] 1786 	mov	a,r6
      002983 94 09            [12] 1787 	subb	a,#0x09
      002985 EF               [12] 1788 	mov	a,r7
      002986 64 80            [12] 1789 	xrl	a,#0x80
      002988 94 80            [12] 1790 	subb	a,#0x80
      00298A 50 13            [24] 1791 	jnc	00101$
                                   1792 ;	ttt.c:376: M[i]=0;
      00298C EE               [12] 1793 	mov	a,r6
      00298D 24 0D            [12] 1794 	add	a,#_M
      00298F F5 82            [12] 1795 	mov	dpl,a
      002991 EF               [12] 1796 	mov	a,r7
      002992 34 00            [12] 1797 	addc	a,#(_M >> 8)
      002994 F5 83            [12] 1798 	mov	dph,a
      002996 E4               [12] 1799 	clr	a
      002997 F0               [24] 1800 	movx	@dptr,a
                                   1801 ;	ttt.c:375: for(int i=0; i<9; i++)
      002998 0E               [12] 1802 	inc	r6
      002999 BE 00 E5         [24] 1803 	cjne	r6,#0x00,00103$
      00299C 0F               [12] 1804 	inc	r7
      00299D 80 E2            [24] 1805 	sjmp	00103$
      00299F                       1806 00101$:
                                   1807 ;	ttt.c:377: Init_Game();
      00299F 12 25 E0         [24] 1808 	lcall	_Init_Game
                                   1809 ;	ttt.c:378: startGame();
                                   1810 ;	ttt.c:380: }
      0029A2 02 24 7A         [24] 1811 	ljmp	_startGame
                                   1812 ;------------------------------------------------------------
                                   1813 ;Allocation info for local variables in function 'gameOver'
                                   1814 ;------------------------------------------------------------
                                   1815 ;player                    Allocated with name '_gameOver_player_65536_107'
                                   1816 ;------------------------------------------------------------
                                   1817 ;	ttt.c:382: void gameOver(int player)
                                   1818 ;	-----------------------------------------
                                   1819 ;	 function gameOver
                                   1820 ;	-----------------------------------------
      0029A5                       1821 _gameOver:
      0029A5 AF 83            [24] 1822 	mov	r7,dph
      0029A7 E5 82            [12] 1823 	mov	a,dpl
      0029A9 90 00 1C         [24] 1824 	mov	dptr,#_gameOver_player_65536_107
      0029AC F0               [24] 1825 	movx	@dptr,a
      0029AD EF               [12] 1826 	mov	a,r7
      0029AE A3               [24] 1827 	inc	dptr
      0029AF F0               [24] 1828 	movx	@dptr,a
                                   1829 ;	ttt.c:384: lcd_cmd(0x01);
      0029B0 75 82 01         [24] 1830 	mov	dpl,#0x01
      0029B3 12 20 A4         [24] 1831 	lcall	_lcd_cmd
                                   1832 ;	ttt.c:385: if(player == 9){
      0029B6 90 00 1C         [24] 1833 	mov	dptr,#_gameOver_player_65536_107
      0029B9 E0               [24] 1834 	movx	a,@dptr
      0029BA FE               [12] 1835 	mov	r6,a
      0029BB A3               [24] 1836 	inc	dptr
      0029BC E0               [24] 1837 	movx	a,@dptr
      0029BD FF               [12] 1838 	mov	r7,a
      0029BE BE 09 14         [24] 1839 	cjne	r6,#0x09,00105$
      0029C1 BF 00 11         [24] 1840 	cjne	r7,#0x00,00105$
                                   1841 ;	ttt.c:386: lcdgotoaddr(0x90);
      0029C4 75 82 90         [24] 1842 	mov	dpl,#0x90
      0029C7 12 20 96         [24] 1843 	lcall	_lcdgotoaddr
                                   1844 ;	ttt.c:387: lcdputstr(" IT'S A DRAW!! ");
      0029CA 90 2B 16         [24] 1845 	mov	dptr,#___str_1
      0029CD 75 F0 80         [24] 1846 	mov	b,#0x80
      0029D0 12 21 38         [24] 1847 	lcall	_lcdputstr
      0029D3 80 37            [24] 1848 	sjmp	00107$
      0029D5                       1849 00105$:
                                   1850 ;	ttt.c:389: lcdgotoaddr(0x92);
      0029D5 75 82 92         [24] 1851 	mov	dpl,#0x92
      0029D8 C0 07            [24] 1852 	push	ar7
      0029DA C0 06            [24] 1853 	push	ar6
      0029DC 12 20 96         [24] 1854 	lcall	_lcdgotoaddr
                                   1855 ;	ttt.c:390: lcdputstr("WINNER!!");
      0029DF 90 2B 26         [24] 1856 	mov	dptr,#___str_2
      0029E2 75 F0 80         [24] 1857 	mov	b,#0x80
      0029E5 12 21 38         [24] 1858 	lcall	_lcdputstr
                                   1859 ;	ttt.c:391: lcdgotoaddr(0x8A);
      0029E8 75 82 8A         [24] 1860 	mov	dpl,#0x8a
      0029EB 12 20 96         [24] 1861 	lcall	_lcdgotoaddr
      0029EE D0 06            [24] 1862 	pop	ar6
      0029F0 D0 07            [24] 1863 	pop	ar7
                                   1864 ;	ttt.c:392: if(player ==1)
      0029F2 BE 01 0E         [24] 1865 	cjne	r6,#0x01,00102$
      0029F5 BF 00 0B         [24] 1866 	cjne	r7,#0x00,00102$
                                   1867 ;	ttt.c:393: lcdputstr("PLAYER 1");
      0029F8 90 2B 2F         [24] 1868 	mov	dptr,#___str_3
      0029FB 75 F0 80         [24] 1869 	mov	b,#0x80
      0029FE 12 21 38         [24] 1870 	lcall	_lcdputstr
      002A01 80 09            [24] 1871 	sjmp	00107$
      002A03                       1872 00102$:
                                   1873 ;	ttt.c:395: lcdputstr("PLAYER 2");
      002A03 90 2B 38         [24] 1874 	mov	dptr,#___str_4
      002A06 75 F0 80         [24] 1875 	mov	b,#0x80
      002A09 12 21 38         [24] 1876 	lcall	_lcdputstr
                                   1877 ;	ttt.c:398: while(getchar()!= 0x0d);
      002A0C                       1878 00107$:
      002A0C 12 2A 3B         [24] 1879 	lcall	_getchar
      002A0F AE 82            [24] 1880 	mov	r6,dpl
      002A11 AF 83            [24] 1881 	mov	r7,dph
      002A13 BE 0D F6         [24] 1882 	cjne	r6,#0x0d,00107$
      002A16 BF 00 F3         [24] 1883 	cjne	r7,#0x00,00107$
                                   1884 ;	ttt.c:399: restartGame();
                                   1885 ;	ttt.c:400: }
      002A19 02 29 77         [24] 1886 	ljmp	_restartGame
                                   1887 	.area CSEG    (CODE)
                                   1888 	.area CONST   (CODE)
      002B00                       1889 _A:
      002B00 92                    1890 	.db #0x92	; 146
      002B01 93                    1891 	.db #0x93	; 147
      002B02 94                    1892 	.db #0x94	; 148
      002B03 8A                    1893 	.db #0x8a	; 138
      002B04 8B                    1894 	.db #0x8b	; 139
      002B05 8C                    1895 	.db #0x8c	; 140
      002B06 9A                    1896 	.db #0x9a	; 154
      002B07 9B                    1897 	.db #0x9b	; 155
      002B08 9C                    1898 	.db #0x9c	; 156
                                   1899 	.area CONST   (CODE)
      002B09                       1900 ___str_0:
      002B09 20 54 49 43 2D 54 41  1901 	.ascii " TIC-TAC-TOE"
             43 2D 54 4F 45
      002B15 00                    1902 	.db 0x00
                                   1903 	.area CSEG    (CODE)
                                   1904 	.area CONST   (CODE)
      002B16                       1905 ___str_1:
      002B16 20 49 54 27 53 20 41  1906 	.ascii " IT'S A DRAW!! "
             20 44 52 41 57 21 21
             20
      002B25 00                    1907 	.db 0x00
                                   1908 	.area CSEG    (CODE)
                                   1909 	.area CONST   (CODE)
      002B26                       1910 ___str_2:
      002B26 57 49 4E 4E 45 52 21  1911 	.ascii "WINNER!!"
             21
      002B2E 00                    1912 	.db 0x00
                                   1913 	.area CSEG    (CODE)
                                   1914 	.area CONST   (CODE)
      002B2F                       1915 ___str_3:
      002B2F 50 4C 41 59 45 52 20  1916 	.ascii "PLAYER 1"
             31
      002B37 00                    1917 	.db 0x00
                                   1918 	.area CSEG    (CODE)
                                   1919 	.area CONST   (CODE)
      002B38                       1920 ___str_4:
      002B38 50 4C 41 59 45 52 20  1921 	.ascii "PLAYER 2"
             32
      002B40 00                    1922 	.db 0x00
                                   1923 	.area CSEG    (CODE)
                                   1924 	.area XINIT   (CODE)
      002B43                       1925 __xinit__square:
      002B43 FF FF                 1926 	.byte #0xff, #0xff	; 65535
      002B45 01 80                 1927 	.byte #0x01, #0x80	; 32769
      002B47 01 80                 1928 	.byte #0x01, #0x80	; 32769
      002B49 01 80                 1929 	.byte #0x01, #0x80	; 32769
      002B4B 01 80                 1930 	.byte #0x01, #0x80	; 32769
      002B4D 01 80                 1931 	.byte #0x01, #0x80	; 32769
      002B4F 01 80                 1932 	.byte #0x01, #0x80	; 32769
      002B51 01 80                 1933 	.byte #0x01, #0x80	; 32769
      002B53 01 80                 1934 	.byte #0x01, #0x80	; 32769
      002B55 01 80                 1935 	.byte #0x01, #0x80	; 32769
      002B57 01 80                 1936 	.byte #0x01, #0x80	; 32769
      002B59 01 80                 1937 	.byte #0x01, #0x80	; 32769
      002B5B 01 80                 1938 	.byte #0x01, #0x80	; 32769
      002B5D 01 80                 1939 	.byte #0x01, #0x80	; 32769
      002B5F 01 80                 1940 	.byte #0x01, #0x80	; 32769
      002B61 FF FF                 1941 	.byte #0xff, #0xff	; 65535
      002B63                       1942 __xinit__squareWX:
      002B63 FF FF                 1943 	.byte #0xff, #0xff	; 65535
      002B65 01 80                 1944 	.byte #0x01, #0x80	; 32769
      002B67 05 A0                 1945 	.byte #0x05, #0xa0	; 40965
      002B69 09 90                 1946 	.byte #0x09, #0x90	; 36873
      002B6B 11 88                 1947 	.byte #0x11, #0x88	; 34833
      002B6D 21 84                 1948 	.byte #0x21, #0x84	; 33825
      002B6F 41 82                 1949 	.byte #0x41, #0x82	; 33345
      002B71 81 81                 1950 	.byte #0x81, #0x81	; 33153
      002B73 81 81                 1951 	.byte #0x81, #0x81	; 33153
      002B75 41 82                 1952 	.byte #0x41, #0x82	; 33345
      002B77 21 84                 1953 	.byte #0x21, #0x84	; 33825
      002B79 11 88                 1954 	.byte #0x11, #0x88	; 34833
      002B7B 09 90                 1955 	.byte #0x09, #0x90	; 36873
      002B7D 05 A0                 1956 	.byte #0x05, #0xa0	; 40965
      002B7F 01 80                 1957 	.byte #0x01, #0x80	; 32769
      002B81 FF FF                 1958 	.byte #0xff, #0xff	; 65535
      002B83                       1959 __xinit__squareWO:
      002B83 FF FF                 1960 	.byte #0xff, #0xff	; 65535
      002B85 01 80                 1961 	.byte #0x01, #0x80	; 32769
      002B87 E1 87                 1962 	.byte #0xe1, #0x87	; 34785
      002B89 11 88                 1963 	.byte #0x11, #0x88	; 34833
      002B8B 09 90                 1964 	.byte #0x09, #0x90	; 36873
      002B8D 05 A0                 1965 	.byte #0x05, #0xa0	; 40965
      002B8F 05 A0                 1966 	.byte #0x05, #0xa0	; 40965
      002B91 05 A0                 1967 	.byte #0x05, #0xa0	; 40965
      002B93 05 A0                 1968 	.byte #0x05, #0xa0	; 40965
      002B95 05 A0                 1969 	.byte #0x05, #0xa0	; 40965
      002B97 05 A0                 1970 	.byte #0x05, #0xa0	; 40965
      002B99 09 90                 1971 	.byte #0x09, #0x90	; 36873
      002B9B 11 88                 1972 	.byte #0x11, #0x88	; 34833
      002B9D E1 87                 1973 	.byte #0xe1, #0x87	; 34785
      002B9F 01 80                 1974 	.byte #0x01, #0x80	; 32769
      002BA1 FF FF                 1975 	.byte #0xff, #0xff	; 65535
                                   1976 	.area CABS    (ABS,CODE)
