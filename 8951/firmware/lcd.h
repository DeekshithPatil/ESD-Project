/*
 * @file: lcd.h.
 * @description: includes the api's required for the glcd control
 *
 * Created on: Dec 1, 2021
 * Authors    : Santhosh
 * Email      : santhosh@colorado.edu
 *
 */

#ifndef __lcd_h__
#define __lcd_h__

//Headers
#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* @function    : delay()
 * @description : This function provides a delay of one machine cycle
 *
 * Parameter
 *	time <- No of machine cycle delay required to be implemented from the function
 *
 * Returns
 *  None
 */
void delay(int time);

/* @function    : lcd_cmd()
 * @description : This function sends command to the lcd
 *
 * Parameter
 *	Command <- command to be sent to the lcd
 *
 * Returns
 *  None
 */
void lcd_cmd(char Command);

/* @function    : lcd_data()
 * @description : This function send data to the lcd
 *
 * Parameter
 *	Data <- data to be sent to the lcd
 *
 * Returns
 *  None
 */
void lcd_data(char Data);

/* @function    : lcd_Init()
 * @description : This function initializes the LCD
 *
 * Parameter
 *	None
 *
 * Returns
 *  None
 */
void lcd_Init();

/* @function    : lcdputstr()
 * @description : This function prints the string on to the lcd
 *
 * Parameter
 *	str <- string to be printed on to the lcd
 *
 * Returns
 *  None
 */
void lcdputstr(uint8_t *str);

/* @function    : lcdgotoaddr()
 * @description : This function sets the lcd DDRAM addres to the given address
 *
 * Parameter
 *	add <- DDRAM address, where the cursor to be placed
 *
 * Returns
 *  None
 */
void lcdgotoaddr(uint8_t add);


#endif
