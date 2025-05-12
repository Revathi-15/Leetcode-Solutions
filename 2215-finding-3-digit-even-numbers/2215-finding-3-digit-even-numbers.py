class Solution(object):
    def findEvenNumbers(self, digits):
       n=len(digits)
       st=set()
       for i in range(n):
        if digits[i]==0 : continue
        for j in range(n):
            if i==j: continue
            for k in range(n):
                if i==k or j==k: continue
                x=digits[i]*100+digits[j]*10+digits[k]
                if x%2==0: st.add(x)

       return sorted(list(st))