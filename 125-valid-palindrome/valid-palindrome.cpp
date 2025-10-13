class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "", s2;
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
             if(isalnum(s[i])){
                s1+=s[i];
            }
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl<<s2;
        return s1==s2;
    }
};