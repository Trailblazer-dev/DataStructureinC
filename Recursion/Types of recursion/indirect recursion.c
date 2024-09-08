#include <stdio.h>

// Forward declarations
void odd(int n);
void even(int n);

// Function to check if a number is even
void even(int n) {
    if (n == 0) {
        printf("Number is even\n");
    } else {
        odd(n - 1);  // Indirect recursion: Calls odd()
    }
}

// Function to check if a number is odd
void odd(int n) {
    if (n == 0) {
        printf("Number is odd\n");
    } else {
        even(n - 1);  // Indirect recursion: Calls even()
    }
}

int main() {
    int num = 7;  // Example number
    if (num % 2 == 0) {
        even(num);  // Start with even()
    } else {
        odd(num);   // Start with odd()
    }
    return 0;
}


// indirect recursion  calls another function which then calls the first function