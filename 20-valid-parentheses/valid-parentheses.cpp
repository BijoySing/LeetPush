class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            if (x == '(' or x == '{' or x == '[') {
                t.push(x);
                continue;
            }
            else {
                if(t.empty())return false;
                if (x == ')' and t.top() != '(')
                    return false;
                if (x == '}' and t.top() != '{')
                    return false;
                if (x == ']' and t.top() != '[')
                    return false;
                t.pop();
            }
        }
        return t.empty();
    }
};