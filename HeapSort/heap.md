# Heap Sort Program in C

This program demonstrates the implementation of the Heap Sort algorithm in C. Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It is similar to selection sort where we first find the maximum element and place it at the end. We repeat the same process for the remaining elements.

## Files

- [`HeapSort/heap.c`](HeapSort/heap.c): Contains the implementation of the Heap Sort algorithm and the main function to test it.

## How It Works

### Heap Sort Algorithm

The Heap Sort algorithm works as follows:

1. **Build a Max Heap**:
   - The algorithm starts by building a max heap from the input array. A max heap is a complete binary tree where the value of each node is greater than or equal to the values of its children.

2. **Extract Elements from the Heap**:
   - The algorithm repeatedly extracts the maximum element from the heap (the root of the heap) and places it at the end of the array.
   - The heap is then reduced in size, and the heap property is restored by calling the `heapify` function.

### Function Descriptions

#### `void heapify(int arr[], int n, int i)`

- Ensures that the subtree rooted at index `i` is a max heap.
- Parameters:
  - `arr[]`: The array representing the heap.
  - `n`: The size of the heap.
  - `i`: The index of the root of the subtree.

#### `void heapSort(int arr[], int n)`

- Sorts an array using the Heap Sort algorithm.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `n`: The number of elements in the array.

#### `int main()`

- Demonstrates the use of the `heapSort` function.
- Initializes an array with unsorted elements.
- Calls the `heapSort` function to sort the array.
- Prints the sorted array.

## Detailed Explanation

### Heapify Function

The `heapify` function is responsible for ensuring that the subtree rooted at a given index is a max heap. It works as follows:

1. **Initialization**:
   - Identify the largest element among the root, left child, and right child.

2. **Swapping**:
   - If the root is not the largest, swap it with the largest element.
   - Recursively call `heapify` on the affected subtree to ensure it satisfies the heap property.

### Heap Sort Function

The `heapSort` function is responsible for sorting the array using the heap sort algorithm. It works as follows:

1. **Build Max Heap**:
   - Convert the input array into a max heap by calling `heapify` on each non-leaf node, starting from the bottom of the heap.

2. **Extract Elements**:
   - Repeatedly extract the maximum element from the heap and place it at the end of the array.
   - Reduce the size of the heap and call `heapify` to restore the heap property.