#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int data)
{
    if (top == MAX - 1)
    { // Stack overflow condition
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}

// Function to pop an element from the stack
void pop()
{
    if (top == -1)
    { // Stack underflow condition
        printf("Stack underflow\n");
        return;
    }
    printf("Deleted %d\n", stack_arr[top]);
    top--; // Decrement the top pointer
}

// Function to print the elements of the stack
void print_stack()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5); // This should trigger "Stack overflow"

    print_stack(); // Print the current elements in the stack

    pop();         // Pop an element
    print_stack(); // Print the stack after popping

    return 0;
}
