/*	Author: Biqian Cheng
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 2
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
	DDRC=0xFF;PORTC=0x00;
	unsigned char levelFuel=0x00;
	unsigned char valueC=0x00;
	while (1) {	
		levelFuel=PINA&0x0F;
		if (levelFuel<=2 && levelFuel >= 1) {
			valueC=0x60;
		}
		else if (levelFuel>2 && levelFuel<=4 ){
			valueC=0x70;
		}
		else if (levelFuel>4 && levelFuel<=6){
			valueC=0x30;
		}
		else if (levelFuel>6 && levelFuel<=9){
			valueC=0x3c;
		}
		else if (levelFuel>9 && levelFuel<=12){
			valueC=0x3e;
		}
		else if (levelFuel>12 && levelFuel<=15){
			valueC=0x3f;
		}
		if (levelFuel <= 4){
			valueC=valueC | 0x40;
		}
		PORTC=valueC;
		valueC = 0x00;

	}
	return 1;
}
