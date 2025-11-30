class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0,l,cur;
        for(auto num :s){
            if(s.count(num-1)==0){
                 cur=num;
                 l=1;
                while(s.count(cur+1)){
                    l++;
                    cur++;
                }
                            ans=max(ans,l);

            }
        }
        return ans;

    }
};