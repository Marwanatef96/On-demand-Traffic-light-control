

#ifndef REGISTER_H_
#define REGISTER_H_

#include "typedef.h"
//DIO registers
//********************************************

//PORTA registers
#define PORTA *((volatile uint8_t*)0X3B)//8-bit
#define DDRA *((volatile uint8_t*)0X3A)//8-bit
#define PINA *((volatile uint8_t*)0X39)//8-bit

//PORTB registers
#define PORTB *((volatile uint8_t*)0X38)//8-bit
#define DDRB *((volatile uint8_t*)0X37)//8-bit
#define PINB *((volatile uint8_t*)0X36)//8-bit

//PORTC registers
#define PORTC *((volatile uint8_t*)0X35)//8-bit
#define DDRC *((volatile uint8_t*)0X34)//8-bit
#define PINC *((volatile uint8_t*)0X33)//8-bit

//PORTD registers
#define PORTD *((volatile uint8_t*)0X32)//8-bit
#define DDRD *((volatile uint8_t*)0X31)//8-bit
#define PIND *((volatile uint8_t*)0X30)//8-bit

//Timer register
//*******************************************
#define TCCR0 *((volatile uint8_t*)0X53)//8-bit
#define TCNT0 *((volatile uint8_t*)0X52)//8-bit
#define TIFR *((volatile uint8_t*)0X58)//8-bit

//External Interrupt register
//***********************************************
#define	MCUCR *((volatile uint8_t*)0X55)//8-bit
#define	MCUCSR *((volatile uint8_t*)0X54)//8-bit
#define	GICR *((volatile uint8_t*)0X5B)//8-bit
#define	GIFR *((volatile uint8_t*)0X5A)//8-bit

#endif /* REGISTER_H_ */