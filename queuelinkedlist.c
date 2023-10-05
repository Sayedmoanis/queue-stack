#include <stdio.h>
#include <stdlib.h>
#include "QUEUELINKEDlist.h"
qNode_t *front = NULL;
qNode_t*rear = NULL;

int main()
{
sint32 choice;
initQueue();
printf("Queue Operations\n");
do {
printf("\nMenu:\n");
printf("1. Insert Element\n");
printf("2. Delete Element\n");
printf("3. Peek Front Element\n");
printf("4. Display Queue\n");
printf("5. Check if Queue is Empty\n");
printf("6. Get Queue Size\n");
printf("0. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
case 1: {
sint32 data;
printf("Enter data to insert: ");
if (scanf("%d", &data) != 1) {
printf("Invalid input. Please enter a valid integer.\n");
while (getchar() != '\n') {
continue;
}
} else {
insertqueue(data);
}
break;
}
case 2:
Delete();
break;
case 3:
Peek();
break;
case 4:
Display();
break;
case 5:
if (isEmpty()) {
printf("Queue is empty.\n");
} else {
printf("Queue is not empty.\n");
}
break;
case 6:
printf("Queue size: %d\n", getSize());
break;
case 0:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Please try again.\n");
break;
    }
   } while (choice != 0);
    return 0 ;
}

void initQueue(void){
front = NULL;
rear = NULL;
}

uint8 isEmpty(void)
{
uint8 state = 0;
if (front == NULL){
state = 1;
printf("queue is Empty \n");
}
return state;
}

void Delete(void){
if (!isEmpty())
{
qNode_t *temp = front;
printf("%d \n", front->info);
if (front == rear)
{
rear = front = NULL;
}
else
{
front = front->link;
}
free(temp);
    }
}

void insertqueue(sint32 data){
qNode_t *temp = (qNode_t *)malloc(sizeof(qNode_t));
temp->info = data;
temp->link = NULL;
if (front == NULL)
{
rear = front = temp;
}
else
{
rear->link = temp;
rear = temp;
    }
}

uint8 getSize(void)
{
uint8 val = 0U;
if (!isEmpty())
{
val = countNode(front);
}
return val;
}

void Peek(void){
if (!isEmpty()){
printf("%d \n", front->info);
 }
}

void Display(void)
{
if (!isEmpty()){
qNode_t *ptr = front;
while (ptr != NULL){
printf("%d ", ptr->info);
ptr = ptr->link;
}
printf("\n");
    }
}

uint8 countNode(qNode_t *ptr){
uint8 count = 0u;
if (front != NULL)
{
while (ptr != NULL){
count++;
ptr = ptr->link;
  }
 }
return count;
}







