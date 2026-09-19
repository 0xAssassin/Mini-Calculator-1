# Mini Calculator 1

## Simple Calculator in C

A simple command-line calculator written in **C language**. This project performs basic arithmetic operations on two numbers based on a user-provided operator, using **if-else conditional statements**.

## Features

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`x` or `*`)
* Division (`/`)
* Division-by-zero protection
* Supports floating-point numbers
* Simple and beginner-friendly command-line interface

## How It Works

The program asks the user to enter an operation in the following format:

```text
12 + 37
```

It then reads:

* **Operand 1** → `12`
* **Operator** → `+`
* **Operand 2** → `37`

The calculator performs the selected operation and displays the result.

## Supported Operators

| Operator | Operation      |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `x`      | Multiplication |
| `*`      | Multiplication |
| `/`      | Division       |

## Example

```text
Operators: '+', '-', 'x', '/'
Enter your operation like this (12 + 37): 12 x 5

12.00 x 5.00 = 60.00
```

Another example:

```text
Enter your operation like this (12 + 37): 75 / 3

75.00 / 3.00 = 25.00
```

## Concepts Used

This project demonstrates some basic C programming concepts:

* Variables
* `char` and `float` data types
* `scanf()` for user input
* `printf()` for output
* `if`, `else if`, and `else`
* Logical operators
* Arithmetic operators
* Basic input validation

## How to Run

### 1. Clone the repository

```bash
git clone <your-repository-url>
```

### 2. Open the project folder

```bash
cd <project-folder>
```

### 3. Compile the program

Using GCC:

```bash
gcc calculator.c -o calculator
```

### 4. Run the program

On Windows:

```bash
calculator
```

On Linux/macOS:

```bash
./calculator
```

## Note

The calculator currently focuses on basic arithmetic operations and is designed as a beginner-level C project.

