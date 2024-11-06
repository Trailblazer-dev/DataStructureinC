# Selection Sort Program in C

This program demonstrates the implementation of the selection sort algorithm in C.<br>Selection sort is a simple comparison-based sorting algorithm that divides the input list into two parts: **the sublist of items already sorted, which is built up from left to right at the front (left) of the list**, and **the sublist of items remaining to be sorted that occupy the rest of the list**.<br> Initially, the sorted sublist is empty, and the unsorted sublist is the entire input list.<br> The algorithm proceeds by finding the smallest (or largest, depending on the sorting order) element in the unsorted sublist, swapping it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

## How It Works

1. Initialization:

    The algorithm starts with the first element of the array and assumes it to be the minimum element (minIndex).

2. Finding the Minimum Element:

    The algorithm then iterates through the unsorted part of the array to find the actual minimum element.<br>
    For each element in the unsorted part, it compares the element with the current minimum element. If a smaller element is found, it updates the minIndex to the index of this smaller element.

3. Swapping Elements:

    After finding the minimum element in the unsorted part, the algorithm swaps this minimum element with the first element of the unsorted part.
    <br>
    This process places the minimum element in its correct position in the sorted part of the array.

4. Repeat:

    The algorithm repeats the above steps for the remaining unsorted part of the array until the entire array is sorted



## Basic Operation

The basic operation in Selection Sort is the **comparison** to find the minimum (or maximum) element in the unsorted part and swapping it with the first element in the unsorted part.

## Commercial Applications

Selection Sort is not commonly used in practice for large datasets due to its inefficiency. However, it can be useful in:

**Embedded systems** with limited memory, as it only requires a constant amount of additional space.
**Small lists** where its simplicity is more beneficial than its performance.

## Advantages and Disadvantages

### Advantages:

1. Simple to understand and implement.
2. Performs well on small datasets.
3. In-place, meaning it doesn’t require extra memory beyond a few variables.

### Disadvantages:

1. Inefficient on large datasets with a time complexity of 
𝑂(𝑛<sup>2</sup>).
2. Not stable, as it may change the relative order of equal elements when swapping.

## Stability and In-Place Nature

1. **Stable:** No, Selection Sort is not stable because swapping elements can change the relative order of equal elements.
2. **In-Place:** Yes, Selection Sort is an in-place algorithm, as it only requires a constant amount of additional space for swapping.

## Efficiency Class of the Algorithm

**Time Complexity:**
1. Best, Worst, and Average Case: 
𝑂(𝑛<sup>2</sup>) – Selection Sort always requires 𝑛−1
passes through the unsorted part of the list, each involving n−i comparisons, leading to a time complexity of 𝑂(𝑛<sup>2</sup>).
2. **Space Complexity:** 
O(1) because it only uses a small, fixed amount of extra memory for the swaps.
