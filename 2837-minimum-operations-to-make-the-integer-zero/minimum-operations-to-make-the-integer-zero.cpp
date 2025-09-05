class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int op = 0, b = 0;
        for (int i = 1; i <= 60; i++) {
            long long k = num1 - 1LL*i * num2;
            if (k < i) {
                return -1;
            }
            int bit=__builtin_popcountll(k);
             if(bit<=i and i<=k){
                return i;
            }
        }
        return -1;
    }
};