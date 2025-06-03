class Solution {
public:
    double myPow(double x, long long n) {
        if (n < 0) {
            x = 1 / x;
            n = abs(n);
        }
        double ans = 1.0;
        while (n != 0) {
            if (n % 2)
                ans *= x;
            x *= x;
            n/=2;
        }
        return ans;
    }
};