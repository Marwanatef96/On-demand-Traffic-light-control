#include "../ECUAL/Button Driver/Button.h"
#include "../ECUAL/LED Driver/LED.h"
void button_test();//test the Button
void button_test(){
	uint8_t state;
	BUTTON_init(PORT_D,2);
	LED_init(PORT_A,0);
	while (1)
	{
		BUTTON_read(PORT_D,2,&state);
		if(state==HIGH)
		{
			LED_on(PORT_A,0);
		}
		else if(state==LOW)
		{
			LED_off(PORT_A,0);
		}
	}
}