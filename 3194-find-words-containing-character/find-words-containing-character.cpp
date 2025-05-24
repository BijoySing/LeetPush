class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int i = 0;
        for (auto u : words) {
            if (u.find(x) != -1)
                v.push_back(i);
            i++;
        }
        return v;
    }
};