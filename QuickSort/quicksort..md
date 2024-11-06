# QuickSort Program in C

This program demonstrates the implementation of the QuickSort algorithm in C. QuickSort is an efficient, comparison-based, divide-and-conquer sorting algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

## How It Works

### QuickSort Algorithm

The QuickSort algorithm works as follows:

1. Partitioning:

 Select a pivot element from the array.<br>
 Rearrange the elements in the array so that all elements less than the pivot come before it, and all elements greater than the pivot come after it. This is known as the partitioning step.<br>
 The pivot element is now in its correct position in the sorted array.

2. Recursive Sorting:

 Recursively apply the above steps to the sub-array of elements with smaller values and the sub-array of elements with greater values.

### Function Descriptions

#### **void quicksort(int arr[], int low, int high)**
 Sorts an array using the QuickSort algorithm.<br>
  Parameters:<br>
   **arr[]:** The array to be sorted.<br>
   **low:** The starting index of the array segment to be sorted.<br>
   **high:** The ending index of the array segment to be sorted.

#### **int partition(int arr[], int low, int high)**

Partitions the array segment into two parts based on the pivot element.<br>
 Parameters:<br>
  **arr[]:** The array to be partitioned.<br>
  **low:** The starting index of the array segment to be partitioned.<br>
  **high:** The ending index of the array segment to be partitioned.<br>
**Returns:**
The index of the pivot element after partitioning.
### **void swap(int* a, int* b)**

Swaps the values of two integers.<br>
Parameters:<br>
a: Pointer to the first integer.<br>
b: Pointer to the second integer.<br>
### ***void printArray(int arr[], int size)***

Prints the elements of the array.<br>
Parameters:<br>
 **arr[]:** The array to be printed.
 **size:** The number of elements in the array