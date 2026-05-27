class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> low(26, -1), upp(26, -1);

        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];

            if (islower(ch)) {
                low[ch - 'a'] = i;
            } 
            else if (upp[ch - 'A'] == -1) {
                upp[ch - 'A'] = i;
            }
        }

        int cnt = 0;

        for (int i = 0; i < 26; i++) {
            if (low[i] != -1 &&
                upp[i] != -1 &&
                low[i] < upp[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};