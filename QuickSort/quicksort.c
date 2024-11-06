#include <stdio.h>

void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);  // Partition the array
        quicksort(arr, low, pivot_index - 1);         // Sort elements before pivot
        quicksort(arr, pivot_index + 1, high);        // Sort elements after pivot
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];    // Choose the first element as the pivot
    int left = low + 1;
    int right = high;

    while (left <= right) {
        // Move the `left` pointer to the right until an element >= pivot is found
        while (left <= right && arr[left] <= pivot) {
            left++;
        }
        // Move the `right` pointer to the left until an element < pivot is found
        while (left <= right && arr[right] > pivot) {
            right--;
        }

        // Swap elements at left and right pointers if they have not crossed
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    // Place pivot in its correct position by swapping with `arr[right]`
    arr[low] = arr[right];
    arr[right] = pivot;

    return right;  // Return the final position of the pivot
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    quicksort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
