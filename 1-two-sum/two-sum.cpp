class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int l = 0, r = nums.size() - 1;

        map<int, int> mp;
        vector<int> ans;
        int i = 0;
        for (auto u : nums) {
            mp[u] = i++;
        }
        for (int i = 0; i < nums.size(); i++) {
            int s=t-nums[i];
            if(mp[s] and mp[s]!=i){
                ans.push_back(i);
                ans.push_back(mp[s]);
                break;
                
            }
        }
        return ans;
    }
};