#include <msp430.h>
#include "msp430fr5994.h"
#include "led.h"
#include "timer.h"

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT

    led_init();
    PM5CTL0 &= ~LOCKLPM5;

    timerA0_init();

    timerA0_set(16000);
}

// Timer0_A0 interrupt service routine
#pragma vector = TIMER0_A0_VECTOR
__interrupt void Timer0_A0_ISR (void)

{
    led_toggle();
}
