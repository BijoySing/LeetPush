class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        for (int i = 1; i <= n - 1; i++) {
            v.push_back(i);
        }
        int s=n*(n-1)/2;
        v.push_back(-s);
        return v;
    }
};