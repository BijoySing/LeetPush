class Solution {
public:
    int minOperations(vector<int>& a) {
        int n = a.size();
        int ans = 0;
        int pos = distance(begin(a), ranges::find(a, 0));
        
        bool flag = true;
        for(int i = pos; i < pos + n - 1; ++i) {
            if(a[i % n] >= a[(i+1) % n]) {
                flag = false;
                break;
            }
        }
        if(flag) return min(pos, 2 + n - pos);

        flag = true;
        for(int i = pos; i > pos - n + 1; --i) {
            if(a[(n+i) % n] >= a[(n+i-1) % n]) {
                flag = false;
                break;
            }
        }
        return flag ? min(n - pos, pos + 2) : -1;
    }
};