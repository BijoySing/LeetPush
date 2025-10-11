class Solution {
public:
    int triangleNumber(vector<int>& v) {
        sort(v.begin(), v.end());
        int n = v.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int x = v[i] + v[j];
                auto it = lower_bound(v.begin() + j + 1, v.end(), x);
                int k = it - v.begin(); // index of first element >= x
                ans += k - j - 1;       // count of valid third sides
            }
        }
        return ans;
    }
};
