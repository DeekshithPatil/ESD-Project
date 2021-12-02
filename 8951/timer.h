/*
 * @file: timer.h
 * @description: includes the functions required for timer0
 *
 *
 * Created on: Nov 1,2021
 * Author    : Santhosh
 * Email     : santhosh@colorado.edu
 *
 */
#ifndef __timer_h__
#define __timer_h__

extern int r;

void Init_timer(void);

void timer0_ISR(void)__interrupt(1);

void reset_timer();

void put_timer(void);

#endif

