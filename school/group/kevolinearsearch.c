#include <stdio.h>

// a recursive function

int LinearSearch(int arr[], int size, int target)
{
    // basecase.if the current size of array becomes zero.meaning we have checked the array without finding the target

    if (size == 0)
    {
        return -1;
    }

    // basecase checks whether the last element is the target
    if (arr[size - 1] == target)
    {

        return size - 1;
    }
    return LinearSearch(arr, size - 1, target); // if the current element does not match the target it calls itself reducing its size by 1
}
int main()
{
    int arr[] = {4, 5, 9, 7, 67, 90};
    int size = sizeof(arr) / sizeof(arr[0]); // size of the array in bytes divide size of one element
    int target = 7;
    int result = LinearSearch(arr, size, target);
    if (result != -1)
    {
        printf("Element found at %d position", result);
    }
    else
    {
        printf("Element not found in the array");
    }
    return 0;
}