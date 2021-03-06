/*
 * Display.c
 *
 * Brief - Consists of function that are necessary to initialise and display the GUI necessary for the Tic-Tac-Toe game
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#include "Display.h"
#include "Delay.h"
#include "TicTacToe.h"

//Touch screen context
touch_context g_sTouchContext;
//Graphics_ImageButton primitiveButton;
Graphics_ImageButton playButton;
Graphics_ImageButton imageButton;
Graphics_Button yesButton;
Graphics_Button noButton;

// Graphic library context
Graphics_Context g_sContext;

//Refer "Display.h" for function description
void drawRestartDemo(int winner)
{
    char player1[] = "Player 1 has won the game!";
    char player2[] = "Player 2 has won the game!";
    char draw[] = "It's a draw!";

    int8_t * result = NULL;

    //Check who the winner was
    if(winner == PLAYER_1)
        result = (int8_t *)player1;
    else if(winner == PLAYER_2)
        result = (int8_t *)player2;
    else if(winner == NO_WINNER)
        result = (int8_t *)draw;

    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_clearDisplay(&g_sContext);


    Graphics_drawStringCentered(&g_sContext, result,
                                AUTO_STRING_LENGTH,
                                159,
                                45,
                                TRANSPARENT_TEXT);
    Graphics_drawStringCentered(&g_sContext, "Restart?",
                                AUTO_STRING_LENGTH,
                                159,
                                65,
                                TRANSPARENT_TEXT);

    // Draw Primitives image button
    Graphics_drawButton(&g_sContext, &yesButton);

    // Draw Images image button
    Graphics_drawButton(&g_sContext, &noButton);

    do
    {
        touch_updateCurrentTouch(&g_sTouchContext);
        if(Graphics_isButtonSelected(&noButton, g_sTouchContext.x,
                                     g_sTouchContext.y))
        {
            Graphics_drawSelectedButton(&g_sContext, &noButton);
        }
    }
    while(!Graphics_isButtonSelected(&yesButton, g_sTouchContext.x,
                                     g_sTouchContext.y));

    Graphics_drawSelectedButton(&g_sContext, &yesButton);

    Delay(1000);
}

//Refer "Display.h" for function description
void initializeButtons(void)
{
    // Initiliaze play Button
    playButton.xPosition = 100;
    playButton.yPosition = 60;
    playButton.borderWidth = 5;
    playButton.selected = false;
    playButton.imageWidth = Primitives_Button4BPP_UNCOMP.xSize;
    playButton.imageHeight = Primitives_Button4BPP_UNCOMP.ySize;
    playButton.borderColor = GRAPHICS_COLOR_WHITE;
    playButton.selectedColor = GRAPHICS_COLOR_RED;
    playButton.image = &Primitives_Button4BPP_UNCOMP;

    yesButton.xMin = 80;
    yesButton.xMax = 150;
    yesButton.yMin = 80;
    yesButton.yMax = 120;
    yesButton.borderWidth = 1;
    yesButton.selected = false;
    yesButton.fillColor = GRAPHICS_COLOR_RED;
    yesButton.borderColor = GRAPHICS_COLOR_RED;
    yesButton.selectedColor = GRAPHICS_COLOR_BLACK;
    yesButton.textColor = GRAPHICS_COLOR_BLACK;
    yesButton.selectedTextColor = GRAPHICS_COLOR_RED;
    yesButton.textXPos = 100;
    yesButton.textYPos = 90;
    yesButton.text = "YES";
    yesButton.font = &g_sFontCm18;

    noButton.xMin = 180;
    noButton.xMax = 250;
    noButton.yMin = 80;
    noButton.yMax = 120;
    noButton.borderWidth = 1;
    noButton.selected = false;
    noButton.fillColor = GRAPHICS_COLOR_RED;
    noButton.borderColor = GRAPHICS_COLOR_RED;
    noButton.selectedColor = GRAPHICS_COLOR_BLACK;
    noButton.textColor = GRAPHICS_COLOR_BLACK;
    noButton.selectedTextColor = GRAPHICS_COLOR_RED;
    noButton.textXPos = 200;
    noButton.textYPos = 90;
    noButton.text = "NO";
    noButton.font = &g_sFontCm18;
}

//Refer "Display.h" for function description
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

//Refer "Display.h" for function description
void drawOutline(void)
{

    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
    Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
    Graphics_clearDisplay(&g_sContext);

    //Vertical Lines
    Graphics_drawLine(&g_sContext, 120, 20, 120, 220);
    Graphics_drawLine(&g_sContext, 200, 20, 200, 220);

    //Horizontal Lines
    Graphics_drawLine(&g_sContext, 40, 87, 280, 87);
    Graphics_drawLine(&g_sContext, 40, 153, 280, 153);

}

