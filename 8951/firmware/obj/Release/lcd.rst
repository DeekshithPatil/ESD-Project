                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module lcd
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _TF1
                                     12 	.globl _TR1
                                     13 	.globl _TF0
                                     14 	.globl _TR0
                                     15 	.globl _IE1
                                     16 	.globl _IT1
                                     17 	.globl _IE0
                                     18 	.globl _IT0
                                     19 	.globl _SM0
                                     20 	.globl _SM1
                                     21 	.globl _SM2
                                     22 	.globl _REN
                                     23 	.globl _TB8
                                     24 	.globl _RB8
                                     25 	.globl _TI
                                     26 	.globl _RI
                                     27 	.globl _CY
                                     28 	.globl _AC
                                     29 	.globl _F0
                                     30 	.globl _RS1
                                     31 	.globl _RS0
                                     32 	.globl _OV
                                     33 	.globl _F1
                                     34 	.globl _P
                                     35 	.globl _RD
                                     36 	.globl _WR
                                     37 	.globl _T1
                                     38 	.globl _T0
                                     39 	.globl _INT1
                                     40 	.globl _INT0
                                     41 	.globl _TXD0
                                     42 	.globl _TXD
                                     43 	.globl _RXD0
                                     44 	.globl _RXD
                                     45 	.globl _P3_7
                                     46 	.globl _P3_6
                                     47 	.globl _P3_5
                                     48 	.globl _P3_4
                                     49 	.globl _P3_3
                                     50 	.globl _P3_2
                                     51 	.globl _P3_1
                                     52 	.globl _P3_0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _P1_7
                                     62 	.globl _P1_6
                                     63 	.globl _P1_5
                                     64 	.globl _P1_4
                                     65 	.globl _P1_3
                                     66 	.globl _P1_2
                                     67 	.globl _P1_1
                                     68 	.globl _P1_0
                                     69 	.globl _P0_7
                                     70 	.globl _P0_6
                                     71 	.globl _P0_5
                                     72 	.globl _P0_4
                                     73 	.globl _P0_3
                                     74 	.globl _P0_2
                                     75 	.globl _P0_1
                                     76 	.globl _P0_0
                                     77 	.globl _PS
                                     78 	.globl _PT1
                                     79 	.globl _PX1
                                     80 	.globl _PT0
                                     81 	.globl _PX0
                                     82 	.globl _EA
                                     83 	.globl _ES
                                     84 	.globl _ET1
                                     85 	.globl _EX1
                                     86 	.globl _ET0
                                     87 	.globl _EX0
                                     88 	.globl _BREG_F7
                                     89 	.globl _BREG_F6
                                     90 	.globl _BREG_F5
                                     91 	.globl _BREG_F4
                                     92 	.globl _BREG_F3
                                     93 	.globl _BREG_F2
                                     94 	.globl _BREG_F1
                                     95 	.globl _BREG_F0
                                     96 	.globl _P5_7
                                     97 	.globl _P5_6
                                     98 	.globl _P5_5
                                     99 	.globl _P5_4
                                    100 	.globl _P5_3
                                    101 	.globl _P5_2
                                    102 	.globl _P5_1
                                    103 	.globl _P5_0
                                    104 	.globl _P4_7
                                    105 	.globl _P4_6
                                    106 	.globl _P4_5
                                    107 	.globl _P4_4
                                    108 	.globl _P4_3
                                    109 	.globl _P4_2
                                    110 	.globl _P4_1
                                    111 	.globl _P4_0
                                    112 	.globl _PX0L
                                    113 	.globl _PT0L
                                    114 	.globl _PX1L
                                    115 	.globl _PT1L
                                    116 	.globl _PSL
                                    117 	.globl _PT2L
                                    118 	.globl _PPCL
                                    119 	.globl _EC
                                    120 	.globl _CCF0
                                    121 	.globl _CCF1
                                    122 	.globl _CCF2
                                    123 	.globl _CCF3
                                    124 	.globl _CCF4
                                    125 	.globl _CR
                                    126 	.globl _CF
                                    127 	.globl _TF2
                                    128 	.globl _EXF2
                                    129 	.globl _RCLK
                                    130 	.globl _TCLK
                                    131 	.globl _EXEN2
                                    132 	.globl _TR2
                                    133 	.globl _C_T2
                                    134 	.globl _CP_RL2
                                    135 	.globl _T2CON_7
                                    136 	.globl _T2CON_6
                                    137 	.globl _T2CON_5
                                    138 	.globl _T2CON_4
                                    139 	.globl _T2CON_3
                                    140 	.globl _T2CON_2
                                    141 	.globl _T2CON_1
                                    142 	.globl _T2CON_0
                                    143 	.globl _PT2
                                    144 	.globl _ET2
                                    145 	.globl _TMOD
                                    146 	.globl _TL1
                                    147 	.globl _TL0
                                    148 	.globl _TH1
                                    149 	.globl _TH0
                                    150 	.globl _TCON
                                    151 	.globl _SP
                                    152 	.globl _SCON
                                    153 	.globl _SBUF0
                                    154 	.globl _SBUF
                                    155 	.globl _PSW
                                    156 	.globl _PCON
                                    157 	.globl _P3
                                    158 	.globl _P2
                                    159 	.globl _P1
                                    160 	.globl _P0
                                    161 	.globl _IP
                                    162 	.globl _IE
                                    163 	.globl _DP0L
                                    164 	.globl _DPL
                                    165 	.globl _DP0H
                                    166 	.globl _DPH
                                    167 	.globl _B
                                    168 	.globl _ACC
                                    169 	.globl _EECON
                                    170 	.globl _KBF
                                    171 	.globl _KBE
                                    172 	.globl _KBLS
                                    173 	.globl _BRL
                                    174 	.globl _BDRCON
                                    175 	.globl _T2MOD
                                    176 	.globl _SPDAT
                                    177 	.globl _SPSTA
                                    178 	.globl _SPCON
                                    179 	.globl _SADEN
                                    180 	.globl _SADDR
                                    181 	.globl _WDTPRG
                                    182 	.globl _WDTRST
                                    183 	.globl _P5
                                    184 	.globl _P4
                                    185 	.globl _IPH1
                                    186 	.globl _IPL1
                                    187 	.globl _IPH0
                                    188 	.globl _IPL0
                                    189 	.globl _IEN1
                                    190 	.globl _IEN0
                                    191 	.globl _CMOD
                                    192 	.globl _CL
                                    193 	.globl _CH
                                    194 	.globl _CCON
                                    195 	.globl _CCAPM4
                                    196 	.globl _CCAPM3
                                    197 	.globl _CCAPM2
                                    198 	.globl _CCAPM1
                                    199 	.globl _CCAPM0
                                    200 	.globl _CCAP4L
                                    201 	.globl _CCAP3L
                                    202 	.globl _CCAP2L
                                    203 	.globl _CCAP1L
                                    204 	.globl _CCAP0L
                                    205 	.globl _CCAP4H
                                    206 	.globl _CCAP3H
                                    207 	.globl _CCAP2H
                                    208 	.globl _CCAP1H
                                    209 	.globl _CCAP0H
                                    210 	.globl _CKCON1
                                    211 	.globl _CKCON0
                                    212 	.globl _CKRL
                                    213 	.globl _AUXR1
                                    214 	.globl _AUXR
                                    215 	.globl _TH2
                                    216 	.globl _TL2
                                    217 	.globl _RCAP2H
                                    218 	.globl _RCAP2L
                                    219 	.globl _T2CON
                                    220 	.globl _delay
                                    221 	.globl _lcdgotoaddr
                                    222 	.globl _lcd_cmd
                                    223 	.globl _lcd_data
                                    224 	.globl _lcd_Init
                                    225 	.globl _lcdputstr
                                    226 ;--------------------------------------------------------
                                    227 ; special function registers
                                    228 ;--------------------------------------------------------
                                    229 	.area RSEG    (ABS,DATA)
      000000                        230 	.org 0x0000
                           0000C8   231 _T2CON	=	0x00c8
                           0000CA   232 _RCAP2L	=	0x00ca
                           0000CB   233 _RCAP2H	=	0x00cb
                           0000CC   234 _TL2	=	0x00cc
                           0000CD   235 _TH2	=	0x00cd
                           00008E   236 _AUXR	=	0x008e
                           0000A2   237 _AUXR1	=	0x00a2
                           000097   238 _CKRL	=	0x0097
                           00008F   239 _CKCON0	=	0x008f
                           0000AF   240 _CKCON1	=	0x00af
                           0000FA   241 _CCAP0H	=	0x00fa
                           0000FB   242 _CCAP1H	=	0x00fb
                           0000FC   243 _CCAP2H	=	0x00fc
                           0000FD   244 _CCAP3H	=	0x00fd
                           0000FE   245 _CCAP4H	=	0x00fe
                           0000EA   246 _CCAP0L	=	0x00ea
                           0000EB   247 _CCAP1L	=	0x00eb
                           0000EC   248 _CCAP2L	=	0x00ec
                           0000ED   249 _CCAP3L	=	0x00ed
                           0000EE   250 _CCAP4L	=	0x00ee
                           0000DA   251 _CCAPM0	=	0x00da
                           0000DB   252 _CCAPM1	=	0x00db
                           0000DC   253 _CCAPM2	=	0x00dc
                           0000DD   254 _CCAPM3	=	0x00dd
                           0000DE   255 _CCAPM4	=	0x00de
                           0000D8   256 _CCON	=	0x00d8
                           0000F9   257 _CH	=	0x00f9
                           0000E9   258 _CL	=	0x00e9
                           0000D9   259 _CMOD	=	0x00d9
                           0000A8   260 _IEN0	=	0x00a8
                           0000B1   261 _IEN1	=	0x00b1
                           0000B8   262 _IPL0	=	0x00b8
                           0000B7   263 _IPH0	=	0x00b7
                           0000B2   264 _IPL1	=	0x00b2
                           0000B3   265 _IPH1	=	0x00b3
                           0000C0   266 _P4	=	0x00c0
                           0000E8   267 _P5	=	0x00e8
                           0000A6   268 _WDTRST	=	0x00a6
                           0000A7   269 _WDTPRG	=	0x00a7
                           0000A9   270 _SADDR	=	0x00a9
                           0000B9   271 _SADEN	=	0x00b9
                           0000C3   272 _SPCON	=	0x00c3
                           0000C4   273 _SPSTA	=	0x00c4
                           0000C5   274 _SPDAT	=	0x00c5
                           0000C9   275 _T2MOD	=	0x00c9
                           00009B   276 _BDRCON	=	0x009b
                           00009A   277 _BRL	=	0x009a
                           00009C   278 _KBLS	=	0x009c
                           00009D   279 _KBE	=	0x009d
                           00009E   280 _KBF	=	0x009e
                           0000D2   281 _EECON	=	0x00d2
                           0000E0   282 _ACC	=	0x00e0
                           0000F0   283 _B	=	0x00f0
                           000083   284 _DPH	=	0x0083
                           000083   285 _DP0H	=	0x0083
                           000082   286 _DPL	=	0x0082
                           000082   287 _DP0L	=	0x0082
                           0000A8   288 _IE	=	0x00a8
                           0000B8   289 _IP	=	0x00b8
                           000080   290 _P0	=	0x0080
                           000090   291 _P1	=	0x0090
                           0000A0   292 _P2	=	0x00a0
                           0000B0   293 _P3	=	0x00b0
                           000087   294 _PCON	=	0x0087
                           0000D0   295 _PSW	=	0x00d0
                           000099   296 _SBUF	=	0x0099
                           000099   297 _SBUF0	=	0x0099
                           000098   298 _SCON	=	0x0098
                           000081   299 _SP	=	0x0081
                           000088   300 _TCON	=	0x0088
                           00008C   301 _TH0	=	0x008c
                           00008D   302 _TH1	=	0x008d
                           00008A   303 _TL0	=	0x008a
                           00008B   304 _TL1	=	0x008b
                           000089   305 _TMOD	=	0x0089
                                    306 ;--------------------------------------------------------
                                    307 ; special function bits
                                    308 ;--------------------------------------------------------
                                    309 	.area RSEG    (ABS,DATA)
      000000                        310 	.org 0x0000
                           0000AD   311 _ET2	=	0x00ad
                           0000BD   312 _PT2	=	0x00bd
                           0000C8   313 _T2CON_0	=	0x00c8
                           0000C9   314 _T2CON_1	=	0x00c9
                           0000CA   315 _T2CON_2	=	0x00ca
                           0000CB   316 _T2CON_3	=	0x00cb
                           0000CC   317 _T2CON_4	=	0x00cc
                           0000CD   318 _T2CON_5	=	0x00cd
                           0000CE   319 _T2CON_6	=	0x00ce
                           0000CF   320 _T2CON_7	=	0x00cf
                           0000C8   321 _CP_RL2	=	0x00c8
                           0000C9   322 _C_T2	=	0x00c9
                           0000CA   323 _TR2	=	0x00ca
                           0000CB   324 _EXEN2	=	0x00cb
                           0000CC   325 _TCLK	=	0x00cc
                           0000CD   326 _RCLK	=	0x00cd
                           0000CE   327 _EXF2	=	0x00ce
                           0000CF   328 _TF2	=	0x00cf
                           0000DF   329 _CF	=	0x00df
                           0000DE   330 _CR	=	0x00de
                           0000DC   331 _CCF4	=	0x00dc
                           0000DB   332 _CCF3	=	0x00db
                           0000DA   333 _CCF2	=	0x00da
                           0000D9   334 _CCF1	=	0x00d9
                           0000D8   335 _CCF0	=	0x00d8
                           0000AE   336 _EC	=	0x00ae
                           0000BE   337 _PPCL	=	0x00be
                           0000BD   338 _PT2L	=	0x00bd
                           0000BC   339 _PSL	=	0x00bc
                           0000BB   340 _PT1L	=	0x00bb
                           0000BA   341 _PX1L	=	0x00ba
                           0000B9   342 _PT0L	=	0x00b9
                           0000B8   343 _PX0L	=	0x00b8
                           0000C0   344 _P4_0	=	0x00c0
                           0000C1   345 _P4_1	=	0x00c1
                           0000C2   346 _P4_2	=	0x00c2
                           0000C3   347 _P4_3	=	0x00c3
                           0000C4   348 _P4_4	=	0x00c4
                           0000C5   349 _P4_5	=	0x00c5
                           0000C6   350 _P4_6	=	0x00c6
                           0000C7   351 _P4_7	=	0x00c7
                           0000E8   352 _P5_0	=	0x00e8
                           0000E9   353 _P5_1	=	0x00e9
                           0000EA   354 _P5_2	=	0x00ea
                           0000EB   355 _P5_3	=	0x00eb
                           0000EC   356 _P5_4	=	0x00ec
                           0000ED   357 _P5_5	=	0x00ed
                           0000EE   358 _P5_6	=	0x00ee
                           0000EF   359 _P5_7	=	0x00ef
                           0000F0   360 _BREG_F0	=	0x00f0
                           0000F1   361 _BREG_F1	=	0x00f1
                           0000F2   362 _BREG_F2	=	0x00f2
                           0000F3   363 _BREG_F3	=	0x00f3
                           0000F4   364 _BREG_F4	=	0x00f4
                           0000F5   365 _BREG_F5	=	0x00f5
                           0000F6   366 _BREG_F6	=	0x00f6
                           0000F7   367 _BREG_F7	=	0x00f7
                           0000A8   368 _EX0	=	0x00a8
                           0000A9   369 _ET0	=	0x00a9
                           0000AA   370 _EX1	=	0x00aa
                           0000AB   371 _ET1	=	0x00ab
                           0000AC   372 _ES	=	0x00ac
                           0000AF   373 _EA	=	0x00af
                           0000B8   374 _PX0	=	0x00b8
                           0000B9   375 _PT0	=	0x00b9
                           0000BA   376 _PX1	=	0x00ba
                           0000BB   377 _PT1	=	0x00bb
                           0000BC   378 _PS	=	0x00bc
                           000080   379 _P0_0	=	0x0080
                           000081   380 _P0_1	=	0x0081
                           000082   381 _P0_2	=	0x0082
                           000083   382 _P0_3	=	0x0083
                           000084   383 _P0_4	=	0x0084
                           000085   384 _P0_5	=	0x0085
                           000086   385 _P0_6	=	0x0086
                           000087   386 _P0_7	=	0x0087
                           000090   387 _P1_0	=	0x0090
                           000091   388 _P1_1	=	0x0091
                           000092   389 _P1_2	=	0x0092
                           000093   390 _P1_3	=	0x0093
                           000094   391 _P1_4	=	0x0094
                           000095   392 _P1_5	=	0x0095
                           000096   393 _P1_6	=	0x0096
                           000097   394 _P1_7	=	0x0097
                           0000A0   395 _P2_0	=	0x00a0
                           0000A1   396 _P2_1	=	0x00a1
                           0000A2   397 _P2_2	=	0x00a2
                           0000A3   398 _P2_3	=	0x00a3
                           0000A4   399 _P2_4	=	0x00a4
                           0000A5   400 _P2_5	=	0x00a5
                           0000A6   401 _P2_6	=	0x00a6
                           0000A7   402 _P2_7	=	0x00a7
                           0000B0   403 _P3_0	=	0x00b0
                           0000B1   404 _P3_1	=	0x00b1
                           0000B2   405 _P3_2	=	0x00b2
                           0000B3   406 _P3_3	=	0x00b3
                           0000B4   407 _P3_4	=	0x00b4
                           0000B5   408 _P3_5	=	0x00b5
                           0000B6   409 _P3_6	=	0x00b6
                           0000B7   410 _P3_7	=	0x00b7
                           0000B0   411 _RXD	=	0x00b0
                           0000B0   412 _RXD0	=	0x00b0
                           0000B1   413 _TXD	=	0x00b1
                           0000B1   414 _TXD0	=	0x00b1
                           0000B2   415 _INT0	=	0x00b2
                           0000B3   416 _INT1	=	0x00b3
                           0000B4   417 _T0	=	0x00b4
                           0000B5   418 _T1	=	0x00b5
                           0000B6   419 _WR	=	0x00b6
                           0000B7   420 _RD	=	0x00b7
                           0000D0   421 _P	=	0x00d0
                           0000D1   422 _F1	=	0x00d1
                           0000D2   423 _OV	=	0x00d2
                           0000D3   424 _RS0	=	0x00d3
                           0000D4   425 _RS1	=	0x00d4
                           0000D5   426 _F0	=	0x00d5
                           0000D6   427 _AC	=	0x00d6
                           0000D7   428 _CY	=	0x00d7
                           000098   429 _RI	=	0x0098
                           000099   430 _TI	=	0x0099
                           00009A   431 _RB8	=	0x009a
                           00009B   432 _TB8	=	0x009b
                           00009C   433 _REN	=	0x009c
                           00009D   434 _SM2	=	0x009d
                           00009E   435 _SM1	=	0x009e
                           00009F   436 _SM0	=	0x009f
                           000088   437 _IT0	=	0x0088
                           000089   438 _IE0	=	0x0089
                           00008A   439 _IT1	=	0x008a
                           00008B   440 _IE1	=	0x008b
                           00008C   441 _TR0	=	0x008c
                           00008D   442 _TF0	=	0x008d
                           00008E   443 _TR1	=	0x008e
                           00008F   444 _TF1	=	0x008f
                                    445 ;--------------------------------------------------------
                                    446 ; overlayable register banks
                                    447 ;--------------------------------------------------------
                                    448 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        449 	.ds 8
                                    450 ;--------------------------------------------------------
                                    451 ; internal ram data
                                    452 ;--------------------------------------------------------
                                    453 	.area DSEG    (DATA)
                                    454 ;--------------------------------------------------------
                                    455 ; overlayable items in internal ram 
                                    456 ;--------------------------------------------------------
                                    457 ;--------------------------------------------------------
                                    458 ; indirectly addressable internal ram data
                                    459 ;--------------------------------------------------------
                                    460 	.area ISEG    (DATA)
                                    461 ;--------------------------------------------------------
                                    462 ; absolute internal ram data
                                    463 ;--------------------------------------------------------
                                    464 	.area IABS    (ABS,DATA)
                                    465 	.area IABS    (ABS,DATA)
                                    466 ;--------------------------------------------------------
                                    467 ; bit data
                                    468 ;--------------------------------------------------------
                                    469 	.area BSEG    (BIT)
                                    470 ;--------------------------------------------------------
                                    471 ; paged external ram data
                                    472 ;--------------------------------------------------------
                                    473 	.area PSEG    (PAG,XDATA)
                                    474 ;--------------------------------------------------------
                                    475 ; external ram data
                                    476 ;--------------------------------------------------------
                                    477 	.area XSEG    (XDATA)
      000000                        478 _delay_time_65536_47:
      000000                        479 	.ds 2
      000002                        480 _lcdgotoaddr_add_65536_49:
      000002                        481 	.ds 1
      000003                        482 _lcd_cmd_Command_65536_51:
      000003                        483 	.ds 1
      000004                        484 _lcd_data_Data_65536_53:
      000004                        485 	.ds 1
      000005                        486 _lcdputstr_str_65536_56:
      000005                        487 	.ds 3
                                    488 ;--------------------------------------------------------
                                    489 ; absolute external ram data
                                    490 ;--------------------------------------------------------
                                    491 	.area XABS    (ABS,XDATA)
                                    492 ;--------------------------------------------------------
                                    493 ; external initialized ram data
                                    494 ;--------------------------------------------------------
                                    495 	.area XISEG   (XDATA)
                                    496 	.area HOME    (CODE)
                                    497 	.area GSINIT0 (CODE)
                                    498 	.area GSINIT1 (CODE)
                                    499 	.area GSINIT2 (CODE)
                                    500 	.area GSINIT3 (CODE)
                                    501 	.area GSINIT4 (CODE)
                                    502 	.area GSINIT5 (CODE)
                                    503 	.area GSINIT  (CODE)
                                    504 	.area GSFINAL (CODE)
                                    505 	.area CSEG    (CODE)
                                    506 ;--------------------------------------------------------
                                    507 ; global & static initialisations
                                    508 ;--------------------------------------------------------
                                    509 	.area HOME    (CODE)
                                    510 	.area GSINIT  (CODE)
                                    511 	.area GSFINAL (CODE)
                                    512 	.area GSINIT  (CODE)
                                    513 ;--------------------------------------------------------
                                    514 ; Home
                                    515 ;--------------------------------------------------------
                                    516 	.area HOME    (CODE)
                                    517 	.area HOME    (CODE)
                                    518 ;--------------------------------------------------------
                                    519 ; code
                                    520 ;--------------------------------------------------------
                                    521 	.area CSEG    (CODE)
                                    522 ;------------------------------------------------------------
                                    523 ;Allocation info for local variables in function 'delay'
                                    524 ;------------------------------------------------------------
                                    525 ;time                      Allocated with name '_delay_time_65536_47'
                                    526 ;------------------------------------------------------------
                                    527 ;	lcd.c:13: void delay(int time)
                                    528 ;	-----------------------------------------
                                    529 ;	 function delay
                                    530 ;	-----------------------------------------
      002062                        531 _delay:
                           000007   532 	ar7 = 0x07
                           000006   533 	ar6 = 0x06
                           000005   534 	ar5 = 0x05
                           000004   535 	ar4 = 0x04
                           000003   536 	ar3 = 0x03
                           000002   537 	ar2 = 0x02
                           000001   538 	ar1 = 0x01
                           000000   539 	ar0 = 0x00
      002062 AF 83            [24]  540 	mov	r7,dph
      002064 E5 82            [12]  541 	mov	a,dpl
      002066 90 00 00         [24]  542 	mov	dptr,#_delay_time_65536_47
      002069 F0               [24]  543 	movx	@dptr,a
      00206A EF               [12]  544 	mov	a,r7
      00206B A3               [24]  545 	inc	dptr
      00206C F0               [24]  546 	movx	@dptr,a
                                    547 ;	lcd.c:15: while(time--)
      00206D 90 00 00         [24]  548 	mov	dptr,#_delay_time_65536_47
      002070 E0               [24]  549 	movx	a,@dptr
      002071 FE               [12]  550 	mov	r6,a
      002072 A3               [24]  551 	inc	dptr
      002073 E0               [24]  552 	movx	a,@dptr
      002074 FF               [12]  553 	mov	r7,a
      002075                        554 00101$:
      002075 8E 04            [24]  555 	mov	ar4,r6
      002077 8F 05            [24]  556 	mov	ar5,r7
      002079 1E               [12]  557 	dec	r6
      00207A BE FF 01         [24]  558 	cjne	r6,#0xff,00115$
      00207D 1F               [12]  559 	dec	r7
      00207E                        560 00115$:
      00207E 90 00 00         [24]  561 	mov	dptr,#_delay_time_65536_47
      002081 EE               [12]  562 	mov	a,r6
      002082 F0               [24]  563 	movx	@dptr,a
      002083 EF               [12]  564 	mov	a,r7
      002084 A3               [24]  565 	inc	dptr
      002085 F0               [24]  566 	movx	@dptr,a
      002086 EC               [12]  567 	mov	a,r4
      002087 4D               [12]  568 	orl	a,r5
      002088 60 03            [24]  569 	jz	00108$
                                    570 ;	lcd.c:16: __asm nop __endasm;
      00208A 00               [12]  571 	nop	
      00208B 80 E8            [24]  572 	sjmp	00101$
      00208D                        573 00108$:
      00208D 90 00 00         [24]  574 	mov	dptr,#_delay_time_65536_47
      002090 EE               [12]  575 	mov	a,r6
      002091 F0               [24]  576 	movx	@dptr,a
      002092 EF               [12]  577 	mov	a,r7
      002093 A3               [24]  578 	inc	dptr
      002094 F0               [24]  579 	movx	@dptr,a
                                    580 ;	lcd.c:18: }
      002095 22               [24]  581 	ret
                                    582 ;------------------------------------------------------------
                                    583 ;Allocation info for local variables in function 'lcdgotoaddr'
                                    584 ;------------------------------------------------------------
                                    585 ;add                       Allocated with name '_lcdgotoaddr_add_65536_49'
                                    586 ;------------------------------------------------------------
                                    587 ;	lcd.c:22: void lcdgotoaddr(uint8_t add)
                                    588 ;	-----------------------------------------
                                    589 ;	 function lcdgotoaddr
                                    590 ;	-----------------------------------------
      002096                        591 _lcdgotoaddr:
      002096 E5 82            [12]  592 	mov	a,dpl
      002098 90 00 02         [24]  593 	mov	dptr,#_lcdgotoaddr_add_65536_49
      00209B F0               [24]  594 	movx	@dptr,a
                                    595 ;	lcd.c:24: lcd_cmd(add | 0x80);
      00209C E0               [24]  596 	movx	a,@dptr
      00209D 44 80            [12]  597 	orl	a,#0x80
      00209F F5 82            [12]  598 	mov	dpl,a
                                    599 ;	lcd.c:25: }
      0020A1 02 20 A4         [24]  600 	ljmp	_lcd_cmd
                                    601 ;------------------------------------------------------------
                                    602 ;Allocation info for local variables in function 'lcd_cmd'
                                    603 ;------------------------------------------------------------
                                    604 ;Command                   Allocated with name '_lcd_cmd_Command_65536_51'
                                    605 ;------------------------------------------------------------
                                    606 ;	lcd.c:28: void lcd_cmd(char Command)	/* GLCD command function */
                                    607 ;	-----------------------------------------
                                    608 ;	 function lcd_cmd
                                    609 ;	-----------------------------------------
      0020A4                        610 _lcd_cmd:
      0020A4 E5 82            [12]  611 	mov	a,dpl
      0020A6 90 00 03         [24]  612 	mov	dptr,#_lcd_cmd_Command_65536_51
      0020A9 F0               [24]  613 	movx	@dptr,a
                                    614 ;	lcd.c:30: E = 0;
                                    615 ;	assignBit
      0020AA C2 92            [12]  616 	clr	_P1_2
                                    617 ;	lcd.c:31: delay(1);
      0020AC 90 00 01         [24]  618 	mov	dptr,#0x0001
      0020AF 12 20 62         [24]  619 	lcall	_delay
                                    620 ;	lcd.c:32: Data_Port = Command;	/* Copy command on data pin */
      0020B2 90 00 03         [24]  621 	mov	dptr,#_lcd_cmd_Command_65536_51
      0020B5 E0               [24]  622 	movx	a,@dptr
      0020B6 F5 80            [12]  623 	mov	_P0,a
                                    624 ;	lcd.c:33: RS = 0;			/* Make RS LOW to select command register */
                                    625 ;	assignBit
      0020B8 C2 90            [12]  626 	clr	_P1_0
                                    627 ;	lcd.c:34: RW = 0;			/* Make RW LOW to select write operation */
                                    628 ;	assignBit
      0020BA C2 91            [12]  629 	clr	_P1_1
                                    630 ;	lcd.c:35: delay(300);
      0020BC 90 01 2C         [24]  631 	mov	dptr,#0x012c
      0020BF 12 20 62         [24]  632 	lcall	_delay
                                    633 ;	lcd.c:36: E = 1;
                                    634 ;	assignBit
      0020C2 D2 92            [12]  635 	setb	_P1_2
                                    636 ;	lcd.c:37: delay(300);
      0020C4 90 01 2C         [24]  637 	mov	dptr,#0x012c
      0020C7 12 20 62         [24]  638 	lcall	_delay
                                    639 ;	lcd.c:38: E=0;
                                    640 ;	assignBit
      0020CA C2 92            [12]  641 	clr	_P1_2
                                    642 ;	lcd.c:40: }
      0020CC 22               [24]  643 	ret
                                    644 ;------------------------------------------------------------
                                    645 ;Allocation info for local variables in function 'lcd_data'
                                    646 ;------------------------------------------------------------
                                    647 ;Data                      Allocated with name '_lcd_data_Data_65536_53'
                                    648 ;------------------------------------------------------------
                                    649 ;	lcd.c:42: void lcd_data(char Data)	/* GLCD data function */
                                    650 ;	-----------------------------------------
                                    651 ;	 function lcd_data
                                    652 ;	-----------------------------------------
      0020CD                        653 _lcd_data:
      0020CD E5 82            [12]  654 	mov	a,dpl
      0020CF 90 00 04         [24]  655 	mov	dptr,#_lcd_data_Data_65536_53
      0020D2 F0               [24]  656 	movx	@dptr,a
                                    657 ;	lcd.c:44: E = 0;
                                    658 ;	assignBit
      0020D3 C2 92            [12]  659 	clr	_P1_2
                                    660 ;	lcd.c:45: delay(1);
      0020D5 90 00 01         [24]  661 	mov	dptr,#0x0001
      0020D8 12 20 62         [24]  662 	lcall	_delay
                                    663 ;	lcd.c:46: Data_Port =Data;	/* Copy command on data pin */
      0020DB 90 00 04         [24]  664 	mov	dptr,#_lcd_data_Data_65536_53
      0020DE E0               [24]  665 	movx	a,@dptr
      0020DF F5 80            [12]  666 	mov	_P0,a
                                    667 ;	lcd.c:47: RS = 1;			/* Make RS LOW to select command register */
                                    668 ;	assignBit
      0020E1 D2 90            [12]  669 	setb	_P1_0
                                    670 ;	lcd.c:48: RW = 0;			/* Make RW LOW to select write operation */
                                    671 ;	assignBit
      0020E3 C2 91            [12]  672 	clr	_P1_1
                                    673 ;	lcd.c:49: delay(300);
      0020E5 90 01 2C         [24]  674 	mov	dptr,#0x012c
      0020E8 12 20 62         [24]  675 	lcall	_delay
                                    676 ;	lcd.c:50: E = 1;
                                    677 ;	assignBit
      0020EB D2 92            [12]  678 	setb	_P1_2
                                    679 ;	lcd.c:51: delay(300);
      0020ED 90 01 2C         [24]  680 	mov	dptr,#0x012c
      0020F0 12 20 62         [24]  681 	lcall	_delay
                                    682 ;	lcd.c:52: E=0;
                                    683 ;	assignBit
      0020F3 C2 92            [12]  684 	clr	_P1_2
                                    685 ;	lcd.c:54: }
      0020F5 22               [24]  686 	ret
                                    687 ;------------------------------------------------------------
                                    688 ;Allocation info for local variables in function 'lcd_Init'
                                    689 ;------------------------------------------------------------
                                    690 ;	lcd.c:59: void lcd_Init()		/* GLCD initialize function */
                                    691 ;	-----------------------------------------
                                    692 ;	 function lcd_Init
                                    693 ;	-----------------------------------------
      0020F6                        694 _lcd_Init:
                                    695 ;	lcd.c:61: delay(100);
      0020F6 90 00 64         [24]  696 	mov	dptr,#0x0064
      0020F9 12 20 62         [24]  697 	lcall	_delay
                                    698 ;	lcd.c:62: lcd_cmd(0x30); //Function set
      0020FC 75 82 30         [24]  699 	mov	dpl,#0x30
      0020FF 12 20 A4         [24]  700 	lcall	_lcd_cmd
                                    701 ;	lcd.c:63: delay(10);
      002102 90 00 0A         [24]  702 	mov	dptr,#0x000a
      002105 12 20 62         [24]  703 	lcall	_delay
                                    704 ;	lcd.c:64: lcd_cmd(0x30); //
      002108 75 82 30         [24]  705 	mov	dpl,#0x30
      00210B 12 20 A4         [24]  706 	lcall	_lcd_cmd
                                    707 ;	lcd.c:65: delay(10);
      00210E 90 00 0A         [24]  708 	mov	dptr,#0x000a
      002111 12 20 62         [24]  709 	lcall	_delay
                                    710 ;	lcd.c:66: lcd_cmd(0x0F);
      002114 75 82 0F         [24]  711 	mov	dpl,#0x0f
      002117 12 20 A4         [24]  712 	lcall	_lcd_cmd
                                    713 ;	lcd.c:67: delay(10);
      00211A 90 00 0A         [24]  714 	mov	dptr,#0x000a
      00211D 12 20 62         [24]  715 	lcall	_delay
                                    716 ;	lcd.c:68: lcd_cmd(0x01); //
      002120 75 82 01         [24]  717 	mov	dpl,#0x01
      002123 12 20 A4         [24]  718 	lcall	_lcd_cmd
                                    719 ;	lcd.c:69: delay(20);
      002126 90 00 14         [24]  720 	mov	dptr,#0x0014
      002129 12 20 62         [24]  721 	lcall	_delay
                                    722 ;	lcd.c:70: lcd_cmd(0x06); //
      00212C 75 82 06         [24]  723 	mov	dpl,#0x06
      00212F 12 20 A4         [24]  724 	lcall	_lcd_cmd
                                    725 ;	lcd.c:71: delay(10);
      002132 90 00 0A         [24]  726 	mov	dptr,#0x000a
                                    727 ;	lcd.c:74: }
      002135 02 20 62         [24]  728 	ljmp	_delay
                                    729 ;------------------------------------------------------------
                                    730 ;Allocation info for local variables in function 'lcdputstr'
                                    731 ;------------------------------------------------------------
                                    732 ;str                       Allocated with name '_lcdputstr_str_65536_56'
                                    733 ;------------------------------------------------------------
                                    734 ;	lcd.c:76: void lcdputstr(uint8_t *str)
                                    735 ;	-----------------------------------------
                                    736 ;	 function lcdputstr
                                    737 ;	-----------------------------------------
      002138                        738 _lcdputstr:
      002138 AF F0            [24]  739 	mov	r7,b
      00213A AE 83            [24]  740 	mov	r6,dph
      00213C E5 82            [12]  741 	mov	a,dpl
      00213E 90 00 05         [24]  742 	mov	dptr,#_lcdputstr_str_65536_56
      002141 F0               [24]  743 	movx	@dptr,a
      002142 EE               [12]  744 	mov	a,r6
      002143 A3               [24]  745 	inc	dptr
      002144 F0               [24]  746 	movx	@dptr,a
      002145 EF               [12]  747 	mov	a,r7
      002146 A3               [24]  748 	inc	dptr
      002147 F0               [24]  749 	movx	@dptr,a
                                    750 ;	lcd.c:78: while(*str)
      002148 90 00 05         [24]  751 	mov	dptr,#_lcdputstr_str_65536_56
      00214B E0               [24]  752 	movx	a,@dptr
      00214C FD               [12]  753 	mov	r5,a
      00214D A3               [24]  754 	inc	dptr
      00214E E0               [24]  755 	movx	a,@dptr
      00214F FE               [12]  756 	mov	r6,a
      002150 A3               [24]  757 	inc	dptr
      002151 E0               [24]  758 	movx	a,@dptr
      002152 FF               [12]  759 	mov	r7,a
      002153                        760 00101$:
      002153 8D 82            [24]  761 	mov	dpl,r5
      002155 8E 83            [24]  762 	mov	dph,r6
      002157 8F F0            [24]  763 	mov	b,r7
      002159 12 2A E0         [24]  764 	lcall	__gptrget
      00215C FC               [12]  765 	mov	r4,a
      00215D 60 23            [24]  766 	jz	00108$
                                    767 ;	lcd.c:79: lcd_data(*str++);
      00215F 0D               [12]  768 	inc	r5
      002160 BD 00 01         [24]  769 	cjne	r5,#0x00,00116$
      002163 0E               [12]  770 	inc	r6
      002164                        771 00116$:
      002164 90 00 05         [24]  772 	mov	dptr,#_lcdputstr_str_65536_56
      002167 ED               [12]  773 	mov	a,r5
      002168 F0               [24]  774 	movx	@dptr,a
      002169 EE               [12]  775 	mov	a,r6
      00216A A3               [24]  776 	inc	dptr
      00216B F0               [24]  777 	movx	@dptr,a
      00216C EF               [12]  778 	mov	a,r7
      00216D A3               [24]  779 	inc	dptr
      00216E F0               [24]  780 	movx	@dptr,a
      00216F 8C 82            [24]  781 	mov	dpl,r4
      002171 C0 07            [24]  782 	push	ar7
      002173 C0 06            [24]  783 	push	ar6
      002175 C0 05            [24]  784 	push	ar5
      002177 12 20 CD         [24]  785 	lcall	_lcd_data
      00217A D0 05            [24]  786 	pop	ar5
      00217C D0 06            [24]  787 	pop	ar6
      00217E D0 07            [24]  788 	pop	ar7
      002180 80 D1            [24]  789 	sjmp	00101$
      002182                        790 00108$:
      002182 90 00 05         [24]  791 	mov	dptr,#_lcdputstr_str_65536_56
      002185 ED               [12]  792 	mov	a,r5
      002186 F0               [24]  793 	movx	@dptr,a
      002187 EE               [12]  794 	mov	a,r6
      002188 A3               [24]  795 	inc	dptr
      002189 F0               [24]  796 	movx	@dptr,a
      00218A EF               [12]  797 	mov	a,r7
      00218B A3               [24]  798 	inc	dptr
      00218C F0               [24]  799 	movx	@dptr,a
                                    800 ;	lcd.c:81: }
      00218D 22               [24]  801 	ret
                                    802 	.area CSEG    (CODE)
                                    803 	.area CONST   (CODE)
                                    804 	.area XINIT   (CODE)
                                    805 	.area CABS    (ABS,CODE)
