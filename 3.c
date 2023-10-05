#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1; // Initialize the top of the stack to -1

// Function to push an element onto the stack
void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = item;
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1; // Return a sentinel value for underflow
    }
    return stack[top--];
}

// Function to check if the stack is empty
bool isEmpty() {
    return top == -1;
}

// Function to get the top element without removing it
int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value for an empty stack
    }
    return stack[top];
}

int main() {
    push(1);
    push(2);
    push(3);

    printf("Top element: %d\n", peek()); // Outputs 3

    while (!isEmpty()) {
        printf("%d ", pop()); // Outputs 3 2 1 (in LIFO order)
    }

    printf("\n");

    return 0;
}
