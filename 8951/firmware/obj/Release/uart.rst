                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module uart
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _hexToInt
                                     12 	.globl _TF1
                                     13 	.globl _TR1
                                     14 	.globl _TF0
                                     15 	.globl _TR0
                                     16 	.globl _IE1
                                     17 	.globl _IT1
                                     18 	.globl _IE0
                                     19 	.globl _IT0
                                     20 	.globl _SM0
                                     21 	.globl _SM1
                                     22 	.globl _SM2
                                     23 	.globl _REN
                                     24 	.globl _TB8
                                     25 	.globl _RB8
                                     26 	.globl _TI
                                     27 	.globl _RI
                                     28 	.globl _CY
                                     29 	.globl _AC
                                     30 	.globl _F0
                                     31 	.globl _RS1
                                     32 	.globl _RS0
                                     33 	.globl _OV
                                     34 	.globl _F1
                                     35 	.globl _P
                                     36 	.globl _RD
                                     37 	.globl _WR
                                     38 	.globl _T1
                                     39 	.globl _T0
                                     40 	.globl _INT1
                                     41 	.globl _INT0
                                     42 	.globl _TXD0
                                     43 	.globl _TXD
                                     44 	.globl _RXD0
                                     45 	.globl _RXD
                                     46 	.globl _P3_7
                                     47 	.globl _P3_6
                                     48 	.globl _P3_5
                                     49 	.globl _P3_4
                                     50 	.globl _P3_3
                                     51 	.globl _P3_2
                                     52 	.globl _P3_1
                                     53 	.globl _P3_0
                                     54 	.globl _P2_7
                                     55 	.globl _P2_6
                                     56 	.globl _P2_5
                                     57 	.globl _P2_4
                                     58 	.globl _P2_3
                                     59 	.globl _P2_2
                                     60 	.globl _P2_1
                                     61 	.globl _P2_0
                                     62 	.globl _P1_7
                                     63 	.globl _P1_6
                                     64 	.globl _P1_5
                                     65 	.globl _P1_4
                                     66 	.globl _P1_3
                                     67 	.globl _P1_2
                                     68 	.globl _P1_1
                                     69 	.globl _P1_0
                                     70 	.globl _P0_7
                                     71 	.globl _P0_6
                                     72 	.globl _P0_5
                                     73 	.globl _P0_4
                                     74 	.globl _P0_3
                                     75 	.globl _P0_2
                                     76 	.globl _P0_1
                                     77 	.globl _P0_0
                                     78 	.globl _PS
                                     79 	.globl _PT1
                                     80 	.globl _PX1
                                     81 	.globl _PT0
                                     82 	.globl _PX0
                                     83 	.globl _EA
                                     84 	.globl _ES
                                     85 	.globl _ET1
                                     86 	.globl _EX1
                                     87 	.globl _ET0
                                     88 	.globl _EX0
                                     89 	.globl _BREG_F7
                                     90 	.globl _BREG_F6
                                     91 	.globl _BREG_F5
                                     92 	.globl _BREG_F4
                                     93 	.globl _BREG_F3
                                     94 	.globl _BREG_F2
                                     95 	.globl _BREG_F1
                                     96 	.globl _BREG_F0
                                     97 	.globl _P5_7
                                     98 	.globl _P5_6
                                     99 	.globl _P5_5
                                    100 	.globl _P5_4
                                    101 	.globl _P5_3
                                    102 	.globl _P5_2
                                    103 	.globl _P5_1
                                    104 	.globl _P5_0
                                    105 	.globl _P4_7
                                    106 	.globl _P4_6
                                    107 	.globl _P4_5
                                    108 	.globl _P4_4
                                    109 	.globl _P4_3
                                    110 	.globl _P4_2
                                    111 	.globl _P4_1
                                    112 	.globl _P4_0
                                    113 	.globl _PX0L
                                    114 	.globl _PT0L
                                    115 	.globl _PX1L
                                    116 	.globl _PT1L
                                    117 	.globl _PSL
                                    118 	.globl _PT2L
                                    119 	.globl _PPCL
                                    120 	.globl _EC
                                    121 	.globl _CCF0
                                    122 	.globl _CCF1
                                    123 	.globl _CCF2
                                    124 	.globl _CCF3
                                    125 	.globl _CCF4
                                    126 	.globl _CR
                                    127 	.globl _CF
                                    128 	.globl _TF2
                                    129 	.globl _EXF2
                                    130 	.globl _RCLK
                                    131 	.globl _TCLK
                                    132 	.globl _EXEN2
                                    133 	.globl _TR2
                                    134 	.globl _C_T2
                                    135 	.globl _CP_RL2
                                    136 	.globl _T2CON_7
                                    137 	.globl _T2CON_6
                                    138 	.globl _T2CON_5
                                    139 	.globl _T2CON_4
                                    140 	.globl _T2CON_3
                                    141 	.globl _T2CON_2
                                    142 	.globl _T2CON_1
                                    143 	.globl _T2CON_0
                                    144 	.globl _PT2
                                    145 	.globl _ET2
                                    146 	.globl _TMOD
                                    147 	.globl _TL1
                                    148 	.globl _TL0
                                    149 	.globl _TH1
                                    150 	.globl _TH0
                                    151 	.globl _TCON
                                    152 	.globl _SP
                                    153 	.globl _SCON
                                    154 	.globl _SBUF0
                                    155 	.globl _SBUF
                                    156 	.globl _PSW
                                    157 	.globl _PCON
                                    158 	.globl _P3
                                    159 	.globl _P2
                                    160 	.globl _P1
                                    161 	.globl _P0
                                    162 	.globl _IP
                                    163 	.globl _IE
                                    164 	.globl _DP0L
                                    165 	.globl _DPL
                                    166 	.globl _DP0H
                                    167 	.globl _DPH
                                    168 	.globl _B
                                    169 	.globl _ACC
                                    170 	.globl _EECON
                                    171 	.globl _KBF
                                    172 	.globl _KBE
                                    173 	.globl _KBLS
                                    174 	.globl _BRL
                                    175 	.globl _BDRCON
                                    176 	.globl _T2MOD
                                    177 	.globl _SPDAT
                                    178 	.globl _SPSTA
                                    179 	.globl _SPCON
                                    180 	.globl _SADEN
                                    181 	.globl _SADDR
                                    182 	.globl _WDTPRG
                                    183 	.globl _WDTRST
                                    184 	.globl _P5
                                    185 	.globl _P4
                                    186 	.globl _IPH1
                                    187 	.globl _IPL1
                                    188 	.globl _IPH0
                                    189 	.globl _IPL0
                                    190 	.globl _IEN1
                                    191 	.globl _IEN0
                                    192 	.globl _CMOD
                                    193 	.globl _CL
                                    194 	.globl _CH
                                    195 	.globl _CCON
                                    196 	.globl _CCAPM4
                                    197 	.globl _CCAPM3
                                    198 	.globl _CCAPM2
                                    199 	.globl _CCAPM1
                                    200 	.globl _CCAPM0
                                    201 	.globl _CCAP4L
                                    202 	.globl _CCAP3L
                                    203 	.globl _CCAP2L
                                    204 	.globl _CCAP1L
                                    205 	.globl _CCAP0L
                                    206 	.globl _CCAP4H
                                    207 	.globl _CCAP3H
                                    208 	.globl _CCAP2H
                                    209 	.globl _CCAP1H
                                    210 	.globl _CCAP0H
                                    211 	.globl _CKCON1
                                    212 	.globl _CKCON0
                                    213 	.globl _CKRL
                                    214 	.globl _AUXR1
                                    215 	.globl _AUXR
                                    216 	.globl _TH2
                                    217 	.globl _TL2
                                    218 	.globl _RCAP2H
                                    219 	.globl _RCAP2L
                                    220 	.globl _T2CON
                                    221 	.globl _putchar
                                    222 	.globl _getchar
                                    223 	.globl _putstr
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
                                    456 ; indirectly addressable internal ram data
                                    457 ;--------------------------------------------------------
                                    458 	.area ISEG    (DATA)
                                    459 ;--------------------------------------------------------
                                    460 ; absolute internal ram data
                                    461 ;--------------------------------------------------------
                                    462 	.area IABS    (ABS,DATA)
                                    463 	.area IABS    (ABS,DATA)
                                    464 ;--------------------------------------------------------
                                    465 ; bit data
                                    466 ;--------------------------------------------------------
                                    467 	.area BSEG    (BIT)
                                    468 ;--------------------------------------------------------
                                    469 ; paged external ram data
                                    470 ;--------------------------------------------------------
                                    471 	.area PSEG    (PAG,XDATA)
                                    472 ;--------------------------------------------------------
                                    473 ; external ram data
                                    474 ;--------------------------------------------------------
                                    475 	.area XSEG    (XDATA)
      00001E                        476 _putchar_c_65536_45:
      00001E                        477 	.ds 2
      000020                        478 _putstr_s_65536_49:
      000020                        479 	.ds 3
      000023                        480 _hexToInt_data_65536_52:
      000023                        481 	.ds 1
                                    482 ;--------------------------------------------------------
                                    483 ; absolute external ram data
                                    484 ;--------------------------------------------------------
                                    485 	.area XABS    (ABS,XDATA)
                                    486 ;--------------------------------------------------------
                                    487 ; external initialized ram data
                                    488 ;--------------------------------------------------------
                                    489 	.area XISEG   (XDATA)
                                    490 	.area HOME    (CODE)
                                    491 	.area GSINIT0 (CODE)
                                    492 	.area GSINIT1 (CODE)
                                    493 	.area GSINIT2 (CODE)
                                    494 	.area GSINIT3 (CODE)
                                    495 	.area GSINIT4 (CODE)
                                    496 	.area GSINIT5 (CODE)
                                    497 	.area GSINIT  (CODE)
                                    498 	.area GSFINAL (CODE)
                                    499 	.area CSEG    (CODE)
                                    500 ;--------------------------------------------------------
                                    501 ; global & static initialisations
                                    502 ;--------------------------------------------------------
                                    503 	.area HOME    (CODE)
                                    504 	.area GSINIT  (CODE)
                                    505 	.area GSFINAL (CODE)
                                    506 	.area GSINIT  (CODE)
                                    507 ;--------------------------------------------------------
                                    508 ; Home
                                    509 ;--------------------------------------------------------
                                    510 	.area HOME    (CODE)
                                    511 	.area HOME    (CODE)
                                    512 ;--------------------------------------------------------
                                    513 ; code
                                    514 ;--------------------------------------------------------
                                    515 	.area CSEG    (CODE)
                                    516 ;------------------------------------------------------------
                                    517 ;Allocation info for local variables in function 'putchar'
                                    518 ;------------------------------------------------------------
                                    519 ;c                         Allocated with name '_putchar_c_65536_45'
                                    520 ;------------------------------------------------------------
                                    521 ;	uart.c:3: int putchar (int c)
                                    522 ;	-----------------------------------------
                                    523 ;	 function putchar
                                    524 ;	-----------------------------------------
      002A1C                        525 _putchar:
                           000007   526 	ar7 = 0x07
                           000006   527 	ar6 = 0x06
                           000005   528 	ar5 = 0x05
                           000004   529 	ar4 = 0x04
                           000003   530 	ar3 = 0x03
                           000002   531 	ar2 = 0x02
                           000001   532 	ar1 = 0x01
                           000000   533 	ar0 = 0x00
      002A1C AF 83            [24]  534 	mov	r7,dph
      002A1E E5 82            [12]  535 	mov	a,dpl
      002A20 90 00 1E         [24]  536 	mov	dptr,#_putchar_c_65536_45
      002A23 F0               [24]  537 	movx	@dptr,a
      002A24 EF               [12]  538 	mov	a,r7
      002A25 A3               [24]  539 	inc	dptr
      002A26 F0               [24]  540 	movx	@dptr,a
                                    541 ;	uart.c:5: while (!TI);
      002A27                        542 00101$:
      002A27 30 99 FD         [24]  543 	jnb	_TI,00101$
                                    544 ;	uart.c:6: SBUF = c;           // load serial port with transmit value
      002A2A 90 00 1E         [24]  545 	mov	dptr,#_putchar_c_65536_45
      002A2D E0               [24]  546 	movx	a,@dptr
      002A2E FE               [12]  547 	mov	r6,a
      002A2F A3               [24]  548 	inc	dptr
      002A30 E0               [24]  549 	movx	a,@dptr
      002A31 FF               [12]  550 	mov	r7,a
      002A32 8E 99            [24]  551 	mov	_SBUF,r6
                                    552 ;	uart.c:7: TI = 0;             // clears TI flag
                                    553 ;	assignBit
      002A34 C2 99            [12]  554 	clr	_TI
                                    555 ;	uart.c:8: return c;
      002A36 8E 82            [24]  556 	mov	dpl,r6
      002A38 8F 83            [24]  557 	mov	dph,r7
                                    558 ;	uart.c:9: }
      002A3A 22               [24]  559 	ret
                                    560 ;------------------------------------------------------------
                                    561 ;Allocation info for local variables in function 'getchar'
                                    562 ;------------------------------------------------------------
                                    563 ;	uart.c:11: int getchar (void)
                                    564 ;	-----------------------------------------
                                    565 ;	 function getchar
                                    566 ;	-----------------------------------------
      002A3B                        567 _getchar:
                                    568 ;	uart.c:13: while (!RI);
      002A3B                        569 00101$:
                                    570 ;	uart.c:14: RI = 0;                         // cleasr RI flag
                                    571 ;	assignBit
      002A3B 10 98 02         [24]  572 	jbc	_RI,00114$
      002A3E 80 FB            [24]  573 	sjmp	00101$
      002A40                        574 00114$:
                                    575 ;	uart.c:16: return SBUF;                    // return character from SBUF
      002A40 AE 99            [24]  576 	mov	r6,_SBUF
      002A42 7F 00            [12]  577 	mov	r7,#0x00
      002A44 8E 82            [24]  578 	mov	dpl,r6
      002A46 8F 83            [24]  579 	mov	dph,r7
                                    580 ;	uart.c:17: }
      002A48 22               [24]  581 	ret
                                    582 ;------------------------------------------------------------
                                    583 ;Allocation info for local variables in function 'putstr'
                                    584 ;------------------------------------------------------------
                                    585 ;s                         Allocated with name '_putstr_s_65536_49'
                                    586 ;i                         Allocated with name '_putstr_i_65536_50'
                                    587 ;------------------------------------------------------------
                                    588 ;	uart.c:19: int putstr (char *s)
                                    589 ;	-----------------------------------------
                                    590 ;	 function putstr
                                    591 ;	-----------------------------------------
      002A49                        592 _putstr:
      002A49 AF F0            [24]  593 	mov	r7,b
      002A4B AE 83            [24]  594 	mov	r6,dph
      002A4D E5 82            [12]  595 	mov	a,dpl
      002A4F 90 00 20         [24]  596 	mov	dptr,#_putstr_s_65536_49
      002A52 F0               [24]  597 	movx	@dptr,a
      002A53 EE               [12]  598 	mov	a,r6
      002A54 A3               [24]  599 	inc	dptr
      002A55 F0               [24]  600 	movx	@dptr,a
      002A56 EF               [12]  601 	mov	a,r7
      002A57 A3               [24]  602 	inc	dptr
      002A58 F0               [24]  603 	movx	@dptr,a
                                    604 ;	uart.c:22: while (*s){            // output characters until NULL found
      002A59 90 00 20         [24]  605 	mov	dptr,#_putstr_s_65536_49
      002A5C E0               [24]  606 	movx	a,@dptr
      002A5D FD               [12]  607 	mov	r5,a
      002A5E A3               [24]  608 	inc	dptr
      002A5F E0               [24]  609 	movx	a,@dptr
      002A60 FE               [12]  610 	mov	r6,a
      002A61 A3               [24]  611 	inc	dptr
      002A62 E0               [24]  612 	movx	a,@dptr
      002A63 FF               [12]  613 	mov	r7,a
      002A64 7B 00            [12]  614 	mov	r3,#0x00
      002A66 7C 00            [12]  615 	mov	r4,#0x00
      002A68                        616 00101$:
      002A68 8D 82            [24]  617 	mov	dpl,r5
      002A6A 8E 83            [24]  618 	mov	dph,r6
      002A6C 8F F0            [24]  619 	mov	b,r7
      002A6E 12 2A E0         [24]  620 	lcall	__gptrget
      002A71 FA               [12]  621 	mov	r2,a
      002A72 60 36            [24]  622 	jz	00108$
                                    623 ;	uart.c:23: putchar(*s++);
      002A74 0D               [12]  624 	inc	r5
      002A75 BD 00 01         [24]  625 	cjne	r5,#0x00,00116$
      002A78 0E               [12]  626 	inc	r6
      002A79                        627 00116$:
      002A79 90 00 20         [24]  628 	mov	dptr,#_putstr_s_65536_49
      002A7C ED               [12]  629 	mov	a,r5
      002A7D F0               [24]  630 	movx	@dptr,a
      002A7E EE               [12]  631 	mov	a,r6
      002A7F A3               [24]  632 	inc	dptr
      002A80 F0               [24]  633 	movx	@dptr,a
      002A81 EF               [12]  634 	mov	a,r7
      002A82 A3               [24]  635 	inc	dptr
      002A83 F0               [24]  636 	movx	@dptr,a
      002A84 8A 01            [24]  637 	mov	ar1,r2
      002A86 7A 00            [12]  638 	mov	r2,#0x00
      002A88 89 82            [24]  639 	mov	dpl,r1
      002A8A 8A 83            [24]  640 	mov	dph,r2
      002A8C C0 07            [24]  641 	push	ar7
      002A8E C0 06            [24]  642 	push	ar6
      002A90 C0 05            [24]  643 	push	ar5
      002A92 C0 04            [24]  644 	push	ar4
      002A94 C0 03            [24]  645 	push	ar3
      002A96 12 2A 1C         [24]  646 	lcall	_putchar
      002A99 D0 03            [24]  647 	pop	ar3
      002A9B D0 04            [24]  648 	pop	ar4
      002A9D D0 05            [24]  649 	pop	ar5
      002A9F D0 06            [24]  650 	pop	ar6
      002AA1 D0 07            [24]  651 	pop	ar7
                                    652 ;	uart.c:24: i++;
      002AA3 0B               [12]  653 	inc	r3
      002AA4 BB 00 C1         [24]  654 	cjne	r3,#0x00,00101$
      002AA7 0C               [12]  655 	inc	r4
      002AA8 80 BE            [24]  656 	sjmp	00101$
      002AAA                        657 00108$:
      002AAA 90 00 20         [24]  658 	mov	dptr,#_putstr_s_65536_49
      002AAD ED               [12]  659 	mov	a,r5
      002AAE F0               [24]  660 	movx	@dptr,a
      002AAF EE               [12]  661 	mov	a,r6
      002AB0 A3               [24]  662 	inc	dptr
      002AB1 F0               [24]  663 	movx	@dptr,a
      002AB2 EF               [12]  664 	mov	a,r7
      002AB3 A3               [24]  665 	inc	dptr
      002AB4 F0               [24]  666 	movx	@dptr,a
                                    667 ;	uart.c:26: return i+1;
      002AB5 0B               [12]  668 	inc	r3
      002AB6 BB 00 01         [24]  669 	cjne	r3,#0x00,00118$
      002AB9 0C               [12]  670 	inc	r4
      002ABA                        671 00118$:
      002ABA 8B 82            [24]  672 	mov	dpl,r3
      002ABC 8C 83            [24]  673 	mov	dph,r4
                                    674 ;	uart.c:27: }
      002ABE 22               [24]  675 	ret
                                    676 ;------------------------------------------------------------
                                    677 ;Allocation info for local variables in function 'hexToInt'
                                    678 ;------------------------------------------------------------
                                    679 ;data                      Allocated with name '_hexToInt_data_65536_52'
                                    680 ;------------------------------------------------------------
                                    681 ;	uart.c:29: uint8_t hexToInt(uint8_t data)
                                    682 ;	-----------------------------------------
                                    683 ;	 function hexToInt
                                    684 ;	-----------------------------------------
      002ABF                        685 _hexToInt:
      002ABF E5 82            [12]  686 	mov	a,dpl
      002AC1 90 00 23         [24]  687 	mov	dptr,#_hexToInt_data_65536_52
      002AC4 F0               [24]  688 	movx	@dptr,a
                                    689 ;	uart.c:31: if('0'<= data && data <= '9')
      002AC5 E0               [24]  690 	movx	a,@dptr
      002AC6 FF               [12]  691 	mov	r7,a
      002AC7 BF 30 00         [24]  692 	cjne	r7,#0x30,00115$
      002ACA                        693 00115$:
      002ACA 40 0B            [24]  694 	jc	00102$
      002ACC EF               [12]  695 	mov	a,r7
      002ACD 24 C6            [12]  696 	add	a,#0xff - 0x39
      002ACF 40 06            [24]  697 	jc	00102$
                                    698 ;	uart.c:32: return data - '0';
      002AD1 EF               [12]  699 	mov	a,r7
      002AD2 24 D0            [12]  700 	add	a,#0xd0
      002AD4 F5 82            [12]  701 	mov	dpl,a
      002AD6 22               [24]  702 	ret
      002AD7                        703 00102$:
                                    704 ;	uart.c:34: return data - 'A' +10;
      002AD7 90 00 23         [24]  705 	mov	dptr,#_hexToInt_data_65536_52
      002ADA E0               [24]  706 	movx	a,@dptr
      002ADB 24 C9            [12]  707 	add	a,#0xc9
                                    708 ;	uart.c:35: }
      002ADD F5 82            [12]  709 	mov	dpl,a
      002ADF 22               [24]  710 	ret
                                    711 	.area CSEG    (CODE)
                                    712 	.area CONST   (CODE)
                                    713 	.area XINIT   (CODE)
                                    714 	.area CABS    (ABS,CODE)
