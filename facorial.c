#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a stack node structure
struct Node {
    int data;
    struct Node* next;
};

// Define a stack structure
struct Stack {
    struct Node* top;
};

// Function to push a value onto the stack
void push(struct Stack* stack, int value) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = value;
    node->next = stack->top;
    stack->top = node;
}

// Function to pop a value off the stack
int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Error: Stack underflow.\n");
        exit(1);
    }
    int value = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return value;
}

// Function to calculate the factorial of a number using a stack
int factorial(int n) {
    struct Stack stack;
    stack.top = NULL;
    int i;
    for (i = n; i >= 1; i--) {
        push(&stack, i);
    }
    int result = 1;
    while (stack.top != NULL) {
        result *= pop(&stack);
    }
    return result;
}

// Example usage of the factorial function
int main() {
    int n = 5;
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}