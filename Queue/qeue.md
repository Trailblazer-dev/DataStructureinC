# Queue Program in C

This program demonstrates the implementation of a queue using an array in C. The queue follows the First-In-First-Out (FIFO) principle, where elements are added to the rear of the queue and removed from the front.

## Files

- `qeue.c`: Contains the implementation of the queue operations and the main function to test them.

## How It Works

### Queue Operations

The program implements the following queue operations:

1. **Enqueue**: Adds an element to the rear of the queue.
2. **Dequeue**: Removes an element from the front of the queue.
3. **Display**: Displays all the elements in the queue.

### Function Descriptions

#### `void enqueue(int value)`

- Adds an element to the rear of the queue.
- Parameters:
  - `value`: The value to be added to the queue.

#### `void deQueue()`

- Removes an element from the front of the queue.
- If the queue is empty (`front == -1`), it prints "Queue is empty. Cannot dequeue".
- Else, it performs the following steps:
  - Prints the value of the element being dequeued.
  - Increments the `front` index to point to the next element.
  - If `front` exceeds `rear`, it resets both `front` and `rear` to `-1`, indicating that the queue is now empty.

#### `void displayQueue()`

- Displays all the elements in the queue.
- If the queue is empty, it prints "Queue is empty".

### Main Function

The `main` function demonstrates the use of the queue operations. It performs the following steps:

1. Enqueues several elements into the queue.
2. Displays the queue elements.
3. Dequeues elements from the queue and displays the queue after each dequeue operation.

### Example Output

```
Queue elements are:
10 20 30 40 50 
Dequeued element: 10
Queue elements are:
20 30 40 50 
Dequeued element: 20
Queue elements are:
30 40 50
```

## Usage

1. Compile the program using a C compiler:

````sh
 gcc qeue.c -o queue

 ````

2. Run the compiled program:

 ```sh
    ./queue

````

