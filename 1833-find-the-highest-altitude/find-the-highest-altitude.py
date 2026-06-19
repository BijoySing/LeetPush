class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans=[0]
        for i in range(len(gain)):
            x=gain[i]+ans[i]
            ans.append(x)
        res=max(ans)
        return res


        