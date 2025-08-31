class Solution {
public:
    // Check if placing 'num' at position (row, col) is valid
    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        // Check row
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == num) {
                return false;
            }
        }
        
        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) {
                return false;
            }
        }
        
        // Check 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) {
                    return false;
                }
            }
        }
        
        return true;
    }
    
    // Backtracking function to solve the sudoku
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                // Find an empty cell
                if (board[i][j] == '.') {
                    // Try numbers 1-9
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, i, j, num)) {
                            // Place the number
                            board[i][j] = num;
                            
                            // Recursively solve the rest
                            if (solve(board)) {
                                return true;
                            }
                            
                            // Backtrack if solution not found
                            board[i][j] = '.';
                        }
                    }
                    // If no number works, return false
                    return false;
                }
            }
        }
        // All cells filled successfully
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

// Optimized version with better empty cell finding
class SolutionOptimized {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        // Check row, column, and 3x3 box in a single loop for efficiency
        for (int i = 0; i < 9; i++) {
            // Check row
            if (board[row][i] == num) return false;
            
            // Check column
            if (board[i][col] == num) return false;
            
            // Check 3x3 box
            int boxRow = 3 * (row / 3) + i / 3;
            int boxCol = 3 * (col / 3) + i % 3;
            if (board[boxRow][boxCol] == num) return false;
        }
        return true;
    }
    
    bool findEmptyCell(vector<vector<char>>& board, int& row, int& col) {
        for (row = 0; row < 9; row++) {
            for (col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    return true;
                }
            }
        }
        return false; // No empty cell found
    }
    
    bool solve(vector<vector<char>>& board) {
        int row, col;
        
        // Find next empty cell
        if (!findEmptyCell(board, row, col)) {
            return true; // All cells filled, puzzle solved
        }
        
        // Try numbers 1-9
        for (char num = '1'; num <= '9'; num++) {
            if (isValid(board, row, col, num)) {
                board[row][col] = num;
                
                if (solve(board)) {
                    return true;
                }
                
                // Backtrack
                board[row][col] = '.';
            }
        }
        
        return false; // No solution found
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

// Version with your validation functions (corrected)
class SolutionWithYourFunctions {
public:
    bool ckbox(vector<vector<char>>& b, int r, int c, char num) {
        int col = (c / 3) * 3;
        int row = (r / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (b[i + row][j + col] == num) {
                    return false; // Found duplicate in box
                }
            }
        }
        return true;
    }
    
    bool ckrow(vector<vector<char>>& b, int r, int c, char num) {
        for (int i = 0; i < 9; i++) {
            if (b[r][i] == num) {
                return false; // Found duplicate in row
            }
        }
        return true;
    }
    
    bool ckcol(vector<vector<char>>& b, int r, int c, char num) {
        for (int i = 0; i < 9; i++) {
            if (b[i][c] == num) {
                return false; // Found duplicate in column
            }
        }
        return true;
    }
    
    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        return ckbox(board, row, col, num) && 
               ckrow(board, row, col, num) && 
               ckcol(board, row, col, num);
    }
    
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, i, j, num)) {
                            board[i][j] = num;
                            
                            if (solve(board)) {
                                return true;
                            }
                            
                            board[i][j] = '.'; // Backtrack
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};