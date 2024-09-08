#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);  // Move n-1 disks from 'from' to 'aux'
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);  // Move the nth disk
    towerOfHanoi(n - 1, aux, to, from);  // Move n-1 disks from 'aux' to 'to'
}

int main() {
    int n = 3;  // Example number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
