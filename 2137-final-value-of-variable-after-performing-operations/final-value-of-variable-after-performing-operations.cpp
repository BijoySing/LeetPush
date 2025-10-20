class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        string s1 = "X++";
        string s2 = "++X";
        string s3 = "X--";
        string s4 = "--X";
        int x = 0;
        for (string s : op) {
            if (s == s1 || s == s2)
                x++;
            else
                x--;
        }
        return x;
    }
};