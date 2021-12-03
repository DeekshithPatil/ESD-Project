/*
 * TicTacToe.c
 *
 * Brief - Consists of functions that are necessary to implement the features of the game
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#include "TicTacToe.h"

static int getWinner(int index);
static int getInsertVal(int index);
static unsigned int getBoxNumber(uint16_t x, uint16_t y);
static void getRowAndColumn(int boxNumber, int *rowNumber,int *columnNumber);
static bool isGameOver(int arr[3][3]);

//Refer "TicTacToe.h" function description
int startGame()
{
    int8_t character[] = {'X','O'};

    int numberOfMoves=0;

    char index = 0;

    unsigned int boxNumber = 0;

    bool isBoxSelected[10] = {false};

    int arr[3][3] = {0};

    int rowNumber, columnNumber;

    int insertVal = 0;

    bool GameOver = false;

//    int8_t clear = ' ';

    while(1)
    {
        touch_updateCurrentTouch(&g_sTouchContext);
        Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
        Graphics_drawStringCentered(&g_sContext, &character[index], 1, 10, 10, TRANSPARENT_TEXT);

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

            //Clear current player text
            Graphics_setForegroundColor(&g_sContext, ClrBlack);
            Graphics_fillCircle(&g_sContext, 10, 10, 10);

            getRowAndColumn(boxNumber, &rowNumber,&columnNumber);
            insertVal = getInsertVal(index);

            arr[rowNumber][columnNumber] = insertVal;

            numberOfMoves++;
            if(numberOfMoves == 9)
                return 0; //Game draw

            GameOver = isGameOver(arr);

            if(GameOver)
                return getWinner(index);
        }
    }
}

/*
 * Brief - Determines the player number who has won the game based on the 'index' (used to track if the next turn is 'X' or 'O')
 */
static int getWinner(index)
{
    if(index == 0)
        return 2;
    else
        return 1;
}

/*
 * Brief - Used to determine the value that needs to be inserted into the array that tracks the current state of the game, based on index
 *       - Returns 1 if index points to player 1 ('X'), or -1 if index points to player 2 ('O')
 */
static int getInsertVal(int index)
{
    if(index == 0)
        return -1;

    return 1;
}

/*
 * Brief - Used to determine the box at which the touch has been made, given the 'x' and 'y' co-ordinate of the touch on the screen
 */
static unsigned int getBoxNumber(uint16_t x, uint16_t y)
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

/*
 * Brief - Used to determine the row and column number given the box number
 */
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

/*
 * Brief - Used to determine if the game has been completed or not. Returns true if the game is done, else false is returned
 */
static bool isGameOver(int arr[3][3])
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
