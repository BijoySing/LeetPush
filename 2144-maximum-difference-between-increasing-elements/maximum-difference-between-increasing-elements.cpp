class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx = -1;
        int b = nums[0];
            for (int i = 1; i < nums.size(); i++) {
           if(nums[i]>b) mx = max(mx, nums[i] - b);
            b = min(b, nums[i]);
        }
        return mx;
    }
};