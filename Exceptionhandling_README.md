# Assignment 8

**Topic:** Exception Handling in C++

**Programming Language:** C++

**IDE:** Dev-C++

## Description
This program demonstrates exception handling in C++ using `try`, `throw`, and `catch` to handle division by zero. It prevents the program from performing an invalid division and allows execution to continue after the exception is handled.

## Objectives
- To understand exception handling in C++.
- To use `try`, `throw`, and `catch` statements.
- To handle division-by-zero errors.
- To understand how a program continues after handling an exception.

## Algorithm
1. Start the program.
2. Declare two integer variables, `a` and `b`.
3. Accept two numbers from the user.
4. Enter the `try` block.
5. Check whether the second number is zero.
6. If it is zero, throw an exception.
7. Otherwise, calculate and display the division result.
8. Catch the exception and display an error message.
9. Display a message indicating that the program continues.
10. Stop the program.

## Program Structure
- **main():** Controls the program execution.
- **try block:** Checks for division by zero and performs division.
- **throw statement:** Throws an exception when the divisor is zero.
- **catch block:** Handles the exception and displays an error message.

## Sample Output

**Case 1: Division by a non-zero number**
```text
Enter two numbers: 10 2
Division = 5
Program continues after exception handling.
```

**Case 2: Division by zero**
```text
Enter two numbers: 10 0
Exception caught: Division by zero is not allowed.
Program continues after exception handling.
```

## How to Compile and Run

Compile the program:

```bash
g++ ExceptionHandling.cpp -o ExceptionHandling
```

Run on Windows:

```bash
ExceptionHandling.exe
```

Run on Linux:

```bash
./ExceptionHandling
```

## Result
The program successfully demonstrates exception handling in C++ by detecting division by zero, throwing an exception, and handling it using a `catch` block.

## Conclusion
This assignment helped me understand exception handling in C++ using `try`, `throw`, and `catch`. It demonstrates how exceptions can handle runtime errors and allow the program to continue executing after an error is handled.
