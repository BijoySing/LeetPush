class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        auto check = [&](int k) -> bool {
            int prev = 0;

            for (int i = 0; i < n; i += k) {
                int cnt = 0;
                int mini = nums[i], maxi = nums[i];

                for (int j = i; j < i + k - 1; j++) {
                    if (nums[j] > nums[j + 1]) cnt++;

                    mini = min(mini, nums[j + 1]);
                    maxi = max(maxi, nums[j + 1]);
                }

                if (nums[i + k - 1] > nums[i]) cnt++;

                if (cnt > 1 || prev > mini) return false;

                prev = maxi;
            }

            return true;
        };

        int ans = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (check(i)) ans += i;

                if (i * i != n && check(n / i))
                    ans += n / i;
            }
        }

        return ans;
    }
};