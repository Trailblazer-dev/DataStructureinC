#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Define the maximum size of the stack
typedef struct 
{
    int data[MAX]; // Array to store stack elements
    int top;
    // Index of the top element
}Stack;
// Function to initialize the stack
void initStack(Stack *stack)
{
    stack->top = -1; // Stack is empty when top is -1
};
// Function to check if the stack is full
int isFull(Stack *stack)
{
    return stack->top == MAX - 1;
};
// Function to check if the stack is empty
int isEmpty(Stack *stack)
{
    return stack->top == -1;
};
// Function to push an element onto the stack
void push(Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack overflow! Cannot push %d.\n", value);
        return;
    }
    stack->data[++stack->top] = value; // Increment top and push value
    printf("%d pushed onto the stack.\n", value);
}
// Function to pop an element from the stack
int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow! Cannot pop an element.\n");
        return - 1; // Return a sentinel value when stack is empty
    }
    return stack->data[stack->top--]; // Return the top element and decrement top
};
// Function to peek at the top element of the stack
int peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty! No element to peek.\n");
        return -1;
    }
    return stack->data[stack->top]; // Return the top element without    removing it
}
// Function to print all elements of the stack
void printStack(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}
// Main function to test the stack implementation
int main()
{
    Stack stack;
    // Declare a stack
    initStack(&stack); // Initialize the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printStack(&stack);                  // Stack elements: 10 20 30
    printf("Peek: %d\n", peek(&stack));  // Peek: 30
    printf("Popped: %d\n", pop(&stack)); // Popped: 30
    printStack(&stack);
    // Stack elements: 10 20
    push(&stack, 40);
    push(&stack, 50);
    push(&stack, 60);   // Continue pushing elements
    printStack(&stack); // Stack elements: 10 20 40 50 60
    return 0;
}