class Solution(object):
    def getLongestSubsequence(self, words, groups):
        n=len(words)
        v=[words[0]]
        for i in range(1,n,+1):
            if groups[i]!=groups[i-1]:
                v.append(words[i])
        return v