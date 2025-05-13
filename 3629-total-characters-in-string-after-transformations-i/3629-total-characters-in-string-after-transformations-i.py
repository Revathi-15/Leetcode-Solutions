class Solution(object):
    def lengthAfterTransformations(self, s, t):
        MOD=int(1e9+7)
        freq=[0]*26
        for ch in s: freq[ord(ch)-ord('a')]+=1
        for _ in range(t):
           x=freq[25]
           for i in range(25,0,-1):
              freq[i]=freq[i-1]
           freq[0]=x
           freq[1]=(freq[1]+x)%MOD
        
        res=sum(freq)%MOD
        return res
        