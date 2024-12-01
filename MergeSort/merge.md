# Merge Sort Program in C

This program demonstrates the implementation of the Merge Sort algorithm in C. Merge Sort is an efficient, stable, comparison-based, divide-and-conquer sorting algorithm. It works by dividing the unsorted list into n sublists, each containing one element, and then repeatedly merging sublists to produce new sorted sublists until there is only one sublist remaining.

## Files

- [`MergeSort/merge.c`](MergeSort/merge.c): Contains the implementation of the Merge Sort algorithm and the main function to test it.

## How It Works

### Merge Sort Algorithm

The Merge Sort algorithm works as follows:

1. **Divide**:
   - The algorithm divides the array into two halves until each sub-array contains only one element.

2. **Conquer**:
   - The algorithm recursively sorts each sub-array.

3. **Combine**:
   - The algorithm merges the two sorted halves to produce a single sorted array.

### Function Descriptions

#### `void merge(int arr[], int l, int m, int r)`

- Merges two sub-arrays of `arr[]`.
  - The first sub-array is `arr[l..m]`.
  - The second sub-array is `arr[m+1..r]`.
- Parameters:
  - `arr[]`: The array containing the sub-arrays to be merged.
  - `l`: The starting index of the first sub-array.
  - `m`: The ending index of the first sub-array.
  - `r`: The ending index of the second sub-array.

#### `void mergeSort(int arr[], int l, int r)`

- Sorts an array using the Merge Sort algorithm.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `l`: The starting index of the array segment to be sorted.
  - `r`: The ending index of the array segment to be sorted.

#### `int main()`

- Demonstrates the use of the `mergeSort` function.
- Initializes an array with unsorted elements.
- Calls the `mergeSort` function to sort the array.
- Prints the sorted array.

## Detailed Explanation

### Merge Function

The `merge` function is responsible for merging two sub-arrays into a single sorted sub-array. It works as follows:

1. **Initialization**:
   - Create temporary arrays to hold the elements of the two sub-arrays.
   - Copy the elements of the sub-arrays into the temporary arrays.

2. **Merging**:
   - Compare the elements of the two temporary arrays and copy the smaller element back into the original array.
   - Continue this process until all elements of the temporary arrays have been copied back into the original array.

3. **Copy Remaining Elements**:
   - If there are any remaining elements in the temporary arrays, copy them back into the original array.

### Merge Sort Function

The `mergeSort` function is responsible for dividing the array into sub-arrays and sorting them. It works as follows:

1. **Base Case**:
   - If the array segment contains only one element, it is already sorted.

2. **Recursive Case**:
   - Divide the array segment into two halves.
   - Recursively sort each half.
   - Merge the two sorted halves using the `merge` function.
