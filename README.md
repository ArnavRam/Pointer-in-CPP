# Experiment 9 - Pointers in C++

---

## Aim
- To understand and implement pointers in C++, exploring their behavior, arithmetic, and applications in memory manipulation and data access.

---

## Tools Used
- Visual Studio Code
- MinGW-w64 with g++ Compiler

---

## Theory
A **pointer** is a variable that stores the memory address of another variable. It allows for indirect access and manipulation of data, enabling dynamic memory management and efficient data handling.

- **Declaration:** Pointers are declared using the `*` symbol (e.g., `int *ptr;`).
- **Initialization:** They are initialized with the address of a variable using the `&` (address-of) operator (e.g., `ptr = &var;`).
- **Dereferencing:** The value stored at the memory address is accessed by dereferencing the pointer with the `*` operator (e.g., `value = *ptr;`).

### Pointer Arithmetic
Pointers can be incremented or decremented. When a pointer is incremented (`ptr++`), it moves forward in memory by the size of the data type it points to. This is particularly useful for traversing arrays. Subtracting two pointers gives the number of elements between them.

---

## Algorithm / Logic

### Program 1: Reverse an Array Using Pointers
1.  **Start**
2.  Declare an integer array `arr`.
3.  Initialize two pointers: `start` pointing to the first element (`arr`) and `end` pointing to the last element (`arr + size - 1`).
4.  Use a `while` loop that continues as long as `start < end`.
5.  Inside the loop, swap the values at the pointers: `swap(*start, *end)`.
6.  Increment the `start` pointer and decrement the `end` pointer.
7.  After the loop, print the reversed array.
8.  **End**

### Program 2: Reverse a String Using Pointers
1.  **Start**
2.  Declare a character array (C-style string) and get input from the user.
3.  Calculate the length of the string using `strlen()`.
4.  Initialize a pointer `ptr` to the last character of the string.
5.  Use a `while` loop that continues as long as the pointer is at or after the start of the string.
6.  Inside the loop, print the character `*ptr`.
7.  Decrement the pointer `ptr--`.
8.  **End**

### Program 3: Pointer Arithmetic Across Data Types
1.  **Start**
2.  Declare variables of different types: `int`, `float`, `char`, `bool`.
3.  Declare a pointer for each data type and assign it the address of the corresponding variable.
4.  For each pointer, print its memory address before and after an increment operation (`ptr++`).
5.  Observe how the memory address jumps by `sizeof(int)`, `sizeof(float)`, etc.
6.  **End**

### Program 4: Value Difference vs. Pointer Distance
1.  **Start**
2.  Declare an integer array `arr`.
3.  Initialize two pointers, `ptr1` pointing to `&arr[4]` and `ptr2` pointing to `&arr[1]`.
4.  Calculate the difference in values: `*ptr1 - *ptr2`.
5.  Calculate the distance between pointers: `ptr1 - ptr2`.
6.  Print both results, noting that the first is the difference between the numbers and the second is the number of elements between the pointers.
7.  **End**

---

## Conclusion
Pointers in C++ allow for direct memory manipulation, enabling efficient and flexible programming. This experiment demonstrated the fundamentals of declaring, initializing, and dereferencing pointers. By implementing algorithms for array reversal and exploring pointer arithmetic, a strong foundation for advanced concepts like dynamic memory allocation, complex data structures, and system-level coding has been established.
