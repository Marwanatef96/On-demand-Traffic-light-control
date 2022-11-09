#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "../../Utilities/register.h"

//function prototypes
//********************************************************************************
void interrupt_init();//initiation the interrupt 

//macros
//********************************************************************************
#define EXT_INT_0  __vector_1
#define EXT_INT_1  __vector_2
#define EXT_INT_2  __vector_3
#define CAR_YG 1
#define CAR_YR 2
#define CAR_R 3
#define CAR_G 4
#define PPL_YG 1
#define PPL_YR 2
#define PPL_G 3
#define PPL_R 4
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")

//function like macro
//********************************************************************************
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)//function like macro of the interrupt
#endif /* INTERRUPT_H_ */