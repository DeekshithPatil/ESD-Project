                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _startGame
                                     13 	.globl _Init_Game
                                     14 	.globl _lcd_Init
                                     15 	.globl _TF1
                                     16 	.globl _TR1
                                     17 	.globl _TF0
                                     18 	.globl _TR0
                                     19 	.globl _IE1
                                     20 	.globl _IT1
                                     21 	.globl _IE0
                                     22 	.globl _IT0
                                     23 	.globl _SM0
                                     24 	.globl _SM1
                                     25 	.globl _SM2
                                     26 	.globl _REN
                                     27 	.globl _TB8
                                     28 	.globl _RB8
                                     29 	.globl _TI
                                     30 	.globl _RI
                                     31 	.globl _CY
                                     32 	.globl _AC
                                     33 	.globl _F0
                                     34 	.globl _RS1
                                     35 	.globl _RS0
                                     36 	.globl _OV
                                     37 	.globl _F1
                                     38 	.globl _P
                                     39 	.globl _RD
                                     40 	.globl _WR
                                     41 	.globl _T1
                                     42 	.globl _T0
                                     43 	.globl _INT1
                                     44 	.globl _INT0
                                     45 	.globl _TXD0
                                     46 	.globl _TXD
                                     47 	.globl _RXD0
                                     48 	.globl _RXD
                                     49 	.globl _P3_7
                                     50 	.globl _P3_6
                                     51 	.globl _P3_5
                                     52 	.globl _P3_4
                                     53 	.globl _P3_3
                                     54 	.globl _P3_2
                                     55 	.globl _P3_1
                                     56 	.globl _P3_0
                                     57 	.globl _P2_7
                                     58 	.globl _P2_6
                                     59 	.globl _P2_5
                                     60 	.globl _P2_4
                                     61 	.globl _P2_3
                                     62 	.globl _P2_2
                                     63 	.globl _P2_1
                                     64 	.globl _P2_0
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _P0_7
                                     74 	.globl _P0_6
                                     75 	.globl _P0_5
                                     76 	.globl _P0_4
                                     77 	.globl _P0_3
                                     78 	.globl _P0_2
                                     79 	.globl _P0_1
                                     80 	.globl _P0_0
                                     81 	.globl _PS
                                     82 	.globl _PT1
                                     83 	.globl _PX1
                                     84 	.globl _PT0
                                     85 	.globl _PX0
                                     86 	.globl _EA
                                     87 	.globl _ES
                                     88 	.globl _ET1
                                     89 	.globl _EX1
                                     90 	.globl _ET0
                                     91 	.globl _EX0
                                     92 	.globl _BREG_F7
                                     93 	.globl _BREG_F6
                                     94 	.globl _BREG_F5
                                     95 	.globl _BREG_F4
                                     96 	.globl _BREG_F3
                                     97 	.globl _BREG_F2
                                     98 	.globl _BREG_F1
                                     99 	.globl _BREG_F0
                                    100 	.globl _P5_7
                                    101 	.globl _P5_6
                                    102 	.globl _P5_5
                                    103 	.globl _P5_4
                                    104 	.globl _P5_3
                                    105 	.globl _P5_2
                                    106 	.globl _P5_1
                                    107 	.globl _P5_0
                                    108 	.globl _P4_7
                                    109 	.globl _P4_6
                                    110 	.globl _P4_5
                                    111 	.globl _P4_4
                                    112 	.globl _P4_3
                                    113 	.globl _P4_2
                                    114 	.globl _P4_1
                                    115 	.globl _P4_0
                                    116 	.globl _PX0L
                                    117 	.globl _PT0L
                                    118 	.globl _PX1L
                                    119 	.globl _PT1L
                                    120 	.globl _PSL
                                    121 	.globl _PT2L
                                    122 	.globl _PPCL
                                    123 	.globl _EC
                                    124 	.globl _CCF0
                                    125 	.globl _CCF1
                                    126 	.globl _CCF2
                                    127 	.globl _CCF3
                                    128 	.globl _CCF4
                                    129 	.globl _CR
                                    130 	.globl _CF
                                    131 	.globl _TF2
                                    132 	.globl _EXF2
                                    133 	.globl _RCLK
                                    134 	.globl _TCLK
                                    135 	.globl _EXEN2
                                    136 	.globl _TR2
                                    137 	.globl _C_T2
                                    138 	.globl _CP_RL2
                                    139 	.globl _T2CON_7
                                    140 	.globl _T2CON_6
                                    141 	.globl _T2CON_5
                                    142 	.globl _T2CON_4
                                    143 	.globl _T2CON_3
                                    144 	.globl _T2CON_2
                                    145 	.globl _T2CON_1
                                    146 	.globl _T2CON_0
                                    147 	.globl _PT2
                                    148 	.globl _ET2
                                    149 	.globl _TMOD
                                    150 	.globl _TL1
                                    151 	.globl _TL0
                                    152 	.globl _TH1
                                    153 	.globl _TH0
                                    154 	.globl _TCON
                                    155 	.globl _SP
                                    156 	.globl _SCON
                                    157 	.globl _SBUF0
                                    158 	.globl _SBUF
                                    159 	.globl _PSW
                                    160 	.globl _PCON
                                    161 	.globl _P3
                                    162 	.globl _P2
                                    163 	.globl _P1
                                    164 	.globl _P0
                                    165 	.globl _IP
                                    166 	.globl _IE
                                    167 	.globl _DP0L
                                    168 	.globl _DPL
                                    169 	.globl _DP0H
                                    170 	.globl _DPH
                                    171 	.globl _B
                                    172 	.globl _ACC
                                    173 	.globl _EECON
                                    174 	.globl _KBF
                                    175 	.globl _KBE
                                    176 	.globl _KBLS
                                    177 	.globl _BRL
                                    178 	.globl _BDRCON
                                    179 	.globl _T2MOD
                                    180 	.globl _SPDAT
                                    181 	.globl _SPSTA
                                    182 	.globl _SPCON
                                    183 	.globl _SADEN
                                    184 	.globl _SADDR
                                    185 	.globl _WDTPRG
                                    186 	.globl _WDTRST
                                    187 	.globl _P5
                                    188 	.globl _P4
                                    189 	.globl _IPH1
                                    190 	.globl _IPL1
                                    191 	.globl _IPH0
                                    192 	.globl _IPL0
                                    193 	.globl _IEN1
                                    194 	.globl _IEN0
                                    195 	.globl _CMOD
                                    196 	.globl _CL
                                    197 	.globl _CH
                                    198 	.globl _CCON
                                    199 	.globl _CCAPM4
                                    200 	.globl _CCAPM3
                                    201 	.globl _CCAPM2
                                    202 	.globl _CCAPM1
                                    203 	.globl _CCAPM0
                                    204 	.globl _CCAP4L
                                    205 	.globl _CCAP3L
                                    206 	.globl _CCAP2L
                                    207 	.globl _CCAP1L
                                    208 	.globl _CCAP0L
                                    209 	.globl _CCAP4H
                                    210 	.globl _CCAP3H
                                    211 	.globl _CCAP2H
                                    212 	.globl _CCAP1H
                                    213 	.globl _CCAP0H
                                    214 	.globl _CKCON1
                                    215 	.globl _CKCON0
                                    216 	.globl _CKRL
                                    217 	.globl _AUXR1
                                    218 	.globl _AUXR
                                    219 	.globl _TH2
                                    220 	.globl _TL2
                                    221 	.globl _RCAP2H
                                    222 	.globl _RCAP2L
                                    223 	.globl _T2CON
                                    224 ;--------------------------------------------------------
                                    225 ; special function registers
                                    226 ;--------------------------------------------------------
                                    227 	.area RSEG    (ABS,DATA)
      000000                        228 	.org 0x0000
                           0000C8   229 _T2CON	=	0x00c8
                           0000CA   230 _RCAP2L	=	0x00ca
                           0000CB   231 _RCAP2H	=	0x00cb
                           0000CC   232 _TL2	=	0x00cc
                           0000CD   233 _TH2	=	0x00cd
                           00008E   234 _AUXR	=	0x008e
                           0000A2   235 _AUXR1	=	0x00a2
                           000097   236 _CKRL	=	0x0097
                           00008F   237 _CKCON0	=	0x008f
                           0000AF   238 _CKCON1	=	0x00af
                           0000FA   239 _CCAP0H	=	0x00fa
                           0000FB   240 _CCAP1H	=	0x00fb
                           0000FC   241 _CCAP2H	=	0x00fc
                           0000FD   242 _CCAP3H	=	0x00fd
                           0000FE   243 _CCAP4H	=	0x00fe
                           0000EA   244 _CCAP0L	=	0x00ea
                           0000EB   245 _CCAP1L	=	0x00eb
                           0000EC   246 _CCAP2L	=	0x00ec
                           0000ED   247 _CCAP3L	=	0x00ed
                           0000EE   248 _CCAP4L	=	0x00ee
                           0000DA   249 _CCAPM0	=	0x00da
                           0000DB   250 _CCAPM1	=	0x00db
                           0000DC   251 _CCAPM2	=	0x00dc
                           0000DD   252 _CCAPM3	=	0x00dd
                           0000DE   253 _CCAPM4	=	0x00de
                           0000D8   254 _CCON	=	0x00d8
                           0000F9   255 _CH	=	0x00f9
                           0000E9   256 _CL	=	0x00e9
                           0000D9   257 _CMOD	=	0x00d9
                           0000A8   258 _IEN0	=	0x00a8
                           0000B1   259 _IEN1	=	0x00b1
                           0000B8   260 _IPL0	=	0x00b8
                           0000B7   261 _IPH0	=	0x00b7
                           0000B2   262 _IPL1	=	0x00b2
                           0000B3   263 _IPH1	=	0x00b3
                           0000C0   264 _P4	=	0x00c0
                           0000E8   265 _P5	=	0x00e8
                           0000A6   266 _WDTRST	=	0x00a6
                           0000A7   267 _WDTPRG	=	0x00a7
                           0000A9   268 _SADDR	=	0x00a9
                           0000B9   269 _SADEN	=	0x00b9
                           0000C3   270 _SPCON	=	0x00c3
                           0000C4   271 _SPSTA	=	0x00c4
                           0000C5   272 _SPDAT	=	0x00c5
                           0000C9   273 _T2MOD	=	0x00c9
                           00009B   274 _BDRCON	=	0x009b
                           00009A   275 _BRL	=	0x009a
                           00009C   276 _KBLS	=	0x009c
                           00009D   277 _KBE	=	0x009d
                           00009E   278 _KBF	=	0x009e
                           0000D2   279 _EECON	=	0x00d2
                           0000E0   280 _ACC	=	0x00e0
                           0000F0   281 _B	=	0x00f0
                           000083   282 _DPH	=	0x0083
                           000083   283 _DP0H	=	0x0083
                           000082   284 _DPL	=	0x0082
                           000082   285 _DP0L	=	0x0082
                           0000A8   286 _IE	=	0x00a8
                           0000B8   287 _IP	=	0x00b8
                           000080   288 _P0	=	0x0080
                           000090   289 _P1	=	0x0090
                           0000A0   290 _P2	=	0x00a0
                           0000B0   291 _P3	=	0x00b0
                           000087   292 _PCON	=	0x0087
                           0000D0   293 _PSW	=	0x00d0
                           000099   294 _SBUF	=	0x0099
                           000099   295 _SBUF0	=	0x0099
                           000098   296 _SCON	=	0x0098
                           000081   297 _SP	=	0x0081
                           000088   298 _TCON	=	0x0088
                           00008C   299 _TH0	=	0x008c
                           00008D   300 _TH1	=	0x008d
                           00008A   301 _TL0	=	0x008a
                           00008B   302 _TL1	=	0x008b
                           000089   303 _TMOD	=	0x0089
                                    304 ;--------------------------------------------------------
                                    305 ; special function bits
                                    306 ;--------------------------------------------------------
                                    307 	.area RSEG    (ABS,DATA)
      000000                        308 	.org 0x0000
                           0000AD   309 _ET2	=	0x00ad
                           0000BD   310 _PT2	=	0x00bd
                           0000C8   311 _T2CON_0	=	0x00c8
                           0000C9   312 _T2CON_1	=	0x00c9
                           0000CA   313 _T2CON_2	=	0x00ca
                           0000CB   314 _T2CON_3	=	0x00cb
                           0000CC   315 _T2CON_4	=	0x00cc
                           0000CD   316 _T2CON_5	=	0x00cd
                           0000CE   317 _T2CON_6	=	0x00ce
                           0000CF   318 _T2CON_7	=	0x00cf
                           0000C8   319 _CP_RL2	=	0x00c8
                           0000C9   320 _C_T2	=	0x00c9
                           0000CA   321 _TR2	=	0x00ca
                           0000CB   322 _EXEN2	=	0x00cb
                           0000CC   323 _TCLK	=	0x00cc
                           0000CD   324 _RCLK	=	0x00cd
                           0000CE   325 _EXF2	=	0x00ce
                           0000CF   326 _TF2	=	0x00cf
                           0000DF   327 _CF	=	0x00df
                           0000DE   328 _CR	=	0x00de
                           0000DC   329 _CCF4	=	0x00dc
                           0000DB   330 _CCF3	=	0x00db
                           0000DA   331 _CCF2	=	0x00da
                           0000D9   332 _CCF1	=	0x00d9
                           0000D8   333 _CCF0	=	0x00d8
                           0000AE   334 _EC	=	0x00ae
                           0000BE   335 _PPCL	=	0x00be
                           0000BD   336 _PT2L	=	0x00bd
                           0000BC   337 _PSL	=	0x00bc
                           0000BB   338 _PT1L	=	0x00bb
                           0000BA   339 _PX1L	=	0x00ba
                           0000B9   340 _PT0L	=	0x00b9
                           0000B8   341 _PX0L	=	0x00b8
                           0000C0   342 _P4_0	=	0x00c0
                           0000C1   343 _P4_1	=	0x00c1
                           0000C2   344 _P4_2	=	0x00c2
                           0000C3   345 _P4_3	=	0x00c3
                           0000C4   346 _P4_4	=	0x00c4
                           0000C5   347 _P4_5	=	0x00c5
                           0000C6   348 _P4_6	=	0x00c6
                           0000C7   349 _P4_7	=	0x00c7
                           0000E8   350 _P5_0	=	0x00e8
                           0000E9   351 _P5_1	=	0x00e9
                           0000EA   352 _P5_2	=	0x00ea
                           0000EB   353 _P5_3	=	0x00eb
                           0000EC   354 _P5_4	=	0x00ec
                           0000ED   355 _P5_5	=	0x00ed
                           0000EE   356 _P5_6	=	0x00ee
                           0000EF   357 _P5_7	=	0x00ef
                           0000F0   358 _BREG_F0	=	0x00f0
                           0000F1   359 _BREG_F1	=	0x00f1
                           0000F2   360 _BREG_F2	=	0x00f2
                           0000F3   361 _BREG_F3	=	0x00f3
                           0000F4   362 _BREG_F4	=	0x00f4
                           0000F5   363 _BREG_F5	=	0x00f5
                           0000F6   364 _BREG_F6	=	0x00f6
                           0000F7   365 _BREG_F7	=	0x00f7
                           0000A8   366 _EX0	=	0x00a8
                           0000A9   367 _ET0	=	0x00a9
                           0000AA   368 _EX1	=	0x00aa
                           0000AB   369 _ET1	=	0x00ab
                           0000AC   370 _ES	=	0x00ac
                           0000AF   371 _EA	=	0x00af
                           0000B8   372 _PX0	=	0x00b8
                           0000B9   373 _PT0	=	0x00b9
                           0000BA   374 _PX1	=	0x00ba
                           0000BB   375 _PT1	=	0x00bb
                           0000BC   376 _PS	=	0x00bc
                           000080   377 _P0_0	=	0x0080
                           000081   378 _P0_1	=	0x0081
                           000082   379 _P0_2	=	0x0082
                           000083   380 _P0_3	=	0x0083
                           000084   381 _P0_4	=	0x0084
                           000085   382 _P0_5	=	0x0085
                           000086   383 _P0_6	=	0x0086
                           000087   384 _P0_7	=	0x0087
                           000090   385 _P1_0	=	0x0090
                           000091   386 _P1_1	=	0x0091
                           000092   387 _P1_2	=	0x0092
                           000093   388 _P1_3	=	0x0093
                           000094   389 _P1_4	=	0x0094
                           000095   390 _P1_5	=	0x0095
                           000096   391 _P1_6	=	0x0096
                           000097   392 _P1_7	=	0x0097
                           0000A0   393 _P2_0	=	0x00a0
                           0000A1   394 _P2_1	=	0x00a1
                           0000A2   395 _P2_2	=	0x00a2
                           0000A3   396 _P2_3	=	0x00a3
                           0000A4   397 _P2_4	=	0x00a4
                           0000A5   398 _P2_5	=	0x00a5
                           0000A6   399 _P2_6	=	0x00a6
                           0000A7   400 _P2_7	=	0x00a7
                           0000B0   401 _P3_0	=	0x00b0
                           0000B1   402 _P3_1	=	0x00b1
                           0000B2   403 _P3_2	=	0x00b2
                           0000B3   404 _P3_3	=	0x00b3
                           0000B4   405 _P3_4	=	0x00b4
                           0000B5   406 _P3_5	=	0x00b5
                           0000B6   407 _P3_6	=	0x00b6
                           0000B7   408 _P3_7	=	0x00b7
                           0000B0   409 _RXD	=	0x00b0
                           0000B0   410 _RXD0	=	0x00b0
                           0000B1   411 _TXD	=	0x00b1
                           0000B1   412 _TXD0	=	0x00b1
                           0000B2   413 _INT0	=	0x00b2
                           0000B3   414 _INT1	=	0x00b3
                           0000B4   415 _T0	=	0x00b4
                           0000B5   416 _T1	=	0x00b5
                           0000B6   417 _WR	=	0x00b6
                           0000B7   418 _RD	=	0x00b7
                           0000D0   419 _P	=	0x00d0
                           0000D1   420 _F1	=	0x00d1
                           0000D2   421 _OV	=	0x00d2
                           0000D3   422 _RS0	=	0x00d3
                           0000D4   423 _RS1	=	0x00d4
                           0000D5   424 _F0	=	0x00d5
                           0000D6   425 _AC	=	0x00d6
                           0000D7   426 _CY	=	0x00d7
                           000098   427 _RI	=	0x0098
                           000099   428 _TI	=	0x0099
                           00009A   429 _RB8	=	0x009a
                           00009B   430 _TB8	=	0x009b
                           00009C   431 _REN	=	0x009c
                           00009D   432 _SM2	=	0x009d
                           00009E   433 _SM1	=	0x009e
                           00009F   434 _SM0	=	0x009f
                           000088   435 _IT0	=	0x0088
                           000089   436 _IE0	=	0x0089
                           00008A   437 _IT1	=	0x008a
                           00008B   438 _IE1	=	0x008b
                           00008C   439 _TR0	=	0x008c
                           00008D   440 _TF0	=	0x008d
                           00008E   441 _TR1	=	0x008e
                           00008F   442 _TF1	=	0x008f
                                    443 ;--------------------------------------------------------
                                    444 ; overlayable register banks
                                    445 ;--------------------------------------------------------
                                    446 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        447 	.ds 8
                                    448 ;--------------------------------------------------------
                                    449 ; internal ram data
                                    450 ;--------------------------------------------------------
                                    451 	.area DSEG    (DATA)
                                    452 ;--------------------------------------------------------
                                    453 ; overlayable items in internal ram 
                                    454 ;--------------------------------------------------------
                                    455 ;--------------------------------------------------------
                                    456 ; Stack segment in internal ram 
                                    457 ;--------------------------------------------------------
                                    458 	.area	SSEG
      000021                        459 __start__stack:
      000021                        460 	.ds	1
                                    461 
                                    462 ;--------------------------------------------------------
                                    463 ; indirectly addressable internal ram data
                                    464 ;--------------------------------------------------------
                                    465 	.area ISEG    (DATA)
                                    466 ;--------------------------------------------------------
                                    467 ; absolute internal ram data
                                    468 ;--------------------------------------------------------
                                    469 	.area IABS    (ABS,DATA)
                                    470 	.area IABS    (ABS,DATA)
                                    471 ;--------------------------------------------------------
                                    472 ; bit data
                                    473 ;--------------------------------------------------------
                                    474 	.area BSEG    (BIT)
                                    475 ;--------------------------------------------------------
                                    476 ; paged external ram data
                                    477 ;--------------------------------------------------------
                                    478 	.area PSEG    (PAG,XDATA)
                                    479 ;--------------------------------------------------------
                                    480 ; external ram data
                                    481 ;--------------------------------------------------------
                                    482 	.area XSEG    (XDATA)
                                    483 ;--------------------------------------------------------
                                    484 ; absolute external ram data
                                    485 ;--------------------------------------------------------
                                    486 	.area XABS    (ABS,XDATA)
                                    487 ;--------------------------------------------------------
                                    488 ; external initialized ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area XISEG   (XDATA)
                                    491 	.area HOME    (CODE)
                                    492 	.area GSINIT0 (CODE)
                                    493 	.area GSINIT1 (CODE)
                                    494 	.area GSINIT2 (CODE)
                                    495 	.area GSINIT3 (CODE)
                                    496 	.area GSINIT4 (CODE)
                                    497 	.area GSINIT5 (CODE)
                                    498 	.area GSINIT  (CODE)
                                    499 	.area GSFINAL (CODE)
                                    500 	.area CSEG    (CODE)
                                    501 ;--------------------------------------------------------
                                    502 ; interrupt vector 
                                    503 ;--------------------------------------------------------
                                    504 	.area HOME    (CODE)
      002000                        505 __interrupt_vect:
      002000 02 20 06         [24]  506 	ljmp	__sdcc_gsinit_startup
                                    507 ;--------------------------------------------------------
                                    508 ; global & static initialisations
                                    509 ;--------------------------------------------------------
                                    510 	.area HOME    (CODE)
                                    511 	.area GSINIT  (CODE)
                                    512 	.area GSFINAL (CODE)
                                    513 	.area GSINIT  (CODE)
                                    514 	.globl __sdcc_gsinit_startup
                                    515 	.globl __sdcc_program_startup
                                    516 	.globl __start__stack
                                    517 	.globl __mcs51_genXINIT
                                    518 	.globl __mcs51_genXRAMCLEAR
                                    519 	.globl __mcs51_genRAMCLEAR
                                    520 	.area GSFINAL (CODE)
      00205F 02 20 03         [24]  521 	ljmp	__sdcc_program_startup
                                    522 ;--------------------------------------------------------
                                    523 ; Home
                                    524 ;--------------------------------------------------------
                                    525 	.area HOME    (CODE)
                                    526 	.area HOME    (CODE)
      002003                        527 __sdcc_program_startup:
      002003 02 21 8E         [24]  528 	ljmp	_main
                                    529 ;	return from main will return to caller
                                    530 ;--------------------------------------------------------
                                    531 ; code
                                    532 ;--------------------------------------------------------
                                    533 	.area CSEG    (CODE)
                                    534 ;------------------------------------------------------------
                                    535 ;Allocation info for local variables in function 'main'
                                    536 ;------------------------------------------------------------
                                    537 ;	main.c:15: void main()
                                    538 ;	-----------------------------------------
                                    539 ;	 function main
                                    540 ;	-----------------------------------------
      00218E                        541 _main:
                           000007   542 	ar7 = 0x07
                           000006   543 	ar6 = 0x06
                           000005   544 	ar5 = 0x05
                           000004   545 	ar4 = 0x04
                           000003   546 	ar3 = 0x03
                           000002   547 	ar2 = 0x02
                           000001   548 	ar1 = 0x01
                           000000   549 	ar0 = 0x00
                                    550 ;	main.c:18: lcd_Init();
      00218E 12 20 F6         [24]  551 	lcall	_lcd_Init
                                    552 ;	main.c:19: Init_Game();
      002191 12 25 E0         [24]  553 	lcall	_Init_Game
                                    554 ;	main.c:20: startGame();
      002194 12 24 7A         [24]  555 	lcall	_startGame
                                    556 ;	main.c:23: while(1);
      002197                        557 00102$:
                                    558 ;	main.c:25: }
      002197 80 FE            [24]  559 	sjmp	00102$
                                    560 	.area CSEG    (CODE)
                                    561 	.area CONST   (CODE)
                                    562 	.area XINIT   (CODE)
                                    563 	.area CABS    (ABS,CODE)
