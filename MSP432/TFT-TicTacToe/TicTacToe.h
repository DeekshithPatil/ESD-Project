/*
 * TicTacToe.h
 *
 * Brief - Consists of functions that are necessary to implement the features of the game
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#ifndef TICTACTOE_H_
#define TICTACTOE_H_

/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
/* GrLib Includes */
#include "grlib.h"
#include "button.h"
#include "imageButton.h"
#include "radioButton.h"
#include "checkbox.h"
#include "LcdDriver/kitronix320x240x16_ssd2119_spi.h"
#include "images/images.h"
#include "touch_P401R.h"
#include "Display.h"
#include "Init.h"
#include "Delay.h"

#define PLAYER_1                         1
#define PLAYER_2                         2
#define NO_WINNER                        0

/*
 * Brief - Used to start the game. Returns the winner of the game (player number)
 */
int startGame();



#endif /* TICTACTOE_H_ */
