/*
 * Blink.c
 *
 * Created: 27-11-2025 19:13:55
 * Author : Harikrishnan R
 */ 

#define F_CPU 16000000ul

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRB = 0b00000100;			//set DDRB (PB5) as output
    while (1) 
    {
		PORTB = 0b00100000;		// set PB2 = 1
		_delay_ms(3000);
		PORTD = 0b00100000;
		_delay_ms(3000);		// set PB2 = 0
    }
}

