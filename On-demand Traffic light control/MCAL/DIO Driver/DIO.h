
#ifndef DIO_H_
#define DIO_H_
#include "../../Utilities/register.h"

//macros
//********************************************************************************
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
#define IN 0
#define OUT 1
#define LOW 0
#define HIGH 1

//function prototypes
//********************************************************************************
void DIO_init(uint8_t pinnumer,uint8_t portnumer,uint8_t direction);//DIO initiation direction
void DIO_write(uint8_t pinnumer,uint8_t portnumer,uint8_t value);//write data to DIO
void DIO_read(uint8_t pinnumer,uint8_t portnumer,uint8_t *value);//read data from DIO



#endif /* DIO_H_ */