class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws,
                           vector<int>& wd) {
        vector<int> ans;
        for (int i = 0; i < ls.size(); i++) {
            int t = ls[i] + ld[i];
            for (int j = 0; j < ws.size(); j++) {
                int tt = t;
                if (tt >= ws[j])
                    tt += wd[j];
                else
                    tt = ws[j] + wd[j];
                ans.push_back(tt);
            }
        }
         for (int i = 0; i < ws.size(); i++) {
            int t = ws[i] + wd[i];
            for (int j = 0; j <ls.size(); j++) {
                int tt = t;
                if (tt >= ls[j])
                    tt += ld[j];
                else
                    tt = ls[j] + ld[j];
                ans.push_back(tt);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};