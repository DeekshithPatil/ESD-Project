

#ifndef __lcd_h__
#define __lcd_h__
#include <mcs51/8051.h>

#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void delay(int time);

void lcd_cmd(char Command);

void lcd_data(char Data);

void lcd_Init();

void lcdputstr(uint8_t *str);

void lcdgotoaddr(uint8_t add);


#endif
