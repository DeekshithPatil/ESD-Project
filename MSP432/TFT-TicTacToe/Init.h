/*
 * Init.h
 *
 * Brief - Consists of functions that are necessary to initialise the MSP432 and TFT
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#ifndef INIT_H_
#define INIT_H_

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

/*
 * Used to Initialise MSP32
 */
void boardInit(void);

/*
 * Used to initialise clock sources for necessary blocks
 */
void clockInit(void);



#endif /* INIT_H_ */
