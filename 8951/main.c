#include <mcs51/8051.h>

#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "lcd.h"
#include "uart.h"
#include "ttt.h"


void main()
{

    lcd_Init();
    Init_Game();
    startGame();


    while(1);

}
