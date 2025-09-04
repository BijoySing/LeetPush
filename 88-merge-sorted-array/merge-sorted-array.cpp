class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i = 0;
        int s = max(m,n);
                // sort(nums1.begin(),nums1.end());
        while (j < n) {
        nums1[m]=nums2[j++];m++;
        }
        sort(nums1.begin(),nums1.end());
    }
};