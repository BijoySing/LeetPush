class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int i = 0;
        int col = 0;
        int j = n-1;
        while (i < n and directions[i] == 'L') {
            i++;
        }
        while (j >= 0 and directions[j] == 'R') {
            j--;
        }
        while (i <= j) {
            if (directions[i] != 'S')
                col++;
            i++;
        }
        return col;
    }
};