class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        vector<int> d(nums1.size());
        for (int i = 0; i < d.size(); i++)
            d[i] = abs(nums1[i] - nums2[i]);

        long long k = 1LL * k1 + k2;
        sort(d.rbegin(), d.rend());
        if (accumulate(d.begin(), d.end(), 0LL) <= k)
            return 0;

        int l = 0, r = d[0];
        while (l < r) {
            int m = (l + r) / 2;
            long long need = 0;
            for (int x : d)
                need += max(0, x - m);
            if (need <= k)
                r = m;
            else
                l = m + 1;
        }

        long long ans = 0;
        for (int x : d) {
            int y = min(x, l);
            ans += 1LL * y * y;
            k -= max(0, x - l);
        }

        for (int x : d)
            if (x >= l && k-- > 0)
                ans -= 2LL * l - 1;

        return ans;
    }
};