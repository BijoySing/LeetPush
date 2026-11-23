
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), ans = 0;

        for (int l = 0; l < n; l++) {
            int g = 0, lc = 1;
            long double inv = 1;

            for (int r = l; r < n; r++) {
                g = gcd(g, nums[r]);
                lc = lcm(lc, nums[r]);
                inv /= nums[r];

                if (g * 1LL * lc * inv > 0.99999999)
                    ans = max(ans, r - l + 1);
            }
        }

        return ans;
    }
};
