class Solution {
public:
    int MOD=1e9+7;
    int lengthAfterTransformations(string s, int t) {
        vector<long long>freq(26,0);
        for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
        while(t--){
           int x=freq[25];
           for(int i=25;i>0;i--) freq[i]=freq[i-1];
           freq[0]=x;
           freq[1]=(freq[1]+x)%MOD;
        }
        
        int res=0;
        for(int i=0;i<26;i++) res=(res+freq[i])%MOD;
        return res;
    }
};