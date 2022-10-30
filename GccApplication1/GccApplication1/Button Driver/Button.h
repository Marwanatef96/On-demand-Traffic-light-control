

#ifndef BUTTON_H_
#define BUTTON_H_
#include "../DIO Driver/DIO.h"
#define BUTTON_1_PORT PORT_C
#define BUTTON_1_PIN	1
#define LOW		0
#define HIGH	1

void BUTTON_init(uint8_t buttonPort,uint8_t buttonpin);
void BUTTON_read(uint8_t buttonPort,uint8_t buttonpin,uint8_t *value);




#endif /* BUTTON_H_ */