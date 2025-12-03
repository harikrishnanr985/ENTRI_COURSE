/*
 * Blink_TrafficSystem.c
 *
 * Created: 03-12-2025 18:29:39
 * Author : Harikrishnan R
 */ 


#define F_CPU 16000000ul

#include <avr/io.h>
#include<util/delay.h>

void init_pins(void)
{
	DDRB|=(1<<DDB1);
	DDRB|=(1<<DDB2);
	DDRB|=(1<<DDB3);
}

void Red_LED(void)
{
	PORTB|=(1<<PORTB1);
	PORTB&=~(1<<PORTB2);
	PORTB&=~(1<<PORTB3);
}

void Yellow_LED(void)
{
	PORTB&=~(1<<PORTB1);
	PORTB|=(1<<PORTB2);
	PORTB&=~(1<<PORTB3);
}
void Green_LED(void)
{
	PORTB&=~(1<<PORTB1);
	PORTB&=~(1<<PORTB2);
	PORTB|=(1<<PORTB3);
}

int main(void)
{
    init_pins();
    while (1) 
    {
		Green_LED();
		_delay_ms(1000);
		
		Yellow_LED();
		_delay_ms(1000);
		
		Red_LED();
		_delay_ms(1000);
    }
}
