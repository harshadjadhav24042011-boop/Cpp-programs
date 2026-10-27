# Student Management System in C++

## 1. Project Title
**Student Management System Using Object-Oriented Programming in C++**

## 2. Problem Statement
Develop a menu-driven C++ program to manage student details using object-oriented programming concepts. The program allows users to enter student information, display details, update marks, and count the number of student objects created.

The program demonstrates classes, objects, the `this` pointer, inline functions, static members, friend classes, constructors, and different types of functions in C++.

## 3. Objectives
- To understand classes and objects in C++.
- To implement the `this` pointer.
- To demonstrate inline functions.
- To understand static data members and static member functions.
- To implement friend classes.
- To understand constructors and member functions.
- To develop a menu-driven application using object-oriented programming.

## 4. Theory

### Class
A class is a user-defined data type that combines data members and member functions into a single unit. In this project, the `Student` class stores student information and provides functions to manage it.

### Objects
An object is an instance of a class. Objects are used to access the public members of a class and perform operations. In this project, `Student` and `StudentDetails` objects perform student management operations.

### This Pointer
The `this` pointer is an implicit pointer available inside non-static member functions. It points to the current object. It is used to distinguish class data members from function parameters having the same names.

### Inline Function
An inline function is a function declared using the `inline` keyword. It suggests that the compiler may replace a function call with the function's code to reduce function-call overhead. The compiler decides whether to apply this optimization.

### Static Data Member
A static data member belongs to the class rather than to individual objects. Only one shared copy exists for the class. In this project, the static variable `count` tracks the number of `Student` objects constructed.

### Static Member Function
A static member function belongs to the class and can be called using the class name without creating another object. It can directly access static members of the class. In this project, `showCount()` displays the total number of constructed Student objects.

### Friend Class
A friend class is a class that is permitted to access the private and protected members of another class. In this project, `StudentDetails` is declared as a friend of `Student`, allowing it to access student information and update marks.

### Constructors
A constructor is a special member function that is automatically called when an object is created. It initializes the object's data members. This project uses a default constructor and a parameterized constructor.

### Function Types
The program demonstrates several types of functions:

- **Member Function:** A function defined inside or associated with a class, such as `setData()`.
- **Inline Function:** A function declared with the `inline` keyword, such as `display()`.
- **Static Member Function:** A class-level function, such as `showCount()`.
- **Friend Class Functions:** Functions in `StudentDetails` that access private members of `Student`.
- **Parameterized Function:** A function that accepts arguments, such as `setData()`.
- **Constructor:** A special function used to initialize objects.

## 5. Working of the Program
The program displays a menu that allows the user to enter student details, display information, update marks, access details through the friend class, and view the total number of Student objects created.

The `Student` class stores the roll number, name, and marks. The `this` pointer assigns input values to the corresponding data members. The inline function displays the details, while the static member function displays the object count. The friend class accesses private student information and updates marks when requested.

## 6. Software Requirements
- **Programming Language:** C++
- **Compiler:** GCC, MinGW, or another compatible C++ compiler
- **IDE/Editor:** Visual Studio Code, Code::Blocks, or Dev-C++
- **Operating System:** Windows, Linux, or macOS

## 7. Algorithm
1. Start the program.
2. Define the `Student` class with private data members and public member functions.
3. Declare and initialize the static data member.
4. Implement constructors, the `this` pointer, an inline function, and a static member function.
5. Declare `StudentDetails` as a friend class.
6. Create the required objects.
7. Display the menu of available operations.
8. Accept the user's choice.
9. Perform the selected operation.
10. Repeat the menu until the user chooses to exit.
11. Stop the program.

## 8. Applications
- Student record management systems.
- School and college administration software.
- Academic programming exercises.
- Learning object-oriented programming concepts.
- Understanding access control and communication between classes.

## 9. Advantages
- Organizes data using classes and objects.
- Demonstrates important object-oriented programming concepts.
- Provides a simple menu-driven interface.
- Shows how friend classes can access private data.
- Uses static members to maintain shared information.

## 10. Limitations
- Stores details for only one student at a time.
- Does not permanently save information to a file or database.
- Student details are lost when the program terminates.
- The object counter tracks constructed objects, not the number of students registered.

## 11. Conclusion
This assignment provides practical experience with fundamental object-oriented programming concepts in C++. It demonstrates how classes and objects organize data, how the `this` pointer refers to the current object, how inline functions are declared, how static members maintain shared information, and how friend classes access private members. The program helps develop a clear understanding of C++ functions and object-oriented design
