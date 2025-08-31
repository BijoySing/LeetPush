class Solution {
public:
    bool isValid(vector<vector<char>>& b, int r, int c, char n) {
        for (int i = 0; i < 9; i++) {
            if (b[r][i] == n || b[i][c] == n || b[3*(r/3)+i/3][3*(c/3)+i%3] == n) 
                return false;
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& b) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (b[i][j] == '.') {
                    for (char n = '1'; n <= '9'; n++) {
                        if (isValid(b, i, j, n)) {
                            b[i][j] = n;
                            if (solve(b)) return true;
                            b[i][j] = '.';
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