/*
 * LED.cpp
 *
 * Created: 2018-05-02 오후 3:35:33
 * Author : stc_168
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
	

    while (1) 
    {
		for(int i=0;i<7;i++)
		{
			PORTD=~(0x01<<i);
			_delay_ms(300);
		}
		for(int i=0;i<7;i++)
		{
			PORTD=~(0x80>>i);
			_delay_ms(300);
		}
		
    }
}

