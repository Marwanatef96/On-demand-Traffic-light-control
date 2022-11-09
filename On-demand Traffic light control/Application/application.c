#include "application.h"
int YES_BUTTON_PRESSED=0,IS_BUTTON_PRESSED=0,i;
void CAR_G_PPL_R_ON()
{
	LED_on(PORT_A,PPL_R_LED);
	LED_on(PORT_A,CAR_G_LED);
}
void CAR_G_PLL_R_OFF()
{
	LED_off(PORT_A,PPL_R_LED);
	LED_off(PORT_A,CAR_G_LED);
}
void CAR_R_PPL_G_ON()
{
	LED_on(PORT_A,PPL_G_LED);
	LED_on(PORT_A,CAR_R_LED);
}
void CAR_R_PPL_G_OFF()
{
	LED_off(PORT_A,PPL_G_LED);
	LED_off(PORT_A,CAR_R_LED);
}
void BOTH_Y_LED_ON()
{
	LED_on(PORT_A,PPL_Y_LED);
	LED_on(PORT_A,CAR_Y_LED);
}
void BOTH_Y_LED_OFF()
{
	LED_off(PORT_A,PPL_Y_LED);
	LED_off(PORT_A,CAR_Y_LED);
}

void check()
{
	if ((IS_BUTTON_PRESSED==CAR_YG)&(YES_BUTTON_PRESSED==PPL_YG))
	{
		IS_BUTTON_PRESSED=0,YES_BUTTON_PRESSED=0;
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		CAR_R_PPL_G_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_R_PPL_G_OFF();
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		i=11;
	}
	
	
	if ((IS_BUTTON_PRESSED==CAR_YR)&(YES_BUTTON_PRESSED==PPL_YR))
	{
		IS_BUTTON_PRESSED=0,YES_BUTTON_PRESSED=0;
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		CAR_R_PPL_G_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_R_PPL_G_OFF();
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		CAR_G_PPL_R_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_G_PLL_R_OFF();
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		i=11;
	}
	
	if((IS_BUTTON_PRESSED==CAR_R)&(YES_BUTTON_PRESSED==PPL_G))
	{	IS_BUTTON_PRESSED=0,YES_BUTTON_PRESSED=0;
		CAR_R_PPL_G_OFF();
		CAR_R_PPL_G_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_R_PPL_G_OFF();
		i=11;
	}
	
	if((IS_BUTTON_PRESSED==CAR_G)&(YES_BUTTON_PRESSED==PPL_R))
	{
		IS_BUTTON_PRESSED=0,YES_BUTTON_PRESSED=0;
		CAR_G_PLL_R_OFF();
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		CAR_R_PPL_G_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_R_PPL_G_OFF();
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		CAR_G_PPL_R_ON();
		for (i=0;i<10;i++)
		Delay(500);
		CAR_G_PLL_R_OFF();
		i=11;
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
		IS_BUTTON_PRESSED=CAR_G;
		CAR_G_PPL_R_ON();
		for (i=0;i<10;i++){
			Delay(500);
		check();}
		CAR_G_PLL_R_OFF();
		
		IS_BUTTON_PRESSED=CAR_YR;
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			check();
			BOTH_Y_LED_OFF();
			Delay(250);
		}
		
		IS_BUTTON_PRESSED=CAR_R;
		CAR_R_PPL_G_ON();
		for (i=0;i<10;i++){
			Delay(500);
		check();}
		CAR_R_PPL_G_OFF();
		
		IS_BUTTON_PRESSED=CAR_YG;
		for (i=0;i<10;i++)
		{
			BOTH_Y_LED_ON();
			Delay(250);
			check();
			BOTH_Y_LED_OFF();
			Delay(250);
		}
}
}

ISR(EXT_INT_0)
{
	if (IS_BUTTON_PRESSED==CAR_YG)
	{
		YES_BUTTON_PRESSED=PPL_YG;
	}
	else if (IS_BUTTON_PRESSED==CAR_YR)
	{
		YES_BUTTON_PRESSED=PPL_YR;
	}
	else if (IS_BUTTON_PRESSED==CAR_R)
	{
		YES_BUTTON_PRESSED=PPL_G;
	}
	else if (IS_BUTTON_PRESSED==CAR_G)
	{
		YES_BUTTON_PRESSED=PPL_R;
	}
}


