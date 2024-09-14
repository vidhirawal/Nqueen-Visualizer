#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

// Function to print the chessboard
void printSolution(const vector<int>& board, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if a queen can be placed at (row, col)
bool isSafe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i) {
        // Check for same column or diagonal attack
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// Recursive function to solve N-Queens problem
void solveNQueens(vector<int>& board, int row, int n, int& solutionCount, bool printBoards = false) {
    if (row == n) {
        // All queens are placed
        ++solutionCount;
        if (printBoards) {
            printSolution(board, n);
        }
        return;
    }

    // Try placing queen in all columns one by one
    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col; // Place queen
            solveNQueens(board, row + 1, n, solutionCount, printBoards);
            // Backtrack and try next position
            board[row] = -1;
        }
    }
}

// Function to analyze the number of solutions for N-Queens problem for different N values
void analyzeNQueens(int maxN, bool printBoards = false) {
    for (int n = 1; n <= maxN; ++n) {
        vector<int> board(n, -1); // Initialize board with -1 (no queen placed)
        int solutionCount = 0;
        solveNQueens(board, 0, n, solutionCount, printBoards);
        cout << "Number of solutions for " << n << "-Queens: " << solutionCount << endl;
    }
}

int main() {
    int maxN;
    bool printBoards;

    cout << "Enter the maximum value of N: ";
    cin >> maxN;
    
    cout << "Do you want to print all solutions? (1 for Yes, 0 for No): ";
    cin >> printBoards;

    analyzeNQueens(maxN, printBoards);

    return 0;
}

