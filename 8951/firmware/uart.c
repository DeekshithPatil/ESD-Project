#include "uart.h"

int putchar (int c)
{
    while (!TI);
    SBUF = c;           // load serial port with transmit value
    TI = 0;             // clears TI flag
    return c;
}

int getchar (void)
{
    while (!RI);
    RI = 0;                         // cleasr RI flag
    //putchar(SBUF);
    return SBUF;                    // return character from SBUF
}

int putstr (char *s)
{
    int i = 0;
    while (*s){            // output characters until NULL found
        putchar(*s++);
        i++;
    }
    return i+1;
}

uint8_t hexToInt(uint8_t data)
{
    if('0'<= data && data <= '9')
        return data - '0';
    else
        return data - 'A' +10;
}

