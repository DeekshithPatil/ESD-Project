#ifndef __timer_h__
#define __timer_h__

#include <mcs51/8051.h>

#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "lcd.h"

void Init_Game(void);

void startGame(void);

int changeState(void);

int gameDecision(void);

void gameOver(int player);
#endif
