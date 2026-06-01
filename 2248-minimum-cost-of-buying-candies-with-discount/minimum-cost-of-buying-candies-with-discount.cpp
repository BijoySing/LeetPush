class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.rbegin(),c.rend());
        int a=0;
        for(int i=0;i<c.size();i++){
            if((i+1)%3){
                a+=c[i];
            }
        }
        return a;
    }
};