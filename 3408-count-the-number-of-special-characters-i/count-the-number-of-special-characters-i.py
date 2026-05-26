class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        lowMap=set()
        upMap=set()
        count =0
        for ch in word:
            if ch.islower():
                lowMap.add(ch)
            else:
                upMap.add(ch)
        for ch in lowMap:
            if ch.upper() in upMap:
                count+=1
        return count