#include "application.h"
int x=0,y=0,i;
void check(){
	if (((y==CAR_YG)&(x==PPL_YG)))
	{	y=0,x=0;
		BOTH_YG_LED_BLINK();
		BOTH_R_LED_ON();
		BOTH_YG_LED_BLINK();
		i=6;
	}
	if ((y==CAR_YR)&(x==PPL_YR))
	{	y=0,x=0;
		BOTH_YR_LED_BLINK();
		BOTH_R_LED_ON();
		BOTH_YR_LED_BLINK();
		BOTH_G_LED_ON();
		BOTH_YR_LED_BLINK();
		i=6;
	}
	if(((y==CAR_R)&(x==PPL_G)))
	{	y=0,x=0;
		LED_off(PORT_A,PPL_G_LED);
		LED_off(PORT_A,CAR_R_LED);
		BOTH_R_LED_ON();
		i=6;
	}
	}
void BOTH_G_LED_ON(){
	LED_on(PORT_A,PPL_R_LED);
	LED_on(PORT_A,CAR_G_LED);
	for (i=0;i<5;i++)
	Delay(1000);
	LED_off(PORT_A,PPL_R_LED);
	LED_off(PORT_A,CAR_G_LED);
}
void BOTH_R_LED_ON(){
	y=CAR_R;
	LED_on(PORT_A,PPL_G_LED);
	LED_on(PORT_A,CAR_R_LED);
	for (i=0;i<5;i++){
	Delay(1000);
	check();}
	LED_off(PORT_A,PPL_G_LED);
	LED_off(PORT_A,CAR_R_LED);
}
void BOTH_YG_LED_BLINK(){
	y=CAR_YG;
	for (i=0;i<10;i++)
	{
		LED_on(PORT_A,PPL_Y_LED);
		LED_on(PORT_A,CAR_Y_LED);
		Delay(250);
		check();
		LED_off(PORT_A,PPL_Y_LED);
		LED_off(PORT_A,CAR_Y_LED);
		Delay(250);
	}
}
void BOTH_YR_LED_BLINK(){
	y=CAR_YR;
	for (i=0;i<10;i++)
	{
		LED_on(PORT_A,PPL_Y_LED);
		LED_on(PORT_A,CAR_Y_LED);
		Delay(250);
		check();
		LED_off(PORT_A,PPL_Y_LED);
		LED_off(PORT_A,CAR_Y_LED);
		Delay(250);
	}
}
void APP_init()
{
	LED_init(PORT_A,CAR_G_LED);
	LED_init(PORT_A,CAR_Y_LED);
	LED_init(PORT_A,CAR_R_LED);
	LED_init(PORT_A,PPL_G_LED);
	LED_init(PORT_A,PPL_Y_LED);
	LED_init(PORT_A,PPL_R_LED);	
	Delay_init();
	interrupt_init();

}
void APP_start()
{
		while (1)
		{
			BOTH_G_LED_ON();
			BOTH_YR_LED_BLINK();
			BOTH_R_LED_ON();
			BOTH_YG_LED_BLINK();
		}
			
}


ISR(EXT_INT_0)
{
	if (y==CAR_YG)
	{
		x=PPL_YG;
	}
	else if (y==CAR_YR)
	{
		x=PPL_YR;
	}
	else if (y==CAR_R)
	{
		x=PPL_G;
	}
}


