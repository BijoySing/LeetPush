class Solution {
public:
    string getword(int i, int j, int psc, int xsc, vector<string>& w, int mxw) {
        string s;
        for (int k = i; k < j; k++) {
            s += w[k];
            if (k == j - 1)
                continue;
            for (int sc = 1; sc <= psc; sc++) {
                s += " ";}
                if (xsc > 0) {
                    s += " ";
                    xsc--;
                }
            }
            while (s.size() < mxw) {
                s += " ";
            }
        
        return s;
    }
    vector<string> fullJustify(vector<string>& w, int mxw) {
        int n = w.size();
        int i = 0;
        vector<string> res;
        while (i < n) {
            int space = 0;
            int lc = w[i].size();
            int j = i + 1;

            while (j < n and lc + 1 + space + w[j].size() <= mxw) {
                lc += w[j].size();
                space++;
                j++;
            }
            int rem = mxw - lc;
            int psc = 0, xsc = 0;
            if (space) {
                psc = rem / space;
                xsc = rem % space;
            }
            if (j == n) {
                psc = 1;
                xsc = 0;
            }
            res.push_back(getword(i, j, psc, xsc, w, mxw));
            i = j;
        }
        return res;
    }
};