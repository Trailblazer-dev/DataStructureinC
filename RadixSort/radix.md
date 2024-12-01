# Radix Sort Program in C

This program demonstrates the implementation of the Radix Sort algorithm in C. Radix Sort is a non-comparative sorting algorithm that sorts numbers by processing individual digits. It processes digits from the least significant digit (LSD) to the most significant digit (MSD) or vice versa.

## Files

- [`RadixSort/radix.c`](RadixSort/radix.c): Contains the implementation of the Radix Sort algorithm and the main function to test it.

## How It Works

### Radix Sort Algorithm

The Radix Sort algorithm works as follows:

1. **Find the Maximum Number**:
   - The algorithm starts by finding the maximum number in the array to determine the number of digits in the largest number.

2. **Sort by Each Digit**:
   - The algorithm sorts the array by each digit, starting from the least significant digit (LSD) to the most significant digit (MSD).
   - It uses a stable counting sort algorithm as a subroutine to sort the digits.

### Function Descriptions

#### `void countingSort(int arr[], int n, int exp)`

- Performs a counting sort on the array based on the digit represented by `exp`.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `n`: The number of elements in the array.
  - `exp`: The exponent representing the current digit position (1 for units, 10 for tens, etc.).

#### `void radixSort(int arr[], int n)`

- Sorts an array using the Radix Sort algorithm.
- Parameters:
  - `arr[]`: The array to be sorted.
  - `n`: The number of elements in the array.

#### `int main()`

- Demonstrates the use of the `radixSort` function.
- Initializes an array with unsorted elements.
- Calls the `radixSort` function to sort the array.
- Prints the sorted array.

## Detailed Explanation

### Counting Sort Function

The `countingSort` function is responsible for sorting the array based on a specific digit. It works as follows:

1. **Initialization**:
   - Create a count array to store the count of each digit.
   - Create an output array to store the sorted elements.

2. **Counting**:
   - Count the occurrences of each digit in the current digit position.

3. **Cumulative Count**:
   - Update the count array to contain the cumulative count of digits.

4. **Building the Output Array**:
   - Place the elements in the output array based on the cumulative count and the current digit position.

5. **Copying to Original Array**:
   - Copy the sorted elements from the output array back to the original array.

### Radix Sort Function

The `radixSort` function is responsible for sorting the array using the Radix Sort algorithm. It works as follows:

1. **Find the Maximum Number**:
   - Determine the maximum number in the array to know the number of digits.

2. **Sort by Each Digit**:
   - Use the `countingSort` function to sort the array by each digit, starting from the least significant digit (LSD) to the most significant digit (MSD).
