class Solution {
    public int lengthAfterTransformations(String s, int t) {
         int MOD=(int)1e9+7;
        long []freq=new long[26];
        for(int i=0;i<s.length();i++) freq[s.charAt(i)-'a']++;
        while(t-- >0){
           long x=freq[25];
           for(int i=25;i>0;i--) freq[i]=freq[i-1];
           freq[0]=x;
           freq[1]=(freq[1]+x)%MOD;
        }
        
        long res=0;
        for(int i=0;i<26;i++) res=(res+freq[i])%MOD;
        return (int)res;
    }
}