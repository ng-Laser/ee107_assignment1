/*
 * led.c
 *
 *  Created on: Oct 4, 2017
 *      Author: zach
 */

#include "led.h"
#include <stdio.h>
#include <msp430.h>


void led_init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;//PMM_unlockLPM5(), unlocks pin settings

    P3DIR |= 0b00100000; //set port 3 pin 5 to output mode
    P3OUT  = 0b00100000; //set port 3 pin 5 to high (LED is off)
}

void led_on(){
    P3OUT &= 0b11011111; //set port 3 pin 5 to low (LED is on)
}

void led_off(){
    P3OUT |= 0b00100000; //set port 3 pin 5 to high (LED is off)
}

void led_toggle(){
    P3OUT ^= 0b00100000; //toggle port 3 pin 5
}
