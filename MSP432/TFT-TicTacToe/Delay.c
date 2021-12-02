/*
 * Delay.c
 *
 * Brief - Consists of functions that are necessary to initialise the MSP432 and TFT
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#include "Delay.h"

#define SYSTEM_CLOCK_SPEED      48000000

//Refer "Delay.h" for function description
void Delay(uint16_t msec){
    uint32_t i = 0;
    uint32_t time = (msec / 1000) * (SYSTEM_CLOCK_SPEED / 15);

    for(i = 0; i < time; i++)
    {
        ;
    }
}
