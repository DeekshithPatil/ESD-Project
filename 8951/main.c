#include <mcs51/8051.h>

#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define RS P1_0			/* Set control bits pins */
#define RW P1_1
#define E P1_2
#define Data_Port P0

void delay(int time)
{
    while(time--)
    __asm nop __endasm;

}

void busyFlagCheck(void)
{

    while(!(Data_Port&0x80));
}

void lcd_cmd(char Command)	/* GLCD command function */
{
    E = 0;
    delay(1);
	Data_Port = Command;	/* Copy command on data pin */
	RS = 0;			/* Make RS LOW to select command register */
	RW = 0;			/* Make RW LOW to select write operation */
	delay(300);
	E = 1;
	delay(300);
	E=0;
	//busyFlagCheck();
}

void lcd_data(char Data)	/* GLCD data function */
{
    E = 0;
    delay(1);
	Data_Port =Data;	/* Copy command on data pin */
	RS = 1;			/* Make RS LOW to select command register */
	RW = 0;			/* Make RW LOW to select write operation */
	delay(300);
	E = 1;
	delay(300);
	E=0;
	//busyFlagCheck();
}




void lcd_Init()		/* GLCD initialize function */
{
    delay(100);
    lcd_cmd(0x30); //Function set
    delay(10);
    lcd_cmd(0x30); //
    delay(10);
    lcd_cmd(0x0F);
    delay(10);
    lcd_cmd(0x01); //
    delay(20);
    lcd_cmd(0x07); //
    delay(10);


}

void graphic_Init(void)
{
    lcd_cmd(0x3f);
    delay(10);
    lcd_cmd(0x0c);
    delay(10);
    lcd_cmd(0x3E);
    delay(10);



  /*
    lcd_cmd(0x36);
    delay(10);
        delay(10);
    lcd_cmd(0x0F);
    delay(10);
    lcd_cmd(0x01); //
    delay(20);
    lcd_cmd(0x07); //
    delay(10);

*/

}

void main()
{

    zslcd_Init();
/*
    lcd_cmd(0x80);
    lcd_data('-');
    lcd_data('-');

    lcd_cmd(0x90);
    lcd_data('-');

    lcd_cmd(0xA0);
    lcd_data('-');

    lcd_cmd(0x80);
    lcd_data('-');
*/

  //graphic_Init();
//lcd_cmd(0x0c);


    lcd_cmd(0x3f);
    lcd_cmd(0xb8);
    lcd_cmd(0x40);
    lcd_data(0xFF);    //M
    while(1);

}
