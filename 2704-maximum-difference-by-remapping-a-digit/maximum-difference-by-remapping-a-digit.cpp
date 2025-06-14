class Solution {
public:
    int minMaxDifference(int num) {
        int mx = 0;
        int mn = 0;
        string s = to_string(num);
        string ss = to_string(num);
        string id = " ";
        char x=ss[0];
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '9' and id == " ") {
                id = s[i];
                s[i] = '9';
            }
            if (id[0] == s[i]) {
                s[i] = '9';
          }
          if(x==ss[i]){
            ss[i]='0';
          }
          
        }
        cout << ss;
        mx=stoi(s);
        mn=stoi(ss);
        return mx-mn;
    }
};