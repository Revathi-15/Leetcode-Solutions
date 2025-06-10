#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i].second<a[i-1].second){
            count++;
        }
    }
    cout<<count<<endl;
}