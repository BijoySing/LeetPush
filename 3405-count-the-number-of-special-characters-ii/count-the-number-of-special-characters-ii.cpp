class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> l, u;
        for (int i = 0; i < word.size(); i++) {
            int s = word[i];
            if (s <= 90 and !u[word[i]]) {
                u[word[i]] = i+1;
            } else {
                l[word[i]] = i+1;
            }
        } int c=0;
        for (auto [a, b] : u) {
            char ch = tolower(a);
            // cout<<a<<" "<<b<<endl;
            // cout<<ch<< " "<<l[ch]<<endl;
            if(l[ch] and l[ch]<b)c++;
        }
        return c;
    }
};