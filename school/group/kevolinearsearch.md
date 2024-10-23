# Linear Search Program in C

This program demonstrates a recursive linear search algorithm in C. The linear search algorithm searches for a target value within an array by checking each element sequentially, starting from the end of the array and moving towards the beginning.

## Files

**kevolinearsearch.c:** Contains the implementation of the recursive linear search algorithm and the main function to test it.

## How It Works

### Linear Search Function

The LinearSearch function performs a linear search on an array using recursion. It takes three parameters:

***int arr[]:*** The array of integers to search within.

***int size:*** The current size of the array segment being considered.

***int target:*** The target value to search for.

### *The function works as follows:*

***Base Case 1:*** If the size of the array segment becomes zero (size == 0), it means the entire array has been checked without finding the target. The function returns -1 to indicate that the target is not present in the array.

***Base Case 2:*** If the last element of the current array segment (arr[size - 1]) matches the target, the function returns the index of this element (size - 1)
.
***Recursive Case:*** If the last element does not match the target, the function calls itself with the size reduced by one (size - 1), effectively ignoring the last element and continuing the search in the remaining array segment.

## Main Function

The main function demonstrates the use of the LinearSearch function:

An array arr[] is initialized with the values {4, 5, 9, 7, 67, 90}.  
The size of the array is calculated using sizeof(arr) / sizeof(arr[0]), which gives the number of elements in the array.  
The target value to search for is set to 7.  
The LinearSearch function is called with the array, its size, and the target value. The result is stored in the variable result.

If the result is not -1, it means the target was found, and the index of the target is printed. Otherwise, a message indicating that the target was not found is printed.  
The program returns 0 to indicate successful execution.

## Usage  

1. Compile the program using a C compiler:

```c
gcc kevolinearsearch.c -o kevolinearsearch
```

2. Run the compiled program:

```bash
./kevolinearsearch
```

3. The program will output whether the target element was found in the array and its position if found.

## Example Output

This output indicates that the target element 7 was found at index 3 in the array.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Author

[Your Name] - [Your Email]

Feel free to reach out if you have any questions or suggestions!
