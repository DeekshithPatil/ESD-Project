;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.9.0 #11195 (MINGW64)
;--------------------------------------------------------
	.module ttt
	.optsdcc -mmcs51 --model-large
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _A
	.globl _restartGame
	.globl _putO
	.globl _putX
	.globl _ccSWO
	.globl _ccSWX
	.globl _ccSquare
	.globl _lcdgotoaddr
	.globl _lcdputstr
	.globl _lcd_data
	.globl _lcd_cmd
	.globl _delay
	.globl _getchar
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD0
	.globl _TXD
	.globl _RXD0
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _BREG_F7
	.globl _BREG_F6
	.globl _BREG_F5
	.globl _BREG_F4
	.globl _BREG_F3
	.globl _BREG_F2
	.globl _BREG_F1
	.globl _BREG_F0
	.globl _P5_7
	.globl _P5_6
	.globl _P5_5
	.globl _P5_4
	.globl _P5_3
	.globl _P5_2
	.globl _P5_1
	.globl _P5_0
	.globl _P4_7
	.globl _P4_6
	.globl _P4_5
	.globl _P4_4
	.globl _P4_3
	.globl _P4_2
	.globl _P4_1
	.globl _P4_0
	.globl _PX0L
	.globl _PT0L
	.globl _PX1L
	.globl _PT1L
	.globl _PSL
	.globl _PT2L
	.globl _PPCL
	.globl _EC
	.globl _CCF0
	.globl _CCF1
	.globl _CCF2
	.globl _CCF3
	.globl _CCF4
	.globl _CR
	.globl _CF
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _ET2
	.globl _TMOD
	.globl _TL1
	.globl _TL0
	.globl _TH1
	.globl _TH0
	.globl _TCON
	.globl _SP
	.globl _SCON
	.globl _SBUF0
	.globl _SBUF
	.globl _PSW
	.globl _PCON
	.globl _P3
	.globl _P2
	.globl _P1
	.globl _P0
	.globl _IP
	.globl _IE
	.globl _DP0L
	.globl _DPL
	.globl _DP0H
	.globl _DPH
	.globl _B
	.globl _ACC
	.globl _EECON
	.globl _KBF
	.globl _KBE
	.globl _KBLS
	.globl _BRL
	.globl _BDRCON
	.globl _T2MOD
	.globl _SPDAT
	.globl _SPSTA
	.globl _SPCON
	.globl _SADEN
	.globl _SADDR
	.globl _WDTPRG
	.globl _WDTRST
	.globl _P5
	.globl _P4
	.globl _IPH1
	.globl _IPL1
	.globl _IPH0
	.globl _IPL0
	.globl _IEN1
	.globl _IEN0
	.globl _CMOD
	.globl _CL
	.globl _CH
	.globl _CCON
	.globl _CCAPM4
	.globl _CCAPM3
	.globl _CCAPM2
	.globl _CCAPM1
	.globl _CCAPM0
	.globl _CCAP4L
	.globl _CCAP3L
	.globl _CCAP2L
	.globl _CCAP1L
	.globl _CCAP0L
	.globl _CCAP4H
	.globl _CCAP3H
	.globl _CCAP2H
	.globl _CCAP1H
	.globl _CCAP0H
	.globl _CKCON1
	.globl _CKCON0
	.globl _CKRL
	.globl _AUXR1
	.globl _AUXR
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _squareWO
	.globl _squareWX
	.globl _square
	.globl _currentPlayer
	.globl _currentIndex
	.globl _currentPos
	.globl _M
	.globl _startGame
	.globl _Init_Game
	.globl _changeState
	.globl _gameDecision
	.globl _gameOver
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_AUXR	=	0x008e
_AUXR1	=	0x00a2
_CKRL	=	0x0097
_CKCON0	=	0x008f
_CKCON1	=	0x00af
_CCAP0H	=	0x00fa
_CCAP1H	=	0x00fb
_CCAP2H	=	0x00fc
_CCAP3H	=	0x00fd
_CCAP4H	=	0x00fe
_CCAP0L	=	0x00ea
_CCAP1L	=	0x00eb
_CCAP2L	=	0x00ec
_CCAP3L	=	0x00ed
_CCAP4L	=	0x00ee
_CCAPM0	=	0x00da
_CCAPM1	=	0x00db
_CCAPM2	=	0x00dc
_CCAPM3	=	0x00dd
_CCAPM4	=	0x00de
_CCON	=	0x00d8
_CH	=	0x00f9
_CL	=	0x00e9
_CMOD	=	0x00d9
_IEN0	=	0x00a8
_IEN1	=	0x00b1
_IPL0	=	0x00b8
_IPH0	=	0x00b7
_IPL1	=	0x00b2
_IPH1	=	0x00b3
_P4	=	0x00c0
_P5	=	0x00e8
_WDTRST	=	0x00a6
_WDTPRG	=	0x00a7
_SADDR	=	0x00a9
_SADEN	=	0x00b9
_SPCON	=	0x00c3
_SPSTA	=	0x00c4
_SPDAT	=	0x00c5
_T2MOD	=	0x00c9
_BDRCON	=	0x009b
_BRL	=	0x009a
_KBLS	=	0x009c
_KBE	=	0x009d
_KBF	=	0x009e
_EECON	=	0x00d2
_ACC	=	0x00e0
_B	=	0x00f0
_DPH	=	0x0083
_DP0H	=	0x0083
_DPL	=	0x0082
_DP0L	=	0x0082
_IE	=	0x00a8
_IP	=	0x00b8
_P0	=	0x0080
_P1	=	0x0090
_P2	=	0x00a0
_P3	=	0x00b0
_PCON	=	0x0087
_PSW	=	0x00d0
_SBUF	=	0x0099
_SBUF0	=	0x0099
_SCON	=	0x0098
_SP	=	0x0081
_TCON	=	0x0088
_TH0	=	0x008c
_TH1	=	0x008d
_TL0	=	0x008a
_TL1	=	0x008b
_TMOD	=	0x0089
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_ET2	=	0x00ad
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
_CF	=	0x00df
_CR	=	0x00de
_CCF4	=	0x00dc
_CCF3	=	0x00db
_CCF2	=	0x00da
_CCF1	=	0x00d9
_CCF0	=	0x00d8
_EC	=	0x00ae
_PPCL	=	0x00be
_PT2L	=	0x00bd
_PSL	=	0x00bc
_PT1L	=	0x00bb
_PX1L	=	0x00ba
_PT0L	=	0x00b9
_PX0L	=	0x00b8
_P4_0	=	0x00c0
_P4_1	=	0x00c1
_P4_2	=	0x00c2
_P4_3	=	0x00c3
_P4_4	=	0x00c4
_P4_5	=	0x00c5
_P4_6	=	0x00c6
_P4_7	=	0x00c7
_P5_0	=	0x00e8
_P5_1	=	0x00e9
_P5_2	=	0x00ea
_P5_3	=	0x00eb
_P5_4	=	0x00ec
_P5_5	=	0x00ed
_P5_6	=	0x00ee
_P5_7	=	0x00ef
_BREG_F0	=	0x00f0
_BREG_F1	=	0x00f1
_BREG_F2	=	0x00f2
_BREG_F3	=	0x00f3
_BREG_F4	=	0x00f4
_BREG_F5	=	0x00f5
_BREG_F6	=	0x00f6
_BREG_F7	=	0x00f7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_RXD0	=	0x00b0
_TXD	=	0x00b1
_TXD0	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
_gameDecision_sloc0_1_0:
	.ds 2
_gameDecision_sloc1_1_0:
	.ds 1
_gameDecision_sloc2_1_0:
	.ds 1
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_M::
	.ds 9
_currentPos::
	.ds 1
_currentIndex::
	.ds 1
_currentPlayer::
	.ds 2
_gameDecision_decision_65536_91:
	.ds 2
_gameOver_player_65536_107:
	.ds 2
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
_square::
	.ds 32
_squareWX::
	.ds 32
_squareWO::
	.ds 32
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'ccSquare'
;------------------------------------------------------------
;rows                      Allocated with name '_ccSquare_rows_65536_53'
;i                         Allocated with name '_ccSquare_i_131072_54'
;------------------------------------------------------------
;	ttt.c:21: void ccSquare(void)
;	-----------------------------------------
;	 function ccSquare
;	-----------------------------------------
_ccSquare:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	ttt.c:23: uint16_t *rows =square;
;	ttt.c:24: lcd_cmd(0x02);
	mov	dpl,#0x02
	lcall	_lcd_cmd
;	ttt.c:25: lcd_cmd(0x40|0x00);
	mov	dpl,#0x40
	lcall	_lcd_cmd
;	ttt.c:26: for(int i=0;i<16;i++){
	mov	r5,#_square
	mov	r6,#(_square >> 8)
	mov	r7,#0x00
	mov	r3,#0x00
	mov	r4,#0x00
00103$:
	clr	c
	mov	a,r3
	subb	a,#0x10
	mov	a,r4
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00105$
;	ttt.c:27: lcd_data((*rows>>8)& 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,a
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:28: lcd_data((*rows++) & 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	mov	a,#0x02
	add	a,r5
	mov	r5,a
	clr	a
	addc	a,r6
	mov	r6,a
	mov	dpl,r2
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
;	ttt.c:29: delay(1);
	mov	dptr,#0x0001
	lcall	_delay
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:26: for(int i=0;i<16;i++){
	inc	r3
	cjne	r3,#0x00,00103$
	inc	r4
	sjmp	00103$
00105$:
;	ttt.c:31: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ccSWX'
;------------------------------------------------------------
;rows                      Allocated with name '_ccSWX_rows_65536_57'
;i                         Allocated with name '_ccSWX_i_131072_58'
;------------------------------------------------------------
;	ttt.c:33: void ccSWX(void)
;	-----------------------------------------
;	 function ccSWX
;	-----------------------------------------
_ccSWX:
;	ttt.c:35: uint16_t *rows =squareWX;
;	ttt.c:36: lcd_cmd(0x02);
	mov	dpl,#0x02
	lcall	_lcd_cmd
;	ttt.c:37: lcd_cmd(0x40|0x10);
	mov	dpl,#0x50
	lcall	_lcd_cmd
;	ttt.c:38: for(int i=0;i<16;i++){
	mov	r5,#_squareWX
	mov	r6,#(_squareWX >> 8)
	mov	r7,#0x00
	mov	r3,#0x00
	mov	r4,#0x00
00103$:
	clr	c
	mov	a,r3
	subb	a,#0x10
	mov	a,r4
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00105$
;	ttt.c:39: lcd_data((*rows>>8)& 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,a
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:40: lcd_data((*rows++) & 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	mov	a,#0x02
	add	a,r5
	mov	r5,a
	clr	a
	addc	a,r6
	mov	r6,a
	mov	dpl,r2
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
;	ttt.c:41: delay(1);
	mov	dptr,#0x0001
	lcall	_delay
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:38: for(int i=0;i<16;i++){
	inc	r3
	cjne	r3,#0x00,00103$
	inc	r4
	sjmp	00103$
00105$:
;	ttt.c:43: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ccSWO'
;------------------------------------------------------------
;rows                      Allocated with name '_ccSWO_rows_65536_61'
;i                         Allocated with name '_ccSWO_i_131072_62'
;------------------------------------------------------------
;	ttt.c:45: void ccSWO(void)
;	-----------------------------------------
;	 function ccSWO
;	-----------------------------------------
_ccSWO:
;	ttt.c:47: uint16_t *rows =squareWO;
;	ttt.c:48: lcd_cmd(0x02);
	mov	dpl,#0x02
	lcall	_lcd_cmd
;	ttt.c:49: lcd_cmd(0x40|0x20);
	mov	dpl,#0x60
	lcall	_lcd_cmd
;	ttt.c:50: for(int i=0;i<16;i++){
	mov	r5,#_squareWO
	mov	r6,#(_squareWO >> 8)
	mov	r7,#0x00
	mov	r3,#0x00
	mov	r4,#0x00
00103$:
	clr	c
	mov	a,r3
	subb	a,#0x10
	mov	a,r4
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00105$
;	ttt.c:51: lcd_data((*rows>>8)& 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	inc	dptr
	lcall	__gptrget
	mov	dpl,a
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:52: lcd_data((*rows++) & 0xFF);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	mov	a,#0x02
	add	a,r5
	mov	r5,a
	clr	a
	addc	a,r6
	mov	r6,a
	mov	dpl,r2
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar3
	lcall	_lcd_data
;	ttt.c:53: delay(1);
	mov	dptr,#0x0001
	lcall	_delay
	pop	ar3
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
;	ttt.c:50: for(int i=0;i<16;i++){
	inc	r3
	cjne	r3,#0x00,00103$
	inc	r4
	sjmp	00103$
00105$:
;	ttt.c:55: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'putX'
;------------------------------------------------------------
;	ttt.c:57: void putX(void)
;	-----------------------------------------
;	 function putX
;	-----------------------------------------
_putX:
;	ttt.c:59: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:60: lcd_data(0x02);
	mov	dpl,#0x02
;	ttt.c:62: }
	ljmp	_lcd_data
;------------------------------------------------------------
;Allocation info for local variables in function 'putO'
;------------------------------------------------------------
;	ttt.c:64: void putO(void)
;	-----------------------------------------
;	 function putO
;	-----------------------------------------
_putO:
;	ttt.c:66: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:67: lcd_data(0x04);
	mov	dpl,#0x04
;	ttt.c:69: }
	ljmp	_lcd_data
;------------------------------------------------------------
;Allocation info for local variables in function 'startGame'
;------------------------------------------------------------
;command                   Allocated with name '_startGame_command_65536_69'
;decision                  Allocated with name '_startGame_decision_262145_73'
;------------------------------------------------------------
;	ttt.c:71: void startGame(void){
;	-----------------------------------------
;	 function startGame
;	-----------------------------------------
_startGame:
;	ttt.c:76: lcdgotoaddr(0x96);
	mov	dpl,#0x96
	lcall	_lcdgotoaddr
;	ttt.c:77: putX();
	lcall	_putX
;	ttt.c:78: currentPlayer = 1;
	mov	dptr,#_currentPlayer
	mov	a,#0x01
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
;	ttt.c:79: currentIndex = 4;
	mov	dptr,#_currentIndex
	mov	a,#0x04
	movx	@dptr,a
;	ttt.c:80: currentPos = A[4];
	mov	dptr,#(_A + 0x0004)
	clr	a
	movc	a,@a+dptr
	mov	r7,a
	mov	dptr,#_currentPos
	movx	@dptr,a
;	ttt.c:81: lcdgotoaddr(currentPos);
	mov	dpl,r7
	lcall	_lcdgotoaddr
;	ttt.c:83: while(1){
00143$:
;	ttt.c:87: command = getchar();
	lcall	_getchar
	mov	r6,dpl
	mov	r7,dph
;	ttt.c:88: switch(command){
	cjne	r6,#0x0d,00231$
	sjmp	00101$
00231$:
	cjne	r6,#0x61,00232$
	sjmp	00111$
00232$:
	cjne	r6,#0x64,00233$
	ljmp	00140$
00233$:
	cjne	r6,#0x73,00234$
	ljmp	00124$
00234$:
;	ttt.c:89: case 0x0d:
	cjne	r6,#0x77,00143$
	sjmp	00107$
00101$:
;	ttt.c:91: changeState();
	lcall	_changeState
;	ttt.c:92: int decision = gameDecision();
	lcall	_gameDecision
	mov	r6,dpl
	mov	r7,dph
;	ttt.c:93: if(decision == 1 || decision == 2 || decision == 9)
	cjne	r6,#0x01,00236$
	cjne	r7,#0x00,00236$
	sjmp	00102$
00236$:
	cjne	r6,#0x02,00237$
	cjne	r7,#0x00,00237$
	sjmp	00102$
00237$:
	cjne	r6,#0x09,00143$
	cjne	r7,#0x00,00143$
00102$:
;	ttt.c:94: gameOver(decision);
	mov	dpl,r6
	mov	dph,r7
	lcall	_gameOver
;	ttt.c:99: case 'w':
00107$:
;	ttt.c:101: if((currentIndex<3)){
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x03,00240$
00240$:
	jc	00143$
;	ttt.c:104: currentIndex-=3;
	mov	a,r7
	add	a,#0xfd
	mov	dptr,#_currentIndex
	movx	@dptr,a
;	ttt.c:105: currentPos=A[currentIndex];
	movx	a,@dptr
	mov	dptr,#_A
	movc	a,@a+dptr
	mov	r7,a
	mov	dptr,#_currentPos
	movx	@dptr,a
;	ttt.c:106: lcdgotoaddr(currentPos);
	mov	dpl,r7
	lcall	_lcdgotoaddr
;	ttt.c:108: break;
;	ttt.c:111: case 'a':
	sjmp	00143$
00111$:
;	ttt.c:113: if(currentIndex>0 && currentIndex<=2)
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r7,a
	jz	00121$
	mov	a,r7
	add	a,#0xff - 0x02
	jc	00121$
;	ttt.c:114: currentIndex-=1;
	mov	a,r7
	dec	a
	mov	dptr,#_currentIndex
	movx	@dptr,a
	sjmp	00122$
00121$:
;	ttt.c:115: else if(currentIndex>3 && currentIndex<=5)
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov  r7,a
	add	a,#0xff - 0x03
	jnc	00117$
	mov	a,r7
	add	a,#0xff - 0x05
	jc	00117$
;	ttt.c:116: currentIndex-=1;
	mov	a,r7
	dec	a
	mov	dptr,#_currentIndex
	movx	@dptr,a
	sjmp	00122$
00117$:
;	ttt.c:117: else if(currentIndex>6 && currentIndex<=8)
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov  r7,a
	add	a,#0xff - 0x06
	jc	00246$
	ljmp	00143$
00246$:
	mov	a,r7
	add	a,#0xff - 0x08
	jnc	00247$
	ljmp	00143$
00247$:
;	ttt.c:118: currentIndex-=1;
	mov	a,r7
	dec	a
	mov	dptr,#_currentIndex
	movx	@dptr,a
;	ttt.c:120: break;
00122$:
;	ttt.c:121: currentPos=A[currentIndex];
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	dptr,#_A
	movc	a,@a+dptr
	mov	r7,a
	mov	dptr,#_currentPos
	movx	@dptr,a
;	ttt.c:122: lcdgotoaddr(currentPos);
	mov	dpl,r7
	lcall	_lcdgotoaddr
;	ttt.c:123: break;
	ljmp	00143$
;	ttt.c:126: case 's':
00124$:
;	ttt.c:128: if((currentIndex>5)){
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov  r7,a
	add	a,#0xff - 0x05
	jnc	00248$
	ljmp	00143$
00248$:
;	ttt.c:132: currentIndex +=3;
	mov	dptr,#_currentIndex
	mov	a,#0x03
	add	a,r7
	movx	@dptr,a
;	ttt.c:133: currentPos=A[currentIndex];
	movx	a,@dptr
	mov	dptr,#_A
	movc	a,@a+dptr
	mov	r7,a
	mov	dptr,#_currentPos
	movx	@dptr,a
;	ttt.c:134: lcdgotoaddr(currentPos);
	mov	dpl,r7
	lcall	_lcdgotoaddr
;	ttt.c:136: break;
	ljmp	00143$
;	ttt.c:141: if(currentIndex>=0 && currentIndex<2)
00140$:
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x02,00249$
00249$:
	jnc	00138$
;	ttt.c:142: currentIndex+=1;
	mov	ar6,r7
	mov	dptr,#_currentIndex
	mov	a,r6
	inc	a
	movx	@dptr,a
	sjmp	00139$
00138$:
;	ttt.c:143: else if(currentIndex>=3 && currentIndex<5)
	cjne	r7,#0x03,00251$
00251$:
	jc	00134$
	cjne	r7,#0x05,00253$
00253$:
	jnc	00134$
;	ttt.c:144: currentIndex+=1;
	mov	dptr,#_currentIndex
	mov	a,r7
	inc	a
	movx	@dptr,a
	sjmp	00139$
00134$:
;	ttt.c:145: else if(currentIndex>=6 && currentIndex<8)
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x06,00255$
00255$:
	jnc	00256$
	ljmp	00143$
00256$:
	cjne	r7,#0x08,00257$
00257$:
	jc	00258$
	ljmp	00143$
00258$:
;	ttt.c:146: currentIndex+=1;
	mov	dptr,#_currentIndex
	mov	a,r7
	inc	a
	movx	@dptr,a
;	ttt.c:148: break;
00139$:
;	ttt.c:149: currentPos=A[currentIndex];
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	dptr,#_A
	movc	a,@a+dptr
	mov	r7,a
	mov	dptr,#_currentPos
	movx	@dptr,a
;	ttt.c:150: lcdgotoaddr(currentPos);
	mov	dpl,r7
	lcall	_lcdgotoaddr
;	ttt.c:154: }//switch
;	ttt.c:235: }
	ljmp	00143$
;------------------------------------------------------------
;Allocation info for local variables in function 'Init_Game'
;------------------------------------------------------------
;	ttt.c:237: void Init_Game(void)
;	-----------------------------------------
;	 function Init_Game
;	-----------------------------------------
_Init_Game:
;	ttt.c:239: ccSquare();
	lcall	_ccSquare
;	ttt.c:240: ccSWO();
	lcall	_ccSWO
;	ttt.c:241: ccSWX();
	lcall	_ccSWX
;	ttt.c:243: lcdgotoaddr(0x81);
	mov	dpl,#0x81
	lcall	_lcdgotoaddr
;	ttt.c:244: lcdputstr(" TIC-TAC-TOE");
	mov	dptr,#___str_0
	mov	b,#0x80
	lcall	_lcdputstr
;	ttt.c:246: lcdgotoaddr(0x92);
	mov	dpl,#0x92
	lcall	_lcdgotoaddr
;	ttt.c:247: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:248: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:249: lcdgotoaddr(0x93);
	mov	dpl,#0x93
	lcall	_lcdgotoaddr
;	ttt.c:250: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:251: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:252: lcdgotoaddr(0x94);
	mov	dpl,#0x94
	lcall	_lcdgotoaddr
;	ttt.c:253: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:254: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:256: lcdgotoaddr(0x8A);
	mov	dpl,#0x8a
	lcall	_lcdgotoaddr
;	ttt.c:257: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:258: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:259: lcdgotoaddr(0x8B);
	mov	dpl,#0x8b
	lcall	_lcdgotoaddr
;	ttt.c:260: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:261: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:262: lcdgotoaddr(0x8C);
	mov	dpl,#0x8c
	lcall	_lcdgotoaddr
;	ttt.c:263: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:264: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:266: lcdgotoaddr(0x9A);
	mov	dpl,#0x9a
	lcall	_lcdgotoaddr
;	ttt.c:267: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:268: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:269: lcdgotoaddr(0x9B);
	mov	dpl,#0x9b
	lcall	_lcdgotoaddr
;	ttt.c:270: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:271: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:272: lcdgotoaddr(0x9C);
	mov	dpl,#0x9c
	lcall	_lcdgotoaddr
;	ttt.c:273: lcd_data(0x00);
	mov	dpl,#0x00
	lcall	_lcd_data
;	ttt.c:274: lcd_data(0x00);
	mov	dpl,#0x00
;	ttt.c:275: }
	ljmp	_lcd_data
;------------------------------------------------------------
;Allocation info for local variables in function 'changeState'
;------------------------------------------------------------
;	ttt.c:278: int changeState(void)
;	-----------------------------------------
;	 function changeState
;	-----------------------------------------
_changeState:
;	ttt.c:282: if( M[currentIndex] != 0)
	mov	dptr,#_currentIndex
	movx	a,@dptr
	add	a,#_M
	mov	r7,a
	clr	a
	addc	a,#(_M >> 8)
	mov	r6,a
	mov	dpl,r7
	mov	dph,r6
	movx	a,@dptr
	jz	00102$
;	ttt.c:283: return -1;
	mov	dptr,#0xffff
	ret
00102$:
;	ttt.c:286: if(currentPlayer == 1){
	mov	dptr,#_currentPlayer
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	cjne	r6,#0x01,00106$
	cjne	r7,#0x00,00106$
;	ttt.c:287: putX();
	lcall	_putX
;	ttt.c:288: M[currentIndex] = 1;
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r5,a
	add	a,#_M
	mov	dpl,a
	clr	a
	addc	a,#(_M >> 8)
	mov	dph,a
	mov	a,#0x01
	movx	@dptr,a
;	ttt.c:289: currentPlayer = 2;
	mov	dptr,#_currentPlayer
	inc	a
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
	sjmp	00107$
00106$:
;	ttt.c:291: else if (currentPlayer == 2){
	cjne	r6,#0x02,00107$
	cjne	r7,#0x00,00107$
;	ttt.c:292: putO();
	lcall	_putO
;	ttt.c:293: M[currentIndex] = 2;
	mov	dptr,#_currentIndex
	movx	a,@dptr
	mov	r7,a
	add	a,#_M
	mov	dpl,a
	clr	a
	addc	a,#(_M >> 8)
	mov	dph,a
	mov	a,#0x02
	movx	@dptr,a
;	ttt.c:294: currentPlayer =1;
	mov	dptr,#_currentPlayer
	dec	a
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
00107$:
;	ttt.c:297: lcdgotoaddr(0x96);
	mov	dpl,#0x96
	lcall	_lcdgotoaddr
;	ttt.c:298: if(currentPlayer == 1){
	mov	dptr,#_currentPlayer
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	cjne	r6,#0x01,00109$
	cjne	r7,#0x00,00109$
;	ttt.c:299: putX();
	lcall	_putX
	sjmp	00110$
00109$:
;	ttt.c:302: putO();
	lcall	_putO
00110$:
;	ttt.c:305: lcdgotoaddr(currentPos);
	mov	dptr,#_currentPos
	movx	a,@dptr
	mov	dpl,a
	lcall	_lcdgotoaddr
;	ttt.c:307: return 1;
	mov	dptr,#0x0001
;	ttt.c:308: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'gameDecision'
;------------------------------------------------------------
;decision                  Allocated with name '_gameDecision_decision_65536_91'
;XCount                    Allocated with name '_gameDecision_XCount_65536_91'
;OCount                    Allocated with name '_gameDecision_OCount_65536_91'
;j                         Allocated with name '_gameDecision_j_131072_92'
;i                         Allocated with name '_gameDecision_i_262144_94'
;j                         Allocated with name '_gameDecision_j_131072_97'
;i                         Allocated with name '_gameDecision_i_262144_99'
;i                         Allocated with name '_gameDecision_i_131072_102'
;sloc0                     Allocated with name '_gameDecision_sloc0_1_0'
;sloc1                     Allocated with name '_gameDecision_sloc1_1_0'
;sloc2                     Allocated with name '_gameDecision_sloc2_1_0'
;------------------------------------------------------------
;	ttt.c:310: int gameDecision(void)
;	-----------------------------------------
;	 function gameDecision
;	-----------------------------------------
_gameDecision:
;	ttt.c:317: for(int j=0; j<3; j++){
	mov	r6,#0x00
	mov	r7,#0x00
00151$:
	clr	c
	mov	a,r6
	subb	a,#0x03
	mov	a,r7
	xrl	a,#0x80
	subb	a,#0x80
	jc	00279$
	ljmp	00179$
00279$:
;	ttt.c:319: for(int i=0; i<3 ; i++){
	mov	ar4,r6
	mov	ar5,r7
	clr	a
	mov	r2,a
	mov	r3,a
	mov	r0,a
	mov	r1,a
	mov	_gameDecision_sloc0_1_0,a
	mov	(_gameDecision_sloc0_1_0 + 1),a
00148$:
	clr	c
	mov	a,_gameDecision_sloc0_1_0
	subb	a,#0x03
	mov	a,(_gameDecision_sloc0_1_0 + 1)
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00106$
;	ttt.c:320: if( (M[j+(i*3)] == 1))
	push	ar2
	push	ar3
	mov	_gameDecision_sloc1_1_0,r4
	mov	a,_gameDecision_sloc0_1_0
	mov	b,#0x03
	mul	ab
	mov	_gameDecision_sloc2_1_0,a
	add	a,_gameDecision_sloc1_1_0
	mov	r3,a
	rlc	a
	subb	a,acc
	mov	r2,a
	mov	a,r3
	add	a,#_M
	mov	dpl,a
	mov	a,r2
	addc	a,#(_M >> 8)
	mov	dph,a
	movx	a,@dptr
	mov	r3,a
	cjne	r3,#0x01,00281$
	sjmp	00282$
00281$:
	pop	ar3
	pop	ar2
	sjmp	00104$
00282$:
	pop	ar3
	pop	ar2
;	ttt.c:321: XCount++;
	inc	r0
	cjne	r0,#0x00,00149$
	inc	r1
	sjmp	00149$
00104$:
;	ttt.c:322: else if ( (M[j+(i*3)] == 2))
	push	ar4
	push	ar5
	mov	a,_gameDecision_sloc2_1_0
	add	a,_gameDecision_sloc1_1_0
	mov	r5,a
	rlc	a
	subb	a,acc
	mov	r4,a
	mov	a,r5
	add	a,#_M
	mov	dpl,a
	mov	a,r4
	addc	a,#(_M >> 8)
	mov	dph,a
	movx	a,@dptr
	mov	r5,a
	cjne	r5,#0x02,00284$
	sjmp	00285$
00284$:
	pop	ar5
	pop	ar4
	sjmp	00149$
00285$:
	pop	ar5
	pop	ar4
;	ttt.c:323: OCount++;
	inc	r2
	cjne	r2,#0x00,00286$
	inc	r3
00286$:
00149$:
;	ttt.c:319: for(int i=0; i<3 ; i++){
	inc	_gameDecision_sloc0_1_0
	clr	a
	cjne	a,_gameDecision_sloc0_1_0,00148$
	inc	(_gameDecision_sloc0_1_0 + 1)
	sjmp	00148$
00106$:
;	ttt.c:325: if(XCount == 3 || OCount == 3){
	clr	a
	cjne	r0,#0x03,00288$
	cjne	r1,#0x00,00288$
	inc	a
00288$:
	mov	r5,a
	jnz	00110$
	cjne	r2,#0x03,00152$
	cjne	r3,#0x00,00152$
00110$:
;	ttt.c:326: if(XCount ==3 )
	mov	a,r5
	jz	00108$
;	ttt.c:327: decision = 1;
	mov	dptr,#_gameDecision_decision_65536_91
	mov	a,#0x01
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
	sjmp	00109$
00108$:
;	ttt.c:329: decision = 2;
	mov	dptr,#_gameDecision_decision_65536_91
	mov	a,#0x02
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
00109$:
;	ttt.c:330: return decision;
	mov	dptr,#_gameDecision_decision_65536_91
	movx	a,@dptr
	mov	r4,a
	inc	dptr
	movx	a,@dptr
	mov	r5,a
	mov	dpl,r4
	mov	dph,r5
	ret
00152$:
;	ttt.c:317: for(int j=0; j<3; j++){
	inc	r6
	cjne	r6,#0x00,00294$
	inc	r7
00294$:
	ljmp	00151$
;	ttt.c:336: for(int j=0; j<3; j++){
00179$:
	mov	r6,#0x00
	mov	r7,#0x00
00157$:
	clr	c
	mov	a,r6
	subb	a,#0x03
	mov	a,r7
	xrl	a,#0x80
	subb	a,#0x80
	jc	00295$
	ljmp	00126$
00295$:
;	ttt.c:338: for(int i=0; i<3 ; i++){
	mov	ar4,r6
	mov	ar5,r7
	clr	a
	mov	r2,a
	mov	r3,a
	mov	r0,a
	mov	r1,a
	mov	_gameDecision_sloc0_1_0,a
	mov	(_gameDecision_sloc0_1_0 + 1),a
00154$:
	clr	c
	mov	a,_gameDecision_sloc0_1_0
	subb	a,#0x03
	mov	a,(_gameDecision_sloc0_1_0 + 1)
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00119$
;	ttt.c:339: if( (M[(j*3)+i] == 1))
	push	ar2
	push	ar3
	mov	ar3,r4
	mov	a,r3
	mov	b,#0x03
	mul	ab
	mov	_gameDecision_sloc2_1_0,a
	mov	a,_gameDecision_sloc0_1_0
	mov	_gameDecision_sloc1_1_0,a
	add	a,_gameDecision_sloc2_1_0
	mov	r3,a
	rlc	a
	subb	a,acc
	mov	r2,a
	mov	a,r3
	add	a,#_M
	mov	dpl,a
	mov	a,r2
	addc	a,#(_M >> 8)
	mov	dph,a
	movx	a,@dptr
	mov	r3,a
	cjne	r3,#0x01,00297$
	sjmp	00298$
00297$:
	pop	ar3
	pop	ar2
	sjmp	00117$
00298$:
	pop	ar3
	pop	ar2
;	ttt.c:340: XCount++;
	inc	r0
	cjne	r0,#0x00,00155$
	inc	r1
	sjmp	00155$
00117$:
;	ttt.c:341: else if ( (M[(j*3)+i] == 2))
	push	ar4
	push	ar5
	mov	a,_gameDecision_sloc1_1_0
	add	a,_gameDecision_sloc2_1_0
	mov	r5,a
	rlc	a
	subb	a,acc
	mov	r4,a
	mov	a,r5
	add	a,#_M
	mov	dpl,a
	mov	a,r4
	addc	a,#(_M >> 8)
	mov	dph,a
	movx	a,@dptr
	mov	r5,a
	cjne	r5,#0x02,00300$
	sjmp	00301$
00300$:
	pop	ar5
	pop	ar4
	sjmp	00155$
00301$:
	pop	ar5
	pop	ar4
;	ttt.c:342: OCount++;
	inc	r2
	cjne	r2,#0x00,00302$
	inc	r3
00302$:
00155$:
;	ttt.c:338: for(int i=0; i<3 ; i++){
	inc	_gameDecision_sloc0_1_0
	clr	a
	cjne	a,_gameDecision_sloc0_1_0,00154$
	inc	(_gameDecision_sloc0_1_0 + 1)
	sjmp	00154$
00119$:
;	ttt.c:344: if(XCount == 3 || OCount == 3){
	clr	a
	cjne	r0,#0x03,00304$
	cjne	r1,#0x00,00304$
	inc	a
00304$:
	mov	r5,a
	jnz	00123$
	cjne	r2,#0x03,00158$
	cjne	r3,#0x00,00158$
00123$:
;	ttt.c:345: if(XCount ==3 )
	mov	a,r5
	jz	00121$
;	ttt.c:346: decision = 1;
	mov	dptr,#_gameDecision_decision_65536_91
	mov	a,#0x01
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
	sjmp	00122$
00121$:
;	ttt.c:348: decision = 2;
	mov	dptr,#_gameDecision_decision_65536_91
	mov	a,#0x02
	movx	@dptr,a
	clr	a
	inc	dptr
	movx	@dptr,a
00122$:
;	ttt.c:349: return decision;
	mov	dptr,#_gameDecision_decision_65536_91
	movx	a,@dptr
	mov	r4,a
	inc	dptr
	movx	a,@dptr
	mov	r5,a
	mov	dpl,r4
	mov	dph,r5
	ret
00158$:
;	ttt.c:336: for(int j=0; j<3; j++){
	inc	r6
	cjne	r6,#0x00,00310$
	inc	r7
00310$:
	ljmp	00157$
00126$:
;	ttt.c:354: if( (M[0]== 1 && M[4]==1 && M[8]==1) || (M[2]==1 && M[4]==1 && M[6]==1) )
	mov	dptr,#_M
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x01,00133$
	mov	dptr,#(_M + 0x0004)
	movx	a,@dptr
	mov	r6,a
	cjne	r6,#0x01,00133$
	mov	dptr,#(_M + 0x0008)
	movx	a,@dptr
	mov	r6,a
	cjne	r6,#0x01,00315$
	sjmp	00127$
00315$:
00133$:
	mov	dptr,#(_M + 0x0002)
	movx	a,@dptr
	mov	r6,a
	cjne	r6,#0x01,00128$
	mov	dptr,#(_M + 0x0004)
	movx	a,@dptr
	mov	r5,a
	cjne	r5,#0x01,00128$
	mov	dptr,#(_M + 0x0006)
	movx	a,@dptr
	mov	r5,a
	cjne	r5,#0x01,00128$
00127$:
;	ttt.c:355: return 1;
	mov	dptr,#0x0001
	ret
00128$:
;	ttt.c:357: if( (M[0]==2 && M[4]==2 && M[8]==2) || (M[2]==2 && M[4]==2 && M[6]==2) )
	cjne	r7,#0x02,00140$
	mov	dptr,#(_M + 0x0004)
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x02,00140$
	mov	dptr,#(_M + 0x0008)
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x02,00326$
	sjmp	00134$
00326$:
00140$:
	cjne	r6,#0x02,00190$
	mov	dptr,#(_M + 0x0004)
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x02,00190$
	mov	dptr,#(_M + 0x0006)
	movx	a,@dptr
	mov	r7,a
	cjne	r7,#0x02,00190$
00134$:
;	ttt.c:358: return 2;
	mov	dptr,#0x0002
;	ttt.c:360: for(int i=0; i<9; i++){
	ret
00190$:
	mov	r6,#0x00
	mov	r7,#0x00
	mov	r4,#0x00
	mov	r5,#0x00
00160$:
	clr	c
	mov	a,r4
	subb	a,#0x09
	mov	a,r5
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00143$
;	ttt.c:361: if(M[i]!=0)
	mov	a,r4
	add	a,#_M
	mov	r2,a
	mov	a,r5
	addc	a,#(_M >> 8)
	mov	r3,a
	mov	dpl,r2
	mov	dph,r3
	movx	a,@dptr
	jz	00161$
;	ttt.c:362: decision++;
	inc	r6
	cjne	r6,#0x00,00335$
	inc	r7
00335$:
00161$:
;	ttt.c:360: for(int i=0; i<9; i++){
	inc	r4
	cjne	r4,#0x00,00160$
	inc	r5
	sjmp	00160$
00143$:
;	ttt.c:365: if(decision == 9)
	cjne	r6,#0x09,00145$
	cjne	r7,#0x00,00145$
;	ttt.c:366: return decision;
	mov	dpl,r6
	mov	dph,r7
	ret
00145$:
;	ttt.c:368: return 0;
	mov	dptr,#0x0000
;	ttt.c:370: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'restartGame'
;------------------------------------------------------------
;i                         Allocated with name '_restartGame_i_131072_106'
;------------------------------------------------------------
;	ttt.c:372: void restartGame(void)
;	-----------------------------------------
;	 function restartGame
;	-----------------------------------------
_restartGame:
;	ttt.c:374: lcd_cmd(0x01);
	mov	dpl,#0x01
	lcall	_lcd_cmd
;	ttt.c:375: for(int i=0; i<9; i++)
	mov	r6,#0x00
	mov	r7,#0x00
00103$:
	clr	c
	mov	a,r6
	subb	a,#0x09
	mov	a,r7
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00101$
;	ttt.c:376: M[i]=0;
	mov	a,r6
	add	a,#_M
	mov	dpl,a
	mov	a,r7
	addc	a,#(_M >> 8)
	mov	dph,a
	clr	a
	movx	@dptr,a
;	ttt.c:375: for(int i=0; i<9; i++)
	inc	r6
	cjne	r6,#0x00,00103$
	inc	r7
	sjmp	00103$
00101$:
;	ttt.c:377: Init_Game();
	lcall	_Init_Game
;	ttt.c:378: startGame();
;	ttt.c:380: }
	ljmp	_startGame
;------------------------------------------------------------
;Allocation info for local variables in function 'gameOver'
;------------------------------------------------------------
;player                    Allocated with name '_gameOver_player_65536_107'
;------------------------------------------------------------
;	ttt.c:382: void gameOver(int player)
;	-----------------------------------------
;	 function gameOver
;	-----------------------------------------
_gameOver:
	mov	r7,dph
	mov	a,dpl
	mov	dptr,#_gameOver_player_65536_107
	movx	@dptr,a
	mov	a,r7
	inc	dptr
	movx	@dptr,a
;	ttt.c:384: lcd_cmd(0x01);
	mov	dpl,#0x01
	lcall	_lcd_cmd
;	ttt.c:385: if(player == 9){
	mov	dptr,#_gameOver_player_65536_107
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	cjne	r6,#0x09,00105$
	cjne	r7,#0x00,00105$
;	ttt.c:386: lcdgotoaddr(0x90);
	mov	dpl,#0x90
	lcall	_lcdgotoaddr
;	ttt.c:387: lcdputstr(" IT'S A DRAW!! ");
	mov	dptr,#___str_1
	mov	b,#0x80
	lcall	_lcdputstr
	sjmp	00107$
00105$:
;	ttt.c:389: lcdgotoaddr(0x92);
	mov	dpl,#0x92
	push	ar7
	push	ar6
	lcall	_lcdgotoaddr
;	ttt.c:390: lcdputstr("WINNER!!");
	mov	dptr,#___str_2
	mov	b,#0x80
	lcall	_lcdputstr
;	ttt.c:391: lcdgotoaddr(0x8A);
	mov	dpl,#0x8a
	lcall	_lcdgotoaddr
	pop	ar6
	pop	ar7
;	ttt.c:392: if(player ==1)
	cjne	r6,#0x01,00102$
	cjne	r7,#0x00,00102$
;	ttt.c:393: lcdputstr("PLAYER 1");
	mov	dptr,#___str_3
	mov	b,#0x80
	lcall	_lcdputstr
	sjmp	00107$
00102$:
;	ttt.c:395: lcdputstr("PLAYER 2");
	mov	dptr,#___str_4
	mov	b,#0x80
	lcall	_lcdputstr
;	ttt.c:398: while(getchar()!= 0x0d);
00107$:
	lcall	_getchar
	mov	r6,dpl
	mov	r7,dph
	cjne	r6,#0x0d,00107$
	cjne	r7,#0x00,00107$
;	ttt.c:399: restartGame();
;	ttt.c:400: }
	ljmp	_restartGame
	.area CSEG    (CODE)
	.area CONST   (CODE)
_A:
	.db #0x92	; 146
	.db #0x93	; 147
	.db #0x94	; 148
	.db #0x8a	; 138
	.db #0x8b	; 139
	.db #0x8c	; 140
	.db #0x9a	; 154
	.db #0x9b	; 155
	.db #0x9c	; 156
	.area CONST   (CODE)
___str_0:
	.ascii " TIC-TAC-TOE"
	.db 0x00
	.area CSEG    (CODE)
	.area CONST   (CODE)
___str_1:
	.ascii " IT'S A DRAW!! "
	.db 0x00
	.area CSEG    (CODE)
	.area CONST   (CODE)
___str_2:
	.ascii "WINNER!!"
	.db 0x00
	.area CSEG    (CODE)
	.area CONST   (CODE)
___str_3:
	.ascii "PLAYER 1"
	.db 0x00
	.area CSEG    (CODE)
	.area CONST   (CODE)
___str_4:
	.ascii "PLAYER 2"
	.db 0x00
	.area CSEG    (CODE)
	.area XINIT   (CODE)
__xinit__square:
	.byte #0xff, #0xff	; 65535
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0x01, #0x80	; 32769
	.byte #0xff, #0xff	; 65535
__xinit__squareWX:
	.byte #0xff, #0xff	; 65535
	.byte #0x01, #0x80	; 32769
	.byte #0x05, #0xa0	; 40965
	.byte #0x09, #0x90	; 36873
	.byte #0x11, #0x88	; 34833
	.byte #0x21, #0x84	; 33825
	.byte #0x41, #0x82	; 33345
	.byte #0x81, #0x81	; 33153
	.byte #0x81, #0x81	; 33153
	.byte #0x41, #0x82	; 33345
	.byte #0x21, #0x84	; 33825
	.byte #0x11, #0x88	; 34833
	.byte #0x09, #0x90	; 36873
	.byte #0x05, #0xa0	; 40965
	.byte #0x01, #0x80	; 32769
	.byte #0xff, #0xff	; 65535
__xinit__squareWO:
	.byte #0xff, #0xff	; 65535
	.byte #0x01, #0x80	; 32769
	.byte #0xe1, #0x87	; 34785
	.byte #0x11, #0x88	; 34833
	.byte #0x09, #0x90	; 36873
	.byte #0x05, #0xa0	; 40965
	.byte #0x05, #0xa0	; 40965
	.byte #0x05, #0xa0	; 40965
	.byte #0x05, #0xa0	; 40965
	.byte #0x05, #0xa0	; 40965
	.byte #0x05, #0xa0	; 40965
	.byte #0x09, #0x90	; 36873
	.byte #0x11, #0x88	; 34833
	.byte #0xe1, #0x87	; 34785
	.byte #0x01, #0x80	; 32769
	.byte #0xff, #0xff	; 65535
	.area CABS    (ABS,CODE)
