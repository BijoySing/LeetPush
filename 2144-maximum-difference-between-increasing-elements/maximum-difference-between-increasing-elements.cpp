class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx = -1;
        int b = nums[0];
        vector<int> v = nums;
        sort(v.rbegin(), v.rend());
        if (v == nums)
            return -1;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i] - b);
            b = min(b, nums[i]);
        }
        return mx;
    }
};