class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int p=1;
        int d;
        int j=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
          d=nums[i]-nums[j];
          if(d>k)j=i,p++;
        }
        return p;
    }
};