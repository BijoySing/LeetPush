class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> d;
        sort(nums.begin(), nums.end());
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(nums[i]);
            if ((i + 1) % 3 == 0) {

                if (v[2] - v[0] > k)
                    return {};
                    d.push_back(v);
                    v.clear();
            }
        }
        return d;
    }
};