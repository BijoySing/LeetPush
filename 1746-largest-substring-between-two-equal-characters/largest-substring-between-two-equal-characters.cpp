class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> mp;
        int mx = -1;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i])!=mp.end()){
                int x = i - mp[s[i]] - 1;
                mx = max(mx, x);
            } else
                mp[s[i]] = i;
        }
        return mx;
    }
};