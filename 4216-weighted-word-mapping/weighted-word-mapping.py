class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        ans = ''
        for i in words:
            sum=0
            for j in i:
                id=ord(j)-ord('a')
                sum+=weights[id]
            sum=sum%26
            ans+=chr(ord('z')-sum)
        return ans