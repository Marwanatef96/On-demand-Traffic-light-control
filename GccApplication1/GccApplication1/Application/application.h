
#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../DIO Driver/DIO.h"
#include "../LED Driver/LED.h"
#include "../Button Driver/Button.h"
#include "../Delay Driver/Delay.h"
#include "../Interrupt Library/interrupt.h"
#define CAR_YG 1
#define CAR_YR 2
#define CAR_R 3
#define PPL_YG 1
#define PPL_YR 2
#define PPL_G 3
void BOTH_Y_LED_BLINK();
void BOTH_R_LED_ON();
void BOTH_G_LED_ON();
void CAR_G_LED_ON();
void BOTH_YR_LED_BLINK();
void BOTH_YG_LED_BLINK();
void CAR_R_LED_ON();
void check();
void APP_init();
void APP_start();


#endif /* APPLICATION_H_ */