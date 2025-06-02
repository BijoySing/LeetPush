class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n, 1), s(n,1), ans(n, 1);

        int pre = 1, suf = 1;
        for (int i = 0; i < n; i++) {
            pre *= nums[i];
            p[i]=pre;
            
        }
        for (int i = n - 1; i >= 0; i--) {
            suf *= nums[i];
            s[i]=suf;
            // cout<<suf<<" ";
        }
         ans[0] = s[1];
         ans[n-1]=p[n-2];
        for(auto u:s)cout<<u<<" ";
        for (int i = 1; i < n-1; i++) {
            ans[i] = p[i - 1] * s[i+1];
        }
        return ans;
    }
};