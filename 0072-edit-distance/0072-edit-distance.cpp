class Solution {
    int func(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        int eq=INT_MAX,neq=INT_MAX;
        if(s1[i]==s2[j])  eq=func(s1,s2,i-1,j-1,dp);
        int ins=1+func(s1,s2,i,j-1,dp);
        int del=1+func(s1,s2,i-1,j,dp);
        int repl=1+func(s1,s2,i-1,j-1,dp);
        neq=min({ins,del,repl});
        return dp[i][j]=min(eq,neq);
    }
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(word1,word2,n-1,m-1,dp);
    }
};