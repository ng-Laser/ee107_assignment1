/*
 * led.cpp
 *
 *  Created on: Oct 7, 2017
 *      Author: Internet
 */
#include "led.h"

// Setup the LED so it is in output mode and off.
void led_init(){
    PM5CTL0 &= ~LOCKLPM5;//PMM_unlockLPM5(), unlocks pin settings
    P3DIR |= 0b00100000; //set port 3 pin 5 to output mode
    led_off();
}

// Turn on the LED.
void led_on(){
    P3OUT &= 0b11011111; //set port 3 pin 5 low, LED is active-low. LED on board on.
}

// Turn off the LED.
void led_off(){
    P3OUT |= 0b00100000; //set port 3 pin 5 high, LED is active-low. LED on board off.
}

// Toggle the state of the LED.
void led_toggle(){
    P3OUT ^= BIT5;
}
