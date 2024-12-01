# Bubble Sort Program in C

This program demonstrates the implementation of the Bubble Sort algorithm in C. Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Files

- [`BubbleSort/bubble.c`](BubbleSort/bubble.c): Contains the implementation of the Bubble Sort algorithm and the main function to test it.

## How It Works

### Bubble Sort Algorithm

The Bubble Sort algorithm works as follows:

1. **Initialization**:
   - The algorithm starts at the beginning of the array and compares the first two elements.

2. **Comparison and Swapping**:
   - If the first element is greater than the second element, they are swapped.
   - The algorithm then moves to the next pair of elements and repeats the comparison and swapping process.

3. **Repeat**:
   - The algorithm continues this process for each pair of adjacent elements in the array.
   - After each pass through the array, the largest element is "bubbled" to its correct position.
   - The process is repeated for the remaining unsorted part of the array until the entire array is sorted.

### Function Descriptions

#### `void bubbleSort(int arr[], int n)`

- Sorts an array using the Bubble Sort algorithm.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `n`: The number of elements in the array.

#### `int main()`

- Demonstrates the use of the `bubbleSort` function.
- Initializes an array with unsorted elements.
- Calls the `bubbleSort` function to sort the array.
- Prints the sorted array.

## Usage

1. Compile the program using a C compiler:

```sh
   gcc bubble.c -o bubble
```

2. Run the compiled program:

```sh
./bubble
```