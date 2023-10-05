#ifndef queueArray_H_INCLUDED
#define queueArray_H_INCLUDED

#define Size 20

typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int  uint32;
typedef signed long int  sint32;
typedef float f32;
typedef double f64;
typedef long double f96;

void initQueue(void);
uint8 isEmpty(void);
uint8 isFull(void);
uint32 getSize(void);
void insertQueue(void);
void Delete(void);
void Peek(void);
void Display(void);


#endif // QUEUEA_H_INCLUDED
