# The binary search algorithm is an efficient method for finding a target value within a sorted array

 It works by repeatedly dividing the search interval in half. Here's a step-by-step explanation of how it operates:

## Initial Setup:

You start with an array that is already sorted.
You have two pointers or indices: left (initially set to the first index, 0) and right (initially set to the last index, n - 1).

## Calculate the Middle Index:

Compute the middle index mid using the formula mid = left + (right - left) / 2. This formula helps avoid potential overflow issues that could occur with (left + right) / 2.

## Compare the Middle Element:

Check if the element at the middle index arr[mid] is equal to the target value:
If arr[mid] is equal to the target, the search is successful, and the index mid is returned.
If arr[mid] is greater than the target, it means the target must be in the left half of the array. Therefore, adjust the right pointer to mid - 1 and repeat the process.
If arr[mid] is less than the target, it means the target must be in the right half of the array. Therefore, adjust the left pointer to mid + 1 and repeat the process.

## Repeat Until Found or Interval is Empty:

Continue the process of dividing the interval and comparing the middle element until the left pointer exceeds the right pointer. If this happens, it means the target is not in the array, and the function returns -1.

## Here's a simple example to illustrate:

Suppose you have a sorted array arr[] = {2, 3, 4, 10, 40} and you want to find the target value 10.

Initial pointers: left = 0, right = 4.
Calculate mid = 0 + (4 - 0) / 2 = 2.

The middle element is arr[2] = 4.

Since 4 is less than 10, adjust left to mid + 1 = 3.

Calculate new mid = 3 + (4 - 3) / 2 = 3. The middle element is arr[3] = 10.
Since 10 is equal to the target, the search is successful, and the index 3 is returned.