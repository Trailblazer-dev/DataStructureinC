# The Tower of Hanoi is a classic problem in computer science and mathematics that involves moving a set of disks from one rod to another, following specific rules


 The rules are: only one disk can be moved at a time, a disk can only be placed on top of a larger disk or an empty rod, and all disks start on one rod and must be moved to another rod using an auxiliary rod.

The code begins by including the standard input-output library, <stdio.h>, which is necessary for using the printf function to display output.

## The towerOfHanoi function is defined to solve the problem recursively.

It takes four parameters: an integer n representing the number of disks, and three characters from, to, and aux representing the names of the rods.

The function first checks if n is equal to 1, which is the base case. If n is 1, it prints a message indicating that disk 1 should be moved from the from rod to the to rod and then returns.

If n is greater than 1, the function performs the following steps recursively:

It calls itself to move n-1 disks from the from rod to the aux rod, using the to rod as auxiliary. This step effectively moves the top n-1 disks out of the way.

It prints a message indicating that the nth disk should be moved from the from rod to the to rod.

It calls itself again to move the n-1 disks from the aux rod to the to rod, using the from rod as auxiliary. This step moves the n-1 disks on top of the nth disk on the to rod.

## The main function demonstrates the use of the towerOfHanoi function. 

It initializes an integer n to 3, representing the number of disks. It then calls the towerOfHanoi function with n, 'A', 'C', and 'B' as arguments, where 'A', 'B', and 'C' are the names of the rods. 

The function call will print the sequence of moves required to solve the Tower of Hanoi problem for 3 disks.

The program returns 0 to indicate successful execution. This implementation effectively demonstrates the power of recursion in solving complex problems by breaking them down into simpler subproblems