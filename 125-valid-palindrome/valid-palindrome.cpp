class Solution {
public:
    bool isPalindrome(string s) {
         int sz=s.size();
    string org="",rev;
    for(int i=0;i<sz;i++){
        s[i]=tolower(s[i]);
        int x=s[i];
        cout<<x<<endl;
        if(isalnum(s[i])){
            // s[i]=tolower(s[i]);
            org+=s[i];
        }
    }
    cout<<org<<endl;
    rev=org;
    reverse(org.begin(),org.end());
    return org==rev;
    }
};