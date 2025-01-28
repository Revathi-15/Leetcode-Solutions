#include<bits/stdc++.h>
using namespace std;
int fun(int idx,vector<int>&heights,vector<int>&dp){
  if(idx==0) return 0;
  if(dp[idx]!=-1) return dp[idx];
  int left=fun(idx-1,heights,dp)+abs(heights[idx]-heights[idx-1]);
  int right=INT_MAX;
  if(idx>1) right =fun(idx-2,heights,dp)+abs(heights[idx]-heights[idx-2]);
  return dp[idx]=min(left,right);
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)  cin>>arr[i];
  vector<int>dp(n+1,-1);
  int count=fun(n-1,arr,dp);
  cout<<count<<endl;
}