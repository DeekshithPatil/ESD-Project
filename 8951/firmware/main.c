/*
 * @file: main.c
 * @description: main function calls the required api's to implement the tic-tac-toe game
 *
 * Created on : Dec 1, 2021
 * Authors    : Santhosh
 * Email      : santhosh@colorado.edu
 *
 */

//Headers
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

    lcd_Init();   //LCD initialization
    Init_Game();  //To get the game arena on LCD
    startGame();  //TO start the game

    while(1);
}

