# CodSoft-cpp-internship

# TASK 1

# Guessing Game

Welcome to the Guessing Game repository! This simple console-based C++ program allows users to guess a randomly generated number between 1 and 100.

## Introduction

The Guessing Game is a fun and interactive way to practice your guessing skills. The program generates a random number between 1 and 100, and the player's objective is to guess the correct number within the fewest attempts possible.

## Features

- Randomly generates a number between 1 and 100.
- Allows the user to input guesses and provides feedback on whether the guess is too high, too low, or correct.
- Counts the number of attempts taken by the user to guess the correct number.

## Usage

To play the Guessing Game, follow these steps:

1. Compile the program using a C++ compiler.
2. Run the compiled executable file.
3. The program will prompt you to enter a guess between 1 and 100.
4. After each guess, the program will provide feedback on whether the guess is too high, too low, or correct.
5. Continue guessing until you correctly guess the number.
6. The program will display the number of attempts it took to guess the correct number.

## Example usage:

bash

$ g++ -o guessing_game guessing_game.cpp

$ ./guessing_game


## Dependencies

- None

The Guessing Game program has no external dependencies and can be compiled and run using any standard C++ compiler.


# TASK 2

# Basic Arithmetic Calculator

This is a simple command-line calculator program written in C++ that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Features

- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers
- Module of two numbers
- Error handling for division by zero

## Prerequisites

- C++ compiler 

## How to Use

1. Clone the repository or download the `calculator.cpp` file.
2. Compile the source code using a C++ compiler.
3. Run the compiled executable.
4. Enter two numbers when prompted.
5. Choose an operation to perform (+, -, *, /).
6. View the result.

## Usage Example

```bash
$ g++ calculator.cpp -o calculator
$ ./calculator
Enter two numbers: 10 5
Enter operator (+, -, *, /,%): +
Result: 15
```

## Notes

- Error message displayed for division by zero.

# TASK 3

# To-Do List Application

This simple console-based To-Do List application allows users to manage their tasks efficiently.

## Features

- Add tasks to the list
- View all tasks
- Mark tasks as completed
- Remove tasks from the list
- Exit the application

## How to Use

1. **Add Task**: Enter a task description when prompted. The task will be added to the list if there is space available.
2. **View Tasks**: View all tasks along with their completion status (Completed/Pending).
3. **Mark Task as Completed**: Enter the index of the task you want to mark as completed.
4. **Remove Task**: Enter the index of the task you want to remove from the list.
5. **Exit**: Exit the application.

## Instructions

- To add a task, choose option 1 and enter the task description.
- To view all tasks, choose option 2.
- To mark a task as completed, choose option 3 and enter the index of the task.
- To remove a task, choose option 4 and enter the index of the task.
- To exit the application, choose option 5.

## How to Compile and Run

1. **Compile**: Compile the code using any C++ compiler.
   ```
   g++ -o todo todo.cpp
   ```
2. **Run**: Execute the compiled file.
   ```
   ./todo
   ```

## Code Structure

The code consists of the following components:

- **Task Struct**: Represents a task with a description and completion status.
- **addTask Function**: Adds a task to the To-Do List.
- **viewTasks Function**: Displays all tasks along with their completion status.
- **markCompleted Function**: Marks a task as completed.
- **removeTask Function**: Removes a task from the list.
- **Main Function**: Entry point of the program containing the user interface.


# Author

These projects are created by MUSKAAN FAYYAZ.



