/*
 * Blink 1.c
 *
 * Created: 27-11-2025 19:53:13
 * Author : Harikrishnan R
 */ 

#define F_CPU 16000000ul

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRD|= (1<<DDD3);		//Set DDD3 (PD3) as output
	
        while (1) 
    {
		PORTD|=(1<<PORTD3);			//Set PD3  = 1
		_delay_ms(1000);
		PORTD&= ~(1<<PORTD3);			//Set PD3  = 0
		_delay_ms(1000);

    }
}