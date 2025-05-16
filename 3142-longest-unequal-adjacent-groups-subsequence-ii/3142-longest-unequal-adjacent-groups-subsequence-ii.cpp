class Solution {
public:
    bool distance(string x,string y){
        int n=x.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(x[i]!=y[i]) cnt++;
        }
        return cnt==1;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size(),maxi=0;
        vector<int>dp(n,1); // stores longest sequence len
        vector<int>prev(n,-1); // stores idx of prev of word in LS
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(groups[i]!=groups[j] && words[i].size()==words[j].size() && distance(words[i],words[j]) && dp[j]+1 > dp[i]){
                    dp[i]=dp[j]+1;
                    prev[i]=j; // i and j are in sequence curr one(i) stores prev one(j) idx in LS
                }
            }
            if(dp[i]>dp[maxi]) maxi=i; // stores max idx in LS
        }

        vector<string>res;
        for(int i=maxi;i!=-1;i=prev[i]){
            res.push_back(words[i]); // stores from back and then moves to prev idx in LS
        }
        reverse(res.begin(),res.end());
        return res;
    }
};