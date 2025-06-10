#include<bits/stdc++.h>
using namespace std;

bool predicate_fun(int x,int y,int t,int n){
    if(t<min(x,y))  return false;
    int count=1;
    t=t-min(x,y);
    count+=t/x+t/y;
    return count>=n;
}

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int l=0,r=n*max(x,y),ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(predicate_fun(x,y,mid,n)){
            ans=mid;
            r=mid-1;
        }
        else 
          l=mid+1;
    }
    cout<<ans<<endl;
}   