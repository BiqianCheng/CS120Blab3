/*	Author: Biqian Cheng
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 5
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void)
{
    /* Insert DDR and PORT initializations */
    DDRB=0xFE;PORTB=0x01;
    DDRD=0x00;PORTD=0xFF;
    unsigned char DD=0x00;
    unsigned char b0=0x00;
    unsigned char BB=0x00;
    unsigned short w=0;
    while (1) {
	DD=PIND;
	w=DD*2;
	BB=PINB;
	b0=BB&0x01;
	w=w+b0;
	if(w>=70){
		PORTB=(BB&0x01)|0x02;
	}
	else if((w>5) &&(w<70)){
		PORTB=(BB&0x01)|0x04;
	}
	else{
		PORTB=BB&0x01;
	}	
	}
	return 1;
}
