#include<bits/stdc++.h>
using namespace std;
//O(n) - space complexity

int main(){ 
    int n;
    cin>>n;
    vector<int> dp(n+1);
      int prev=1,prev2=0,curr=0;
    for(int i=2;i<=n;i++){
        curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<curr;
}