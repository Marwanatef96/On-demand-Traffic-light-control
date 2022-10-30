#include "interrupt.h"
#include "../Utilities/register.h"


void interrupt_init()
{
		DDRD |=(1<<2);
		sei();
		MCUCR |=0x03;
		GICR |= (1<<6);
		}