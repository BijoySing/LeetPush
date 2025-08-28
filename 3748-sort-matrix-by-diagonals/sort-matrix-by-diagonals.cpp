class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> v1, v2;

        for (int i = 0; i < n; i++) {
            vector<int> v;

            for (int j = 0; j + i < n; j++) {
                v.push_back(grid[i + j][j]);
            }
            sort(rbegin(v), rend(v));
            // v1.push_back(v);
            // cout << endl;

            for (int j = 0; j + i < n; j++) {

                grid[i + j][j] = v[j];
            }
            // sort(rbegin(v), rend(v));
            // v1.push_back(v);
            // cout << endl;
        }
        for (int j = 1; j < n; j++) {
            vector<int> v;

            for (int i = 0; i + j < n; i++) {
                v.push_back(grid[i][j + i]);
            }
            sort(begin(v), end(v));

            for (int i = 0; i + j < n; i++) {
                grid[i][j + i] = v[i];
            }
        }
        return grid;
    }
};