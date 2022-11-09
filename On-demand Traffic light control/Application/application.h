
#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../ECUAL/LED Driver/LED.h"
#include "../ECUAL/Button Driver/Button.h"

//function prototypes
//********************************************************************************
void CAR_G_PPL_R_ON();//Turn ON both car GREEN LED and pedestrian RED LED
void CAR_G_PLL_R_OFF();//Turn OFF both car GREEN LED and pedestrian RED LED
void CAR_R_PPL_G_ON();//Turn on both car RED LED and pedestrian GREEN LED
void CAR_R_PPL_G_OFF();//Turn ON both car RED LED and pedestrian GREEN LED
void BOTH_Y_LED_ON();//Turn on both car YELLOW LED and pedestrian YELLOW LED
void BOTH_Y_LED_OFF();//Turn OFF both car YELLOW LED and pedestrian YELLOW LED
void check();//check if the button pressed or not
void APP_init();//initiation the main application
void APP_start();//start the main application and the main loop


#endif /* APPLICATION_H_ */