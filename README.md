# Student Management System

**BCA 1st Semester — OOP Using C++ — Module 2 Mini Project**

This program stores details for three students, checks that marks are between 0 and 100, allows marks to be re-evaluated, and displays each student's result. The pass mark is 40.

## Concepts used

- `Student` class with private data members: roll number, name, and marks
- Public getters, `setMarks()`, and `display()` functions
- A parameterized constructor that uses `setMarks()` to validate marks
- An array containing three `Student` objects
- A separate `printResult(Student student)` function that uses public getters

## Compile

You need a C++ compiler such as g++.

On Windows with MinGW g++:

```text
g++ -std=c++11 student_management.cpp -o student_management.exe
```

On Linux or macOS:

```text
g++ -std=c++11 student_management.cpp -o student_management
```

## Run

On Windows:

```text
.\student_management.exe
```

On Linux or macOS:

```text
./student_management
```

Enter each student's roll number, name, and marks when asked. If marks are outside 0 to 100, the program rejects them and asks for valid marks. You can then choose to re-evaluate a student's marks. The final result shows **Pass** for marks of 40 or more and **Fail** otherwise.

## GitHub submission

Upload both `student_management.cpp` and this `README.md` to your GitHub repository. Check that the repository visibility and sharing settings let your faculty view it, then submit the repository link.
