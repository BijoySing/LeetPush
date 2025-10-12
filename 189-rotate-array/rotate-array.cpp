class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j = 0;
        int n=nums.size();
        vector<int>v(n);
        k%=n;
        for (int i = n - k; i < n+(n-k) ; i++) {
             v[j]=(nums[i%n]);j++;
          }
          nums=v;
    }
};