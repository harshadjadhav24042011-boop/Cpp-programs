# Assignment: Polymorphism in C++

**Topic:** Runtime Polymorphism

**Programming Language:** C++

**IDE:** Dev-C++

## Description
This program demonstrates runtime polymorphism in C++ using classes, inheritance, virtual functions, and function overriding. The `Animal` base class is inherited by the `Dog` and `Cat` classes, which provide their own implementations of the `sound()` function.

## Objectives
- To understand polymorphism in C++.
- To implement runtime polymorphism using virtual functions.
- To demonstrate function overriding through inheritance.
- To understand the use of base-class pointers.

## Concepts Used
- Classes and Objects
- Inheritance
- Virtual Functions
- Function Overriding
- Runtime Polymorphism

## Algorithm
1. Define the `Animal` class with a virtual `sound()` function.
2. Create the `Dog` and `Cat` classes inheriting from `Animal`.
3. Override the `sound()` function in both derived classes.
4. Create objects of `Dog` and `Cat`.
5. Use an `Animal` pointer to call the overridden functions.
6. Display the output.

## Program Structure
- **Animal:** Base class containing the virtual `sound()` function.
- **Dog:** Derived class that displays a barking message.
- **Cat:** Derived class that displays a meowing message.
- **main():** Creates objects and demonstrates runtime polymorphism.

## Sample Output
```text
Dog barks.
Cat meows.
```

## How to Compile and Run

Compile the program using:

```bash
g++ Polymorphism.cpp -o Polymorphism
```

Run on Windows:

```bash
Polymorphism.exe
```

Run on Linux:

```bash
./Polymorphism
```

## Result
The program successfully demonstrates runtime polymorphism using virtual functions and function overriding in C++.

## Conclusion
This assignment explains how runtime polymorphism allows the same function call to produce different behaviors depending on the actual object. It also demonstrates the importance of inheritance and virtual functions in Object-Oriented Programming.
