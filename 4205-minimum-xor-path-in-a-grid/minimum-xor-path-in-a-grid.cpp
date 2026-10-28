class Solution {
public:
    int minCost(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        vector<vector<bitset<1024>>> dp(m, vector<bitset<1024>>(n));

        dp[m-1][n-1][g[m-1][n-1]] = 1;

        for (int i = m-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                if (i == m-1 && j == n-1) continue;

                auto add = [&](int x, int y) {
                    for (int k = 0; k < 1024; k++)
                        if (dp[x][y][k])
                            dp[i][j][k ^ g[i][j]] = 1;
                };

                if (i+1 < m) add(i+1, j);
                if (j+1 < n) add(i, j+1);
            }
        }

        for (int k = 0; k < 1024; k++)
            if (dp[0][0][k]) return k;

        return 0;
    }
};
