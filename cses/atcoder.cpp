#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,fs=0,ss=INT_MAX;
  cin>>n;
  vector<int>energies(n);
  for(int i=0;i<n;i++){
    cin>>energies[i];
  }
  vector<int>dp(n+1);
  dp[0]=0;
  for(int i=1;i<n;i++){
     fs=dp[i-1]+abs(energies[i]-energies[i-1]);
    if(i>1){
     ss=dp[i-2]+abs(energies[i]-energies[i-2]);
    }
    dp[i]=min(fs,ss);
  }
  cout<<dp[n-1]<<endl;
}