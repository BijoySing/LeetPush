class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<int> ans;
        for (auto u : m) {
            int c = 0;
            for (auto v : u) {
                if (v)
                    c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
