/*	Author: Biqian Cheng
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA=0x00;PORTA=0xFF;
	DDRB=0x00;PORTB=0xFF;
	DDRC=0xFF;PORTC=0x00;
	unsigned char tempA=0x00;
	unsigned char tempB=0x00;
	unsigned char tempC=0x00;
	unsigned char i=0x00;
	while (1) {	
		tempC=0x00;	
		tempA=PINA;
		tempB=PINB;
		for(i=0;i<8;++i){
			tempC=tempC+((tempA>>i)&0x01)+((tempB>>i)&0x01);
		}
		PORTC=tempC;
		tempC = 0x00;
	}
	return 0;
}
