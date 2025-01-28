#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(int i=0;i<n;i++)  cin>>arr[i];
  vector<int>dp(n+1,-1);
  dp[0]=0;
  int jump=0;
    for(int i=1;i<n;i++){
       int mins=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0)
             jump=dp[i-j]+abs(arr[i]-arr[i-j]);
            mins=min(mins,jump);
        }
        dp[i]=mins;
    }   
    cout<<dp[n-1];
}