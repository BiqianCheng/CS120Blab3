/*	Author: Biqian Cheng
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 4
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
    DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
    DDRB = 0xFF; PORTB = 0x00;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char upperNib = 0x00;
    unsigned char lowerNib = 0x00;
    unsigned char tmpA = 0x00;
    /* Insert your solution below */
    while (1)
    {
        tmpA = PINA;
        upperNib = tmpA >> 4;
        lowerNib = tmpA << 4;

        PORTB = upperNib;
        PORTC = lowerNib;
    }
    return 1;
}
