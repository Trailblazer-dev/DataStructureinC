#include <stdio.h>

void headRecursion(int n) {
    if (n > 0) {
        headRecursion(n - 1);  // Recursive call before any operations
        printf("%d ", n);
    }
}

int main() {
    int num = 5;
    printf("Head recursion output: ");
    headRecursion(num);
    printf("\n");
    return 0;
}
// head recursion happens before any operation