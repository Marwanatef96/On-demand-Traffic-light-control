#ifndef LED_H_
#define LED_H_
#include "../DIO Driver/DIO.h"
#define CAR_G_LED 0
#define CAR_Y_LED 1
#define CAR_R_LED 2
#define PPL_G_LED 3
#define PPL_Y_LED 4
#define PPL_R_LED 5
void LED_init(uint8_t ledport,uint8_t ledpin);
void LED_on(uint8_t ledport,uint8_t ledpin);
void LED_off(uint8_t ledport,uint8_t ledpin);
void LED_toggle(uint8_t ledport,uint8_t ledpin);






#endif /* LED_H_ */