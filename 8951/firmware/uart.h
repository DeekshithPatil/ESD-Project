/*
 * @file: uart.h.
 * @description: includes the api's required for uart
 *
 * Created on: Dec 1, 2021
 * Authors    : Santhosh
 * Email      : santhosh@colorado.edu
 *
 */

#ifndef __uart_h__
#define __uart_h__

//Headers
#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <8051.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* @function    : putchar()
 * @description : This function puts  a character on to the uart terminal
 *
 * Parameter
 *	c <-  character to be put on the uart terminal
 *
 * Returns
 *  None
 */
int putchar (int c);

/* @function    : getchar()
 * @description : This function reads a character from the uart terminal
 *
 * Parameter
 *	None
 *
 * Returns
 * 	None
 */
int getchar (void);

/* @function    : putstr()
 * @description : This function puts a string on to the uart terminal
 *
 * Parameter
 *	*s <- string to be printed on to the uart terminal
 *
 * Returns
 * 	None
 */
int putstr (char *s);


#endif
