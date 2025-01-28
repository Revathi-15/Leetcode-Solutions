#include <bits/stdc++.h>
using namespace std;
const int val=1e9+7;

int fun(int n,vector<int>&dp){
   if(n<0) return 0;
   if(n==0) return 1;
   if(dp[n]!=-1) return dp[n];
   int sum=0;
   for(int i=1;i<=6;i++){
      if(n-i>=0)
        sum=(sum+fun(n-i,dp))%val;
   }
   dp[n]=sum;
   return dp[n]; 
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    int res=fun(n,dp);
   cout<<res<<endl;
}