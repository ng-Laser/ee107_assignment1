/*
 * timer.c
 *
 *  Created on: Oct 4, 2017
 *      Author: zach
 */

#include "timer.h"
#include <stdio.h>
#include <msp430.h>
#include <stdint.h>

void timerA0_init(){
    TA0CTL |= TACLR; //Clear clock
    TA0CCR0 = 0;//Stop timer
    TA0CCTL0 = CCIE; // TACCR0 interrupt enabled
    TA0CTL = TASSEL__ACLK | MC__UP; //Select src and mode
}

void timerA0_reset(){
    TA0R = 0b0000000000000000; //Set clock to 0
}

void timerA0_set(uint16_t period){
    TA0CCR0 = period;
    __bis_SR_register(LPM0_bits + GIE);     // Enter LPM0 w/ interrupt
}
