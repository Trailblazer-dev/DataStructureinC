#include <stdio.h>

int tailFactorial(int n, int acc) {
    if (n == 0) {
        return acc;  // Base case
    }
    return tailFactorial(n - 1, acc * n);  // Tail recursion
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, tailFactorial(num, 1));
    return 0;
}
// a tail recursion  the recursive call is the last operation in the functiong
