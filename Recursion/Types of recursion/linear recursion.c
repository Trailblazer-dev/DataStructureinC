#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;  // Base case
    }
    return n + sum(n - 1);  // Linear recursion
}

int main() {
    int num = 5;
    printf("Sum of first %d natural numbers is %d\n", num, sum(num));
    return 0;      
}
// linear recursion makes only one recursive call