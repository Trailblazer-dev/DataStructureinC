# Insertion Sort Program in C

This program demonstrates the implementation of the Insertion Sort algorithm in C. Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

## Files

- [`InsertionSort/insertion.c`](InsertionSort/insertion.c): Contains the implementation of the Insertion Sort algorithm and the main function to test it.

## How It Works

### Insertion Sort Algorithm

The Insertion Sort algorithm works as follows:

1. **Initialization**:
   - The algorithm starts with the second element of the array (index 1) and assumes the first element (index 0) is already sorted.

2. **Insertion**:
   - For each element in the unsorted part of the array, the algorithm compares it with the elements in the sorted part.
   - It shifts the elements in the sorted part that are greater than the current element to one position ahead of their current position.
   - The current element is then inserted into its correct position in the sorted part of the array.

3. **Repeat**:
   - The algorithm repeats the above steps for each element in the unsorted part of the array until the entire array is sorted.

### Function Descriptions

#### `void insertionSort(int arr[], int n)`

- Sorts an array using the Insertion Sort algorithm.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `n`: The number of elements in the array.

#### `int main()`

- Demonstrates the use of the `insertionSort` function.
- Initializes an array with unsorted elements.
- Calls the `insertionSort` function to sort the array.
- Prints the sorted array.

## Usage

1. Compile the program using a C compiler:

```sh
   gcc insertion.c -o insertion
   ```
2. Run the compiled program:

```sh
./insertion
```