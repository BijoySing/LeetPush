class Solution {
public:
    bool ckbox(vector<vector<char>> b, int r, int c, char num) {
        int col = (c / 3) * 3;
        int row = (r / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (b[i+row][j+col] == '.')
                    continue;

                if (b[i + row][j + col] == num and (i+row != r and j+col != c))
                    return false;
            }
        }
        return true;
    }
    bool ckrow(vector<vector<char>> b, int r, int c, char num) {
        for (int i = 0; i < 9; i++) {
            if (b[i][c] == '.')
                continue;

            if (b[i][c] == num and ((i != r)))
                return false;
        }
        return true;
    }
    bool ckcol(vector<vector<char>> b, int r, int c, char num) {
        for (int i = 0; i < 9; i++) {
            if (b[r][i] == '.')
                continue;

            if (b[r][i] == num and ((i != c)))
                return false;
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& b) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (b[i][j] == '.')
                    continue;
                bool f1 = ckbox(b, i, j, b[i][j]);
                bool f2 = ckrow(b, i, j, b[i][j]);
                bool f3 = ckcol(b, i, j, b[i][j]);
                cout << b[i][j] << f1 << f2 << f3 << endl;
                if (!f1 || !f2 || !f3)
                    return false;
            }
        }
        return true;
    }
};