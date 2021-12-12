/*
 * @file: ttt.h.
 * @description: includes the api's required for the tic-tac-toc gaming control
 *
 * Created on: Dec 1, 2021
 * Authors    : Santhosh
 * Email      : santhosh@colorado.edu
 *
 */

#ifndef __ttt_h__
#define __ttt_h__

//Headers
#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "lcd.h"


/* @function    : Init_Game()
 * @description : This function initiates the tic-toc-toe game
 *
 * Parameter
 *	None
 *
 * Returns
 *  None
 */
void Init_Game(void);

/* @function    : startGame()
 * @description : This function starts the tic-toc-toe game by initiating the control to cursor movement
 *
 * Parameter
 *	None
 *
 * Returns
 *  None
 */
void startGame(void);

/* @function    : changeState()
 * @description : This function changes the state of the game when an input is received
 *
 * Parameter
 *	None
 *
 * Returns
 *  None
 */
int changeState(void);

/* @function    : gameDecision()
 * @description : This function check for the decision of the game (i.e., one of the player won or match draw )
 *
 * Parameter
 *  None
 *
 * Returns
 *  None
 */
int gameDecision(void);

/* @function    : gameOver()
 * @description : This function terminates the game and prints the decision on the screen
 *
 * Parameter
 *	player <- the decision of the game
 *
 * Returns
 *  None
 */
void gameOver(int player);

/* @function    : ex0_isr()
 * @description : This function is the interrupt service routine for external interrupt 0
 *
 * Parameter
 *	None
 *
 * Returns
 *  None
 */
void ex0_isr(void) __interrupt(1);


#endif
