/*
 * LED_ON_OFF.cpp
 *
 * Created: 2018-05-02 오전 10:51:58
 * Author : stc_168
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
    /* Replace with your application code */
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(500);
		PORTD = 0xff;
		_delay_ms(500);
		
    }
}

