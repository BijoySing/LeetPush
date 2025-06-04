class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy = p[0];
        int mx = 0;
        for (int i = 1; i < p.size(); i++) {
            int d = p[i] - buy;
            buy = min(p[i], buy);
            mx = max(d, mx);
        }
        return mx;
    }
};