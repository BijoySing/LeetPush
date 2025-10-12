class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> m;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(matrix[j][i]);
            }
            reverse(v.begin(),v.end());
            m.push_back(v);
        }
        matrix=m;
    }
};