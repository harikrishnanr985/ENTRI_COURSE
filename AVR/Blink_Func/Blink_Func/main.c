/*
 * Blink_Func.c
 *
 * Created: 02-12-2025 22:52:25
 * Author : Harikrishnan R
 */ 

#define F_CPU 16000000ul

#include <avr/io.h>
#include<util/delay.h>

void init_pins(void)
{
	
	DDRB|=(1<<DDB1);					//Set DDB PB1 as output
	DDRB|=(1<<DDB2);					//Set DDB PB2 as output
}

void blink_leds(void)
{
	PORTB|=(1<<PORTB1);			//Set PB1 = 1
	PORTB&=~(1<<PORTB2);			 //Set PB2 = 0
	
	_delay_ms(1000);
	
	PORTB&=~(1<<PORTB1);			 //Set PB1 = 0
	PORTB|=(1<<PORTB2);			   //Set PB2 = 1
	
	_delay_ms(1000);
	
}


int main(void)
{
    init_pins();
    while (1) 
    {
		blink_leds();
    }
}

