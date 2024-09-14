# N-Queens Solver

This C++ program solves the **N-Queens problem**, where the objective is to place `N` queens on an `N x N` chessboard such that no two queens threaten each other. Queens can attack each other if they are on the same row, column, or diagonal. The program uses recursion and backtracking to find all valid solutions for any given `N`.

## Features

- Solves the N-Queens problem for any board size `N`.
- Optionally prints all solutions in a human-readable format.
- Counts and displays the number of solutions for each board size.

## How It Works

The program starts by taking two inputs from the user:

1. **Maximum value of N**: The largest board size for which the solutions should be computed.
2. **Print all solutions**: A boolean input to decide if all solutions should be printed.

The program uses a recursive backtracking algorithm to place queens one row at a time. It checks if each queen's position is safe (i.e., it does not share the same row, column, or diagonal with any previously placed queen). When a valid configuration is found, the solution is either printed or counted based on the user's choice.

## Compilation

To compile the program, use a C++ compiler such as `g++`. Open a terminal or command prompt in the directory containing the source code and run:

```bash
g++ -o nqueens nqueens.cpp
```

##Usage

Run the executable files

```bash
./nqueens
```

The program will prompt for:

1. Maximum value of N: The maximum board size for which the solutions will be computed.
2. Print solutions: Enter 1 to print all solutions or 0 to skip printing.

Example:
```bash
Enter the maximum value of N: 8
Do you want to print all solutions? (1 for Yes, 0 for No): 1
```

##Example Output

```bash
Enter the maximum value of N: 4
Do you want to print all solutions? (1 for Yes, 0 for No): 1

Q . . . 
. . Q . 
. Q . . 
. . . Q 

. Q . . 
. . . Q 
Q . . . 
. . Q . 

Number of solutions for 4-Queens: 2
Number of solutions for 1-Queens: 1
Number of solutions for 2-Queens: 0
Number of solutions for 3-Queens: 0
```

