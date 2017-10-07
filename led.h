/*
 * led.h
 *
 *  Created on: Oct 7, 2017
 *      Author: Internet
 */

#ifndef LED_H_
#define LED_H_

// Setup the LED so it is in output mode and off.
void led_init();

// Turn on the LED.
void led_on();

// Turn off the LED.
void led_off();

// Toggle the state of the LED.
void led_toggle();

#endif /* LED_H_ */
