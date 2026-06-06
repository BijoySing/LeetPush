class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> pre, suf, ans;
        int s = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size() - 1; i++) {
            pre.push_back(s);
            s += nums[i];
        }
        pre.push_back(s);

        s = 0;
        for (int i = 1; i < nums.size(); i++) {
            s = sum - pre[i];
            suf.push_back(s);
        }
        suf.push_back(0);

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(abs(pre[i] - suf[i]));
        }
        return ans;
    }
};