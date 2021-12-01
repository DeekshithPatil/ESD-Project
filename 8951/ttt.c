
#include "ttt.h"

uint8_t M[9];
const uint8_t A[]= {0x92,0X93,0X94,0X8A,0X8B,0X8C,0X9A,0X9B,0X9C};

uint8_t currentPos,currentIndex;
int currentPlayer;

uint16_t square[]={0xFFFF,0x8001,0x8001,0x8001,0x8001,0x8001,0x8001,0x8001,
                   0x8001,0x8001,0x8001,0x8001,0x8001,0x8001,0x8001,0xFFFF};

uint16_t squareWX[]={0xFFFF,0x8001,0xA005,0x9009,0x8811,0x8421,0x8241,0x8181,
                   0x8181,0x8241,0x8421,0x8811,0x9009,0xA005,0x8001,0xFFFF};

uint16_t squareWO[]={0xFFFF,0x8001,0x87E1,0x8811,0x9009,0xA005,0xA005,0xA005,
                   0xA005,0xA005,0xA005,0x9009,0x8811,0x87E1,0x8001,0xFFFF};

void ccSquare(void)
{
    uint16_t *rows =square;
    lcd_cmd(0x02);
    lcd_cmd(0x40|0x00);
    for(int i=0;i<16;i++){
        lcd_data((*rows>>8)& 0xFF);
        lcd_data((*rows++) & 0xFF);
        delay(1);
    }
}

void ccSWX(void)
{
    uint16_t *rows =squareWX;
    lcd_cmd(0x02);
    lcd_cmd(0x40|0x10);
    for(int i=0;i<16;i++){
        lcd_data((*rows>>8)& 0xFF);
        lcd_data((*rows++) & 0xFF);
        delay(1);
    }
}

void ccSWO(void)
{
    uint16_t *rows =squareWO;
    lcd_cmd(0x02);
    lcd_cmd(0x40|0x20);
    for(int i=0;i<16;i++){
        lcd_data((*rows>>8)& 0xFF);
        lcd_data((*rows++) & 0xFF);
        delay(1);
    }
}

void putX(void)
{
    lcd_data(0x00);
    lcd_data(0x02);

}

void putO(void)
{
    lcd_data(0x00);
    lcd_data(0x04);

}

void startGame(void){


    uint8_t command;

    lcdgotoaddr(0x96);
    putX();
    currentPlayer = 1;
    currentIndex = 4;
    currentPos = A[4];
    lcdgotoaddr(currentPos);

    while(1){

        command = getchar();
        switch(command){
        case 0x0d:
        {
            changeState();
            int decision = gameDecision();
            if(decision == 1 || decision == 2 || decision == 9)
                gameOver(decision);
            else
                break;
        }//enter

        case 'w':
        {
            if((currentIndex<3)){
                break;
            }else{
                currentIndex-=3;
                currentPos=A[currentIndex];
                lcdgotoaddr(currentPos);
            }
            break;
        }//case w

        case 'a':
        {
                if(currentIndex>0 && currentIndex<=2)
                    currentIndex-=1;
                else if(currentIndex>3 && currentIndex<=5)
                    currentIndex-=1;
                else if(currentIndex>6 && currentIndex<=8)
                    currentIndex-=1;
                else
                    break;
                currentPos=A[currentIndex];
                lcdgotoaddr(currentPos);
                break;
        }//case

        case 's':
        {
            if((currentIndex>5)){
                break;
            }
            else{
                currentIndex +=3;
                currentPos=A[currentIndex];
                lcdgotoaddr(currentPos);
            }
            break;
        }//case

        case 'd':
        {
                if(currentIndex>=0 && currentIndex<2)
                    currentIndex+=1;
                else if(currentIndex>=3 && currentIndex<5)
                    currentIndex+=1;
                else if(currentIndex>=6 && currentIndex<8)
                    currentIndex+=1;
                else
                    break;
                currentPos=A[currentIndex];
                lcdgotoaddr(currentPos);
                break;
        }//case

        }//switch




    }//while

}

void Init_Game(void)
{
    ccSquare();
    ccSWO();
    ccSWX();

    lcdgotoaddr(0x81);
    lcdputstr(" TIC-TAC-TOE");

    lcdgotoaddr(0x92);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x93);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x94);
    lcd_data(0x00);
    lcd_data(0x00);

    lcdgotoaddr(0x8A);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x8B);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x8C);
    lcd_data(0x00);
    lcd_data(0x00);

    lcdgotoaddr(0x9A);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x9B);
    lcd_data(0x00);
    lcd_data(0x00);
    lcdgotoaddr(0x9C);
    lcd_data(0x00);
    lcd_data(0x00);
}


int changeState(void)
{


    if( M[currentIndex] != 0)
        return -1;


    if(currentPlayer == 1){
        putX();
        M[currentIndex] = 1;
        currentPlayer = 2;
    }
    else if (currentPlayer == 2){
        putO();
        M[currentIndex] = 2;
        currentPlayer =1;
    }

    lcdgotoaddr(0x96);
    if(currentPlayer == 1){
        putX();
    }
    else{
        putO();
    }

    lcdgotoaddr(currentPos);

    return 1;
}

int gameDecision(void)
{
    int decision=0;
    int XCount,OCount;
    XCount=OCount=0;

    //check vertical
    for(int j=0; j<3; j++){
        XCount=OCount=0;
        for(int i=0; i<3 ; i++){
            if( (M[j+(i*3)] == 1))
                XCount++;
            else if ( (M[j+(i*3)] == 2))
                OCount++;
        }
        if(XCount == 3 || OCount == 3){
            if(XCount ==3 )
                decision = 1;
            else
                decision = 2;
            return decision;
        }
    }


    //check horizontal
    for(int j=0; j<3; j++){
        XCount=OCount=0;
        for(int i=0; i<3 ; i++){
            if( (M[(j*3)+i] == 1))
                XCount++;
            else if ( (M[(j*3)+i] == 2))
                OCount++;
        }
        if(XCount == 3 || OCount == 3){
            if(XCount ==3 )
                decision = 1;
            else
                decision = 2;
            return decision;
        }
    }

    //diagonal check
    if( (M[0]== 1 && M[4]==1 && M[8]==1) || (M[2]==1 && M[4]==1 && M[6]==1) )
        return 1;

    if( (M[0]==2 && M[4]==2 && M[8]==2) || (M[2]==2 && M[4]==2 && M[6]==2) )
        return 2;

    for(int i=0; i<9; i++){
        if(M[i]!=0)
            decision++;
    }

    if(decision == 9)
        return decision;
    else
        return 0;

}

void restartGame(void)
{
    lcd_cmd(0x01);
    for(int i=0; i<9; i++)
        M[i]=0;
    Init_Game();
    startGame();

}

void gameOver(int player)
{
    lcd_cmd(0x01);
    if(player == 9){
        lcdgotoaddr(0x90);
        lcdputstr(" IT'S A DRAW!! ");
    }else {
        lcdgotoaddr(0x92);
        lcdputstr("WINNER!!");
        lcdgotoaddr(0x8A);
        if(player ==1)
            lcdputstr("PLAYER 1");
        else
            lcdputstr("PLAYER 2");
    }

    while(getchar()!= 0x0d);
    restartGame();
}

