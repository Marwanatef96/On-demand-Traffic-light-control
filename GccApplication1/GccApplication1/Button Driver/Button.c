#include "Button.h"
void BUTTON_init(uint8_t buttonPort,uint8_t buttonpin)
{
	DIO_init(buttonpin,buttonPort,IN);
}
void BUTTON_read(uint8_t buttonPort,uint8_t buttonpin,uint8_t *value)
{
	DIO_read(buttonpin,buttonPort,value);
}
