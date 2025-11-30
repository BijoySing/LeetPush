class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int mx=0;
        set<char>st;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            mx=max(mx,i-l+1);
        }
        return mx;
    }
};