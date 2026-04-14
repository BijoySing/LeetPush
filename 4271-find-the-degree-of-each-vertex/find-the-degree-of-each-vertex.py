class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        ans=[]
        for i in matrix:
            c=0
            for u in i:
                if u==1:
                    c+=1
            ans.append(c)
        return ans
        