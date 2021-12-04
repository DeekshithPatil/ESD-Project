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

#define SYSTEM_CLOCK_SPEED              48000000

#define SYSTEM_CLOCK_DIVIDE_FACTOR      15

#define MILLISECONDS_TO_SECCONDS        1000

//Refer "Delay.h" for function description
void Delay(uint16_t msec){
    uint32_t i = 0;
    uint32_t time = (msec / MILLISECONDS_TO_SECCONDS) * (SYSTEM_CLOCK_SPEED / SYSTEM_CLOCK_DIVIDE_FACTOR);

    for(i = 0; i < time; i++)
    {
        ;
    }
}
