#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;  // Base case: target not found

    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;  // Base case: target found
    if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);  // Recursive case
    return binarySearch(arr, mid + 1, right, target);  // Recursive case
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;  // Example target

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
