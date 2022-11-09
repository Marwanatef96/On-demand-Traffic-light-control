#include "Delay.h"
void Delay_init()
{
	TCCR0=0x00;
	TCCR0 |=(1<<1);
}
void Delay(unsigned int ms){
	while(ms>0)
	{
		TCNT0=0x80;
		TCCR0 |=(1<<1);
		while ((TIFR &(1<<0)) == 0);
		TIFR |= (1<<0);
		TCCR0=0x00;
		ms--;
	}
}
