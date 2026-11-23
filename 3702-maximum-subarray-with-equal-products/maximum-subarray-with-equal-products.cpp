
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), ans = 0;

        for (int l = 0; l < n; l++) {
            int gcdVal = nums[l], lcmVal = nums[l];
            double inv = 1.0 / nums[l];

            for (int r = l; r < n; r++) {
                if (r > l) {
                    gcdVal = gcd(gcdVal, nums[r]);
                    lcmVal = lcm(lcmVal, nums[r]);
                    inv /= nums[r];
                }

                if (gcdVal * 1LL * lcmVal * inv > 0.99999999)
                    ans = max(ans, r - l + 1);
            }
        }

        return ans;
    }
};
