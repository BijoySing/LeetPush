class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int c = 0;
        for (int i = n-k; i <= n+k; i++) {
            if (i>=0 and (i & n) == 0)c+=i;
        }

        return c;
    }
};