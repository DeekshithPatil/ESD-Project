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

int startGame();
unsigned int getBoxNumber(uint16_t x, uint16_t y);

bool isGameOver(int arr[][]);

void getRowAndColumn(int boxNumber, int *rowNumber,int *columnNumber);
int getInsertVal(int index);
int getInsertVal(int index);

int getWinner(int index);

void main(void)
{
//	int16_t ulIdx;
    WDT_A_hold(WDT_A_BASE);

    /* Initialize the demo. */
    boardInit();
    clockInit();
    initializeButtons();

    /* Globally enable interrupts. */
    __enable_interrupt();

    // LCD setup using Graphics Library API calls
    Kitronix320x240x16_SSD2119Init();
    Graphics_initContext(&g_sContext, &g_sKitronix320x240x16_SSD2119);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_setFont(&g_sContext, &g_sFontCmss20b);
    Graphics_clearDisplay(&g_sContext);

    touch_initInterface();

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
            }


            if(g_ranDemo == true)
            {
                g_ranDemo = false;
                drawMainMenu();
            }

        }
    }
}

void drawMainMenu(void)
{
    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_clearDisplay(&g_sContext);
    Graphics_drawStringCentered(&g_sContext, "Tic Tac Toe Gaming Console",
                                AUTO_STRING_LENGTH,
                                159,
                                15,
                                TRANSPARENT_TEXT);

    // Draw Primitives image button
    Graphics_drawImageButton(&g_sContext, &playButton);

    Graphics_drawStringCentered(&g_sContext, "Start",
                                10, //AUTO_STRING_LENGTH
                                160,
                                115,
                                TRANSPARENT_TEXT);
}

void drawOutline(void)
{
    int winner;

    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_clearDisplay(&g_sContext);

    //Vertical Lines
    Graphics_drawLine(&g_sContext, 120, 20, 120, 220);
    Graphics_drawLine(&g_sContext, 200, 20, 200, 220);

    //Horizontal Lines
    Graphics_drawLine(&g_sContext, 40, 87, 280, 87);
    Graphics_drawLine(&g_sContext, 40, 153, 280, 153);

    Delay(2000);

    winner = startGame();

    drawRestartDemo(winner);
}

int startGame()
{
    int8_t character[] = {'X','O'};

    char index = 0;

    unsigned int boxNumber = 0;

    bool isBoxSelected[10] = {false};

    int arr[3][3] = {0};

    int rowNumber, columnNumber;

    int insertVal = 0;

    bool GameOver = false;

    while(1)
    {
        touch_updateCurrentTouch(&g_sTouchContext);

        if(g_sTouchContext.touch)
        {

            boxNumber = getBoxNumber(g_sTouchContext.x, g_sTouchContext.y);

            if(boxNumber == 1 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 2 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;
            }

            else if(boxNumber == 3 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 240, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 4 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 5 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 6 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 240, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 7 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 187, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;
                arr[2][0] = index;
            }

            else if(boxNumber == 8 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 187, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == 9 && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 240, 187, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;
            }
            else
            {
                continue;
            }

            getRowAndColumn(boxNumber, &rowNumber,&columnNumber);
            insertVal = getInsertVal(index);

            arr[rowNumber][columnNumber] = insertVal;

            GameOver = isGameOver(arr);

            if(GameOver)
                return getWinner(index);
        }
    }
}

int getWinner(index)
{
    if(index == 0)
        return 2;
    else
        return 1;
}

int getInsertVal(int index)
{

    if(index == 0)
        return -1;

    return 1;
}

void getRowAndColumn(int boxNumber, int *rowNumber,int *columnNumber)
{
    int row, column;
    int temp;

    if(boxNumber >=1 && boxNumber <= 3)
        row = 0;
    else if(boxNumber >=4 && boxNumber <=6)
        row = 1;
    else
        row = 2;

    temp = boxNumber % 3;

    if(temp == 0)
        column = 2;
    else
        column = temp - 1;

    *rowNumber = row;
    *columnNumber = column;

}

bool isGameOver(int arr[3][3])
{
    bool GameOver = false;
    int i,j;

    int sum = 0;

    //Check horizontal
    for(i = 0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            sum += arr[i][j];
        }

        if(sum == 3 || sum == -3)
        {
            return true;
        }
        sum = 0;
    }

    //Check vertical
    sum = 0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += arr[j][i];
        }
        if(sum == 3 || sum == -3)
        {
            return true;
        }
        sum = 0;
    }

    //Check top-left corner to bottom-right corner
    sum = arr[0][0] + arr[1][1] + arr[2][2];
    if(sum == 3 || sum == -3)
    {
        return true;
    }

    //Check top-right corner to bottom-left corner
    sum = arr[0][2] + arr[1][1] + arr[2][0];
    if(sum == 3 || sum == -3)
    {
        return true;
    }

    return GameOver;
}

unsigned int getBoxNumber(uint16_t x, uint16_t y)
{
    if((x >= 40 && x <= 120) && (y >= 20 && y <= 87))
    {
        return 1;
    }

    if((x > 120 && x<= 200) && (y >= 20 && y <= 87))
    {
        return 2;
    }

    if((x > 200 && x<= 280) && (y >= 20 && y <= 87))
    {
        return 3;
    }

    if((x >= 40 && x <= 120) && (y > 87 && y <= 153))
    {
        return 4;
    }

    if((x > 120 && x<= 200) && (y > 87 && y <= 153))
    {
        return 5;
    }

    if((x > 200 && x<= 280) && (y > 87 && y <= 153))
    {
        return 6;
    }

    if((x >= 40 && x <= 120) && (y > 153 && y <= 220))
    {
        return 7;
    }

    if((x > 120 && x<= 200) && (y > 153 && y <= 220))
    {
        return 8;
    }

    if((x > 200 && x<= 280) && (y > 153 && y <= 220))
    {
        return 9;
    }

    return 0;
}







void Delay(uint16_t msec){
    uint32_t i = 0;
    uint32_t time = (msec / 1000) * (SYSTEM_CLOCK_SPEED / 15);

    for(i = 0; i < time; i++)
    {
        ;
    }
}
