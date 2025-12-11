/*
 * Timer0_sample.c
 *
 * Created: 11-12-2025 11:26:09
 * Author : Harikrishnan R
 */ 

#define F_CPU 16000000ul

#include <avr/io.h>
#include<util/delay.h>

void delay_1s(void)
{
	TCNT0 = 0;								//set initial Value
	TCCR0A&=~(1<<WGM00)|(1<<WGM01);			//Set Normal Mode
	
	//Set Prescaler
	
	TCCR0B&=~(1<<CS02);
	TCCR0B&=~(1<<CS01);
	TCCR0B|=(1<<CS00);
	
	for(long int i=0;i<62500;i++)
	{
		while(!(TIFR0&(1<<TOV0)))		//Wait for overflow, checking for 1
		TIFR0|=(1<<TOV0);				//Reset Overflow flag
	}
}



int main(void)
{
	DDRD|=(1<<DDD5);			//DDRD5 as output
    while (1) 
    {
		PORTD|=(1<<PD5);		//PD5 ON
		delay_1s();
    }
}

