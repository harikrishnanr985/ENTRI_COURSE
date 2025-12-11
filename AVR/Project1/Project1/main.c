/*
 * Project1.c
 *
 * Created: 07-12-2025 12:59:56
 * Author : Harikrishnan R
 */ 

// red, yellow, green are portb
// motor on portd
//switch are in portb normally pulldown


#define F_CPU 16000000ul
#include <avr/io.h>
#include<util/delay.h>



void init_pins(void)
{
	DDRB|=(1<<DDB1);     // RED
	DDRB|=(1<<DDB2);	//Yellow
	DDRB|=(1<<DDB3);	//Green
	
	// Switch
	
	DDRB&=~(1<<DDB6);
	
}
	
	void init_motor(void)
	{
		DDRD|=(1<<PORTD1)|(1<<PORTD2);
	}
	void motor_cw(void)
	{
		PORTD|=(1<<PORTD1);
		PORTD&=~(1<<PORTD2);	
	}
	void motor_acw(void)
	{
		PORTD&=~(1<<PORTD1);
		PORTD|=(1<<PORTD2);		
	}
	void motor_stop(void)
	{
		PORTD&=~(1<<PORTD1);
		PORTD&=~(1<<PORTD2);
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
	init_motor();
	
	while (1)
	{
		Green_LED();
		_delay_ms(1000);
		
		Yellow_LED();
		_delay_ms(1000);
		
		Red_LED();
		_delay_ms(1000);
	
	
	if(PINB&(1<<PORTB6))
	{
		Red_LED();
		motor_cw();
		_delay_ms(1000);
		
	}
	else
	{
		motor_stop();
	}
	}
}

