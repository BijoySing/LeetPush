class Solution {
public:
    int smallestNumber(int n) {
        int b=log2(n);
        return (1<<b+1)-1;
    }
};