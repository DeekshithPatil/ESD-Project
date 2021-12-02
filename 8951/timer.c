
/*
 * @file: timer.c
 * @description: includes the function prototype of functions in timer.h
 *
 *
 * Created on: Nov 1,2021
 * Author    : Santhosh
 * Email     : santhosh@colorado.edu
 *
 */
#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "timer.h"
#include "lcd.h"

int isr_count = 0;
uint8_t MS,SH,SL,MH,ML; //variable for time display

/* @function    : Init_timer()
 * @description : This function initializes the timer
 *
 * Parameter
 *     None
 * Returns
 * 	   None
 */
void Init_timer(void)
{
    uint8_t  MS=0;
    uint8_t MH=0;
    uint8_t ML=0;
    uint8_t SH=0;
    uint8_t SL=0;
    isr_count=0;

    TMOD |= 0x01;
    IE |= 0x82;
    TH0 = 0x4B;
    TL0 = 0xFD;
    TF0 = 0;
    TR0 = 1;

}



/* @function    : put_timer()
 * @description : This function updates the timer in the lcd
 *
 * Parameter
 *	None
 * Returns
 * 	None
 */
void put_timer(void)
{

    //updating the clock
    if(isr_count == 2){
        MS++;
    }if(MS==10){
        MS=0;
        SL++;
    }if(SL==10){
        SL=0;
        SH++;
    }if(SH==6){
        SH=0;
        ML++;
    }if(ML==10){
        ML=0;
        MH++;
    }if(MH==6){
        MH=0;
    }

    //Store current cursor position
    lcd_cmd(0x90);
    lcd_data(MH|0x30);
    lcd_data(ML|0x30);
    //lcd_cmd(0x5);
    lcd_data(':');
    lcd_data(SH|0x30);
    //lcd_cmd(0x86);
    lcd_data(SL|0x30);
    lcd_data('.');
    //lcd_cmd(0x87);
    lcd_data(MS | 0x30);

    //Restore previous cursor posotion
    //lcd_cmd(0x80);
}
/* @function    : reset_timer()
 * @description : This function resets the timer
 *
 * Parameter
 *	None
 * Returns
 * 	None
 */
void reset_timer()
{
     MS=0;
     MH=0;
     ML=0;
     SH=0;
     SL=0;
     isr_count=0;
     put_timer();

}

/* @function    : timer0_ISR()
 * @description : This ISR updates the time on lcd every alternate execution
 *
 * Parameter
 *	None
 * Returns
 * 	None
 */
void timer0_ISR(void)__interrupt(1)
{

        TH0 = 0x4B;
        TL0 = 0xFB;
        TF0=0;
        TR0=1;
        isr_count++;
        if(isr_count=2){
            P1_0 ^=1;
            put_timer();
            isr_count=0;
        }

}

