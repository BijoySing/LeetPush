class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int c = 0;
        for (int i = 1; i <= k; i++) {
            int x = n - i;
            if (x>=0 and (x & n) == 0)c+=x;
            x=n+i;
            if ((x & n) == 0)c+=x;
        }
        
        return c;
    }
};