/*
 * LCD.cpp
 *
 * Created: 2018-05-02 오후 2:20:36
 * Author : stc_168
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "G_LCD.h"
#include <stdio.h>

int main(void)
{
    G_LCD mylcd;
	char buffer[32];
	uint16_t counter=0;
	mylcd.LCD_clear();
	mylcd.LCD_goto_XY(0,0);
	mylcd.LCD_write_string("Hello Wolrd");
    while (1) 
    {
	
	sprintf(buffer,"counter : %d",counter);
	mylcd.LCD_goto_XY(1,0);
	mylcd.LCD_write_string(buffer);
	counter++;
	_delay_ms(250);
	
    }
}

