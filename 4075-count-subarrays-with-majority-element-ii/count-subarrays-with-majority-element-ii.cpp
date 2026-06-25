#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using ordered_set =
tree<T, null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        long long ans = 0;
        int pref = 0;
        int id = 0;

        ordered_set<pair<int,int>> st;
        st.insert({0, id++});

        for (int x : nums) {
            pref += (x == target ? 1 : -1);

            ans += st.order_of_key({pref, -1});

            st.insert({pref, id++});
        }

        return ans;
    }
};