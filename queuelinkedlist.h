#ifndef QUEUELINKEDlist_H_INCLUDED
#define QUEUELINKEDlist_H_INCLUDED

typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int  uint32;
typedef signed long int  sint32;
typedef float f32;
typedef double f64;
typedef long double f96;


typedef struct Queue
{
    sint32 info;
    struct Queue *link;

} qNode_t;

void initQueue(void);
void Delete(void);
uint8 isEmpty(void);
uint8 getSize(void);
void insertqueue(sint32 data);
void Peek(void);
void Display(void);
uint8 countNode(qNode_t *start);



#endif
