class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        nums.push_back(nums[0]);
        int d = 0;
        int ans = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            d = abs(nums[i] - nums[i + 1]);
            ans = max(d, ans);
        }
      return ans;
    }
};