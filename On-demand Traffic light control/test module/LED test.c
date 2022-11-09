
#include "../ECUAL/LED Driver/LED.h"
#include "../MCAL/Delay Driver/Delay.h"
void LED_test();//test the LEDS
void LED_test(){
	LED_init(PORT_A,0);
	LED_init(PORT_A,1);
	LED_init(PORT_A,2);
	LED_init(PORT_A,3);
	LED_init(PORT_A,4);
	LED_init(PORT_A,5);
	while(1){
	LED_on(PORT_A,0);
	LED_on(PORT_A,1);
	LED_on(PORT_A,2);
	LED_on(PORT_A,3);
	LED_on(PORT_A,4);
	LED_on(PORT_A,5);
	Delay(2000);
	LED_off(PORT_A,0);
	LED_off(PORT_A,1);
	LED_off(PORT_A,2);
	LED_off(PORT_A,3);
	LED_off(PORT_A,4);
	LED_off(PORT_A,5);
	Delay(2000);
	}
}