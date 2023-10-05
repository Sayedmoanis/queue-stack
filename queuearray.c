#include <stdio.h>
#include <stdlib.h>
#include "queueArray.h"

static sint32 front,rear;
static sint32 arr[Size];

int main()
{
sint32 choice;
initQueue();
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
if (scanf("%d", &choice) != 1) {
printf("Invalid choice. Please enter a valid integer.\n");
while (getchar() != '\n') {
continue;
    }
continue; // Skip processing and show the menu again
    }

switch (choice) {
case 1:
insertQueue();
break;
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
printf("Queue size: %u\n", getSize());
break;
case 0:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Please try again.\n");
break;
}
} while (choice != 0);

    return 0;
}


void initQueue(void){
front = rear = -1;
}

uint8 isEmpty(void){
uint8 state = 0u;
if (front == -1 || front > rear)
{
state = 1;
printf("Queue Empty \n");
}
return state;
}


uint8 isFull(void){
uint8 state = 0u;
if (rear == Size - 1){
state = 1;
printf("Queue is Full \n");
}
return state;
}

uint32 getSize(void){
uint32 val = 0U;
if (!isEmpty()){
val = rear - front + 1;
}
return val;
}

void insertQueue(){
if (!isFull()){
printf("enter data: ");
sint32 data;
scanf("%d", &data);
if (front == -1 || front > rear) {
rear = front = 0;
arr[rear] = data;
}
else{
rear++;
arr[rear] = data;
    }
  }
}


void Peek(void){
sint32 val = 0;
if (!isEmpty()){
printf("%d \n", arr[front]);
 }
}


void Delete(void)
{
if (!isEmpty())
{
printf("%d  is deleted \n", arr[front]);
front++;
    }
}

void Display(void){
if (!isEmpty()){
sint32 i;
for (i = front; i <= rear; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
 }
}


