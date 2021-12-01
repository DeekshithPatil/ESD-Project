

#include "lcd.h"

#define RS P1_0
#define RW P1_1
#define E P1_2
#define RST P3_4
#define Data_Port P0



void delay(int time)
{
    while(time--)
    __asm nop __endasm;

}



void lcdgotoaddr(uint8_t add)
{
    lcd_cmd(add | 0x80);
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
    lcd_cmd(0x06); //
    delay(10);


}

void lcdputstr(uint8_t *str)
{
    while(*str)
        lcd_data(*str++);

}



