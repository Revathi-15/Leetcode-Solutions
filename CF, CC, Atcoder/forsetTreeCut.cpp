#include<bits/stdc++.h>
using namespace std;
bool predicate_fun(int hts[],int n,int k,int m){
    int wood=0;
    for(int i=0;i<n;i++){
        if(hts[i]>=k)
        wood+=hts[i]-k;
    }
    return wood>=m;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=1e9,ans=0;//not indices and it is binary search on Answer thus these are values
    while(l<=r){
        int mid=l+(r-l)/2;
        if(predicate_fun(arr,n,mid,m)){
            ans=mid;
            l=mid+1;
        }
        else  r=mid-1;
    }
    cout<<ans<<endl;
}