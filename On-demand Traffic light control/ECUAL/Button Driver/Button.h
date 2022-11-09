

#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/DIO.h"

//macros
//********************************************************************************
#define BUTTON_1_PORT PORT_C
#define BUTTON_1_PIN	1
#define LOW		0
#define HIGH	1

//function prototypes
//********************************************************************************
void BUTTON_init(uint8_t buttonPort,uint8_t buttonpin);//initiation the button
void BUTTON_read(uint8_t buttonPort,uint8_t buttonpin,uint8_t *value);//read data from the button




#endif /* BUTTON_H_ */