/*
 * main.c
 * Brief - Application entry point
 * Reference - TI Examples
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */
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
#include "TicTacToe.h"

void main(void)
{
    int winner;

    System_Init();
    drawMainMenu();

    // Loop to detect touch
    while(1)
    {
        touch_updateCurrentTouch(&g_sTouchContext);

        if(g_sTouchContext.touch)
        {
            if(Graphics_isImageButtonSelected(&playButton,
                                              g_sTouchContext.x,
                                              g_sTouchContext.y))
            {
                Graphics_drawSelectedImageButton(&g_sContext,&playButton);
                drawOutline();

                winner = startGame();
                Delay(1000);
                drawRestartDemo(winner);
                drawMainMenu();
            }

        }
    }
}



