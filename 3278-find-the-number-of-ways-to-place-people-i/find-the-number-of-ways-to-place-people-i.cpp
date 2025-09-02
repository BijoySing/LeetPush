class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int ans = 0;
        sort(points.rbegin(), points.rend());
        for (int i = 0; i < points.size(); i++) {
            int x1 = points[i][0];
            int y1 = points[i][1];
            // cout<<x1<<y1<<endl;
            for (int j = 0; j < points.size(); j++) {
                if (i == j)
                    continue;
                int x2 = points[j][0];
                int y2 = points[j][1];
                if (x1 <= x2 and y1 >= y2 and (x1 < x2 || y1 > y2)) {
                   bool valid = true;
                    for (int k = 0; k < points.size(); k++) {
                        if (k == i || k == j)
                            continue;
                        int x3 = points[k][0];
                        int y3 = points[k][1];
                        if (x1 <= x3 and x3 <= x2 and y1 >= y3 and y3 >= y2) {
                            valid = false;
                        }
                    }
                    if (valid)
                        ans++;
                }
            }
        }
        return ans;
    }
};