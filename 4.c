#include <stdio.h>

#define MAX_SIZE 100

// Define a structure for the queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize a queue
void initialize(struct Queue* queue) {
    queue->front = queue->rear = -1;
}

// Function to check if the queue is empty (0 for false, 1 for true)
int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

// Function to check if the queue is full (0 for false, 1 for true)
int isFull(struct Queue* queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue overflow\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->arr[queue->rear] = item;
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value for an empty queue
    }

    int item = queue->arr[queue->front];

    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return item;
}

int main() {
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeued: %d\n", dequeue(&queue)); // Outputs 1
    printf("Dequeued: %d\n", dequeue(&queue)); // Outputs 2

    return 0;
}
