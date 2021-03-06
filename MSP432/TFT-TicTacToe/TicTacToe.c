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

#define PLAYER_TURN_X                               10
#define PLAYER_TURN_Y                               10

#define FIRST_BOX                                   1
#define SECOND_BOX                                  2
#define THIRD_BOX                                   3
#define FOURTH_BOX                                  4
#define FIFTH_BOX                                   5
#define SIXTH_BOX                                   6
#define SEVENTH_BOX                                 7
#define EIGHTH_BOX                                  8
#define NINETH_BOX                                  9

#define BOX_1_X_LOW                                 40
#define BOX_1_X_HIGH                                120
#define BOX_1_Y_LOW                                 20
#define BOX_1_Y_HIGH                                87

#define BOX_2_X_LOW                                 120
#define BOX_2_X_HIGH                                200
#define BOX_2_Y_LOW                                 20
#define BOX_2_Y_HIGH                                87

#define BOX_3_X_LOW                                 200
#define BOX_3_X_HIGH                                280
#define BOX_3_Y_LOW                                 20
#define BOX_3_Y_HIGH                                87

#define BOX_4_X_LOW                                 40
#define BOX_4_X_HIGH                                120
#define BOX_4_Y_LOW                                 87
#define BOX_4_Y_HIGH                                153

#define BOX_5_X_LOW                                 120
#define BOX_5_X_HIGH                                200
#define BOX_5_Y_LOW                                 87
#define BOX_5_Y_HIGH                                153

#define BOX_6_X_LOW                                 200
#define BOX_6_X_HIGH                                280
#define BOX_6_Y_LOW                                 87
#define BOX_6_Y_HIGH                                153

#define BOX_7_X_LOW                                 40
#define BOX_7_X_HIGH                                120
#define BOX_7_Y_LOW                                 153
#define BOX_7_Y_HIGH                                220

#define BOX_8_X_LOW                                 120
#define BOX_8_X_HIGH                                200
#define BOX_8_Y_LOW                                 153
#define BOX_8_Y_HIGH                                220

#define BOX_9_X_LOW                                 200
#define BOX_9_X_HIGH                                280
#define BOX_9_Y_LOW                                 153
#define BOX_9_Y_HIGH                                220

#define MAX_ROWS                                    3
#define MAX_COLUMNS                                 3

#define PLAYER_1_VICTORY_SUM                        3
#define PLAYER_2_VICTORY_SUM                       -3

const int PLAYER_1_INDEX = 0;
const int PLAYER_2_INDEX = 1;

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

    while(1)
    {
        touch_updateCurrentTouch(&g_sTouchContext);
        Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);
        Graphics_drawStringCentered(&g_sContext, &character[index], 1, PLAYER_TURN_X, PLAYER_TURN_Y, TRANSPARENT_TEXT);

        if(g_sTouchContext.touch)
        {

            boxNumber = getBoxNumber(g_sTouchContext.x, g_sTouchContext.y);

            if(boxNumber == FIRST_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == SECOND_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;
            }

            else if(boxNumber == THIRD_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 240, 54, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == FOURTH_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == FIFTH_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == SIXTH_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 240, 120, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == SEVENTH_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 80, 187, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;
                arr[2][0] = index;
            }

            else if(boxNumber == EIGHTH_BOX && (!isBoxSelected[boxNumber]))
            {
                Graphics_drawStringCentered(&g_sContext, &character[index], 1, 160, 187, TRANSPARENT_TEXT);

                index = (index + 1) % 2;

                isBoxSelected[boxNumber] = true;

            }

            else if(boxNumber == NINETH_BOX && (!isBoxSelected[boxNumber]))
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

    if(index == PLAYER_1_INDEX) // Currently index is at player 1 (updated index after winner had made the move), therefore player 2 is the winner
        return PLAYER_2;
    else
        return PLAYER_1;
}

/*
 * Brief - Used to determine the value that needs to be inserted into the array that tracks the current state of the game, based on index
 *       - Returns 1 if index points to player 1 ('X'), or -1 if index points to player 2 ('O')
 */
static int getInsertVal(int index)
{
    const int PLAYER_1_INSERT_VAL = 1;
    const int PLAYER_2_INSERT_VAL = -1;

    if(index == PLAYER_1_INDEX)
        return PLAYER_1_INSERT_VAL;

    return PLAYER_2_INSERT_VAL;
}

/*
 * Brief - Used to determine the box at which the touch has been made, given the 'x' and 'y' co-ordinate of the touch on the screen
 */
static unsigned int getBoxNumber(uint16_t x, uint16_t y)
{
    if((x >= BOX_1_X_LOW && x <= BOX_1_X_HIGH) && (y >= BOX_1_Y_LOW && y <= BOX_1_Y_HIGH))
    {
        return FIRST_BOX;
    }

    if((x > BOX_2_X_LOW && x<= BOX_2_X_HIGH) && (y >= BOX_2_Y_LOW && y <= BOX_2_Y_HIGH))
    {
        return SECOND_BOX;
    }

    if((x > BOX_3_X_LOW && x<= BOX_3_X_HIGH) && (y >= BOX_3_Y_LOW && y <= BOX_3_Y_HIGH))
    {
        return THIRD_BOX;
    }

    if((x >= BOX_4_X_LOW && x <= BOX_4_X_HIGH) && (y > BOX_4_Y_LOW && y <= BOX_4_Y_HIGH))
    {
        return FOURTH_BOX;
    }

    if((x > BOX_5_X_LOW && x<= BOX_5_X_HIGH) && (y > BOX_5_Y_LOW && y <= BOX_5_Y_HIGH))
    {
        return FIFTH_BOX;
    }

    if((x > BOX_6_X_LOW && x<= BOX_6_X_HIGH) && (y > BOX_6_Y_LOW && y <= BOX_6_Y_HIGH))
    {
        return SIXTH_BOX;
    }

    if((x >= BOX_7_X_LOW && x <= BOX_7_X_HIGH) && (y > BOX_7_Y_LOW && y <= BOX_7_Y_HIGH))
    {
        return SEVENTH_BOX;
    }

    if((x > BOX_8_X_LOW && x<= BOX_8_X_HIGH) && (y > BOX_8_Y_LOW && y <= BOX_8_Y_HIGH))
    {
        return EIGHTH_BOX;
    }

    if((x > BOX_9_X_LOW && x<= BOX_9_X_HIGH) && (y > BOX_9_Y_LOW && y <= BOX_9_Y_HIGH))
    {
        return NINETH_BOX;
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

    if(boxNumber >=FIRST_BOX && boxNumber <= THIRD_BOX)
        row = 0;
    else if(boxNumber >=FOURTH_BOX && boxNumber <=SIXTH_BOX)
        row = 1;
    else
        row = 2;

    temp = boxNumber % MAX_COLUMNS;

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

    const int VERTICAL_X1 = 80;
    const int VERTICAL_Y1 = 20;
    const int VERTICAL_X2 = 80;
    const int VERTICAL_Y2 = 220;
    const int VERTICAL_OFFSET = 80;

    const int HORIZONTAL_X1 = 40;
    const int HORIZONTAL_Y1 = 54;
    const int HORIZONTAL_X2 = 280;
    const int HORIZONTAL_Y2 = 54;
    const int HORIZONTAL_OFFSET = 67;

    const int TOP_LEFT_X   = 40;
    const int TOP_LEFT_Y   = 20;
    const int BOTTOM_RIGHT_X = 280;
    const int BOTTOM_RIGHT_Y = 220;

    const int TOP_RIGHT_X   = 280;
    const int TOP_RIGHT_Y   = 20;
    const int BOTTOM_LEFT_X = 40;
    const int BOTTOM_LEFT_Y = 220;

    int x1 = HORIZONTAL_X1;
    int y1 = HORIZONTAL_Y1;
    int x2 = HORIZONTAL_X2;
    int y2 = HORIZONTAL_Y2;

    Graphics_setForegroundColor(&g_sContext, GRAPHICS_COLOR_RED);

    //Check horizontal
    for(i = 0; i<MAX_ROWS; i++)
    {
        for(j=0;j<MAX_COLUMNS;j++)
        {
            sum += arr[i][j];
        }

        if(sum == PLAYER_1_VICTORY_SUM || sum == PLAYER_2_VICTORY_SUM)
        {
            Graphics_drawLine(&g_sContext, x1, y1, x2, y2);
            return true;
        }
        y1 += HORIZONTAL_OFFSET;
        y2 += HORIZONTAL_OFFSET;
        sum = 0;
    }

    //Check vertical
    x1 = VERTICAL_X1;
    y1 = VERTICAL_Y1;
    x2 = VERTICAL_X2;
    y2 = VERTICAL_Y2;

    sum = 0;
    for(i=0; i<MAX_ROWS; i++)
    {
        for(j=0; j<MAX_COLUMNS; j++)
        {
            sum += arr[j][i];
        }

        if(sum == PLAYER_1_VICTORY_SUM || sum == PLAYER_2_VICTORY_SUM)
        {
            Graphics_drawLine(&g_sContext, x1, y1, x2, y2);
            return true;
        }
        x1 += VERTICAL_OFFSET;
        x2 += VERTICAL_OFFSET;
        sum = 0;
    }

    //Check top-left corner to bottom-right corner
    sum = arr[0][0] + arr[1][1] + arr[2][2];
    if(sum == PLAYER_1_VICTORY_SUM || sum == PLAYER_2_VICTORY_SUM)
    {
        Graphics_drawLine(&g_sContext, TOP_LEFT_X, TOP_LEFT_Y, BOTTOM_RIGHT_X, BOTTOM_RIGHT_Y);
        return true;
    }

    //Check top-right corner to bottom-left corner
    sum = arr[0][2] + arr[1][1] + arr[2][0];
    if(sum == PLAYER_1_VICTORY_SUM || sum == PLAYER_2_VICTORY_SUM)
    {
        Graphics_drawLine(&g_sContext,TOP_RIGHT_X, TOP_RIGHT_Y, BOTTOM_LEFT_X,BOTTOM_LEFT_Y);
        return true;
    }

    return GameOver;
}
