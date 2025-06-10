#include<bits/stdc++.h>
using namespace std;

int fun(long long int x,long long int y,long long int n,long long int r){
    long long int rows=r/x;
    long long int cols=r/y;
    long long int side=rows*cols;
    return side>=n;
}

int main(){
    long long int w,h,n;
    cin>>w>>h>>n;
    long long int r=1,l=0;
    while(!fun(w,h,n,r))  r*=2;
    while(l+1<r){
        long long int mid=l+(r-l)/2;
        if(fun(w,h,n,mid)) r=mid;
        else l=mid;
    }
    cout<<r<<endl;
}