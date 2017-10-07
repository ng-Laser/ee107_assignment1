/*
 * timer.c
 *
 *  Created on: Oct 7, 2017
 *      Author: Internet
 */

// Setup timer A0. Stop the timer, clear out any timer state and reset all counters.
// Set the clock the timer uses and enable interrupts.
void timerA0_init(){

}

// Reset timer A0’s counters, but do not reset the peripheral.
// The timer can be in the middle of execution when it is reset.
void timerA0_reset(){

}

// Set the period that the timer will fire.
// A timer interrupt should be fired for each timer period.
void timerA0_set(uint16_t period){

}

// Interrupt handler for timer A0. This one can go in main.c.
// Note that global variables modified in interrupt handlers must be declared volatile.
// For more information about the volatile keyword check out https://barrgroup.com/Embedded-Systems/How-To/C-Volatile-Keyword
#pragma vector = TIMER0_A0_VECTOR
__interrupt void Timer0_A0_ISR (void){

}
