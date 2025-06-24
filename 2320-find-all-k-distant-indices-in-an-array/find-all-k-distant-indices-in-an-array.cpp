class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> id, ans;
        set<int>s;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key)
                id.push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            {
                for (auto u : id) {
                    if (abs(u - i) <= k and s.count(i)==0)
                        ans.push_back(i),s.insert(i);
                }
            }
        }
        return ans;}
    };