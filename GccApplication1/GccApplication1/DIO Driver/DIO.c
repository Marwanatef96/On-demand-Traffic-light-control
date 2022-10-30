#include "DIO.h"
void DIO_init(uint8_t pinnumer,uint8_t portnumer,uint8_t direction)
{
	switch (portnumer)
	{
		case PORT_A:
			if (direction == IN)
			{
				DDRA &= ~(1<<pinnumer);
			}
			else if (direction==OUT)
			{
				DDRA |=(1<<pinnumer);
			}
			else
			{
				//error handling
			}
		break;
		case PORT_B:
			if (direction==IN)
			{
				DDRB &=~(1<<pinnumer);
			}
			else if (direction==OUT)
			{
				DDRB |=(1<<pinnumer);
			}
			else
			{
				//error handling
			}
		break;
		case PORT_C:
			if (direction==IN)
			{
				DDRC &=~(1<<pinnumer);
			}
			else if (direction==OUT)
			{
				DDRC |=(1<<pinnumer);
			}
			else
			{
				//error handling
			}
		break;
		case PORT_D:
			if (direction==IN)
			{
				DDRD &=~(1<<pinnumer);
			}
			else if (direction==OUT)
			{
				DDRD |=(1<<pinnumer);
			}
			else
			{
				//error handling
			}
		break;

	}
	
	
	
}
void DIO_write(uint8_t pinnumer,uint8_t portnumer,uint8_t value)
{
	switch (portnumer)
	{
		case PORT_A:
		if (value==LOW)
		{
			PORTA &=~(1<<pinnumer);
		}
		else if (value==HIGH)
		{
			PORTA |=(1<<pinnumer);
		}
		else
		{
			//error handling
		}
		break;
		case PORT_B:
		if (value==LOW)
		{
			PORTB &=~(1<<pinnumer);
		}
		else if (value==HIGH)
		{
			PORTB |=(1<<pinnumer);
		}
		else
		{
			//error handling
		}
		break;
		case PORT_C:
		if (value==LOW)
		{
			PORTC &=~(1<<pinnumer);
		}
		else if (value==HIGH)
		{
			PORTC |=(1<<pinnumer);
		}
		else
		{
			//error handling
		}
		break;
		case PORT_D:
		if (value==LOW)
		{
			PORTD &=~(1<<pinnumer);
		}
		else if (value==HIGH)
		{
			PORTD |=(1<<pinnumer);
		}
		else
		{
			//error handling
		}
		break;

	}
}
void DIO_toggle(uint8_t pinnumer,uint8_t portnumer)
{
		switch (portnumer)
		{
			case PORT_A:
			PORTA ^=(1<<pinnumer);
			break;
			case PORT_B:
			PORTB ^=(1<<pinnumer);
			break;
			case PORT_C:
			PORTC ^=(1<<pinnumer);
			break;
			case PORT_D:
			PORTD ^=(1<<pinnumer);
			break;

		}
}
	
void DIO_read(uint8_t pinnumer,uint8_t portnumer,uint8_t *value)
{
	switch (portnumer)
	{
		case PORT_A:
			*value = (PINA & (1<<pinnumer))>>pinnumer;
			
		break;
		case PORT_B:
			*value=(PINB&(1<<pinnumer))>>pinnumer;
		break;
		case PORT_C:
			*value=(PINC&(1<<pinnumer))>>pinnumer;
		break;
		case PORT_D:
			*value=(PIND&(1<<pinnumer))>>pinnumer;
		break;

	}
}	


