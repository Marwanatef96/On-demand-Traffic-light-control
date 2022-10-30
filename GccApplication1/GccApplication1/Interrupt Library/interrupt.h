
#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#define EXT_INT_0  __vector_1
#define EXT_INT_1  __vector_2
#define EXT_INT_2  __vector_3

#define cli()  __asm__ __volatile__ ("cli" ::: "memory")
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)


#endif /* INTERRUPT_H_ */