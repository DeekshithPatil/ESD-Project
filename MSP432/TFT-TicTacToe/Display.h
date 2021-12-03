/*
 * Display.h
 *
 * Brief - Consists of function that are necessary to initialise and display the GUI necessary for the Tic-Tac-Toe game
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

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

//Touch screen context
extern touch_context g_sTouchContext;
//Graphics_ImageButton primitiveButton;
extern Graphics_ImageButton playButton;
extern Graphics_ImageButton imageButton;
extern Graphics_Button yesButton;
extern Graphics_Button noButton;

// Graphic library context
Graphics_Context g_sContext;

/*
 * Brief - Used to initialise the buttons
 */
void initializeButtons(void);

/*
 * Brief - Used to draw the main menu or the home screen
 */
void drawMainMenu(void);

/*
 * Brief - Draws an outline (#) of the game on the screen
 */
void drawOutline(void);

/*
 * Brief - Used to display the restart menu after a game has been completed.
 * @param "winner" - Player number that has won the game
 */
void drawRestartDemo(int winner);


#endif /* DISPLAY_H_ */
