/*
 * Blink 2.c
 *
 * Created: 27-11-2025 20:13:45
 * Author : Harikrishnan R
 */ 

#define F_CPU 16000000ul
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRB|=(1<<DDB1);					//Set DDB PB1 as output
	DDRB|=(1<<DDB2);					//Set DDB PB2 as output
    
    while (1) 
    {
		PORTB|=(1<<PORTB1);			//Set PB1 = 1
		PORTB&=~(1<<PORTB2);			//Set PB2 = 0
		_delay_ms(1000);
		PORTB&=~(1<<PORTB1);			//Set PB1 = 0
		PORTB|=(1<<PORTB2);			//Set PB2 = 1
		_delay_ms(1000);
    }
}

