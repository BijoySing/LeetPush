class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n);

        long long cur = 0;

         for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                cur++;
            }
            else if (s[i] == '*') {
                if (cur > 0) cur--;
            }
            else if (s[i] == '#') {
                cur *= 2;
            }

            len[i] = cur;
        }

         if (k >= cur) {
            return '.';
        }

         for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            if (islower(ch)) {
                if (k == len[i] - 1) {
                    return ch;
                }
            }
            else if (ch == '#') {
                k %= (len[i] / 2);
            }
            else if (ch == '%') {
                k = len[i] - 1 - k;
            }
        }

        return '.';
    }
};