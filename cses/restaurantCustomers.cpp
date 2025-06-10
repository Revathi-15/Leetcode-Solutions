#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vect;
    for(int i=0;i<n;i++){
        int arr,dep;
        cin>>arr>>dep;
        vect.push_back({arr,1});
        vect.push_back({dep,-1});
    }
    sort(vect.begin(),vect.end());
    int ans,count=0;
    for(int i=0;i<vect.size();i++){
        count+=vect[i].second;
        ans=max(ans,count);
    }   
    cout<<ans<<endl;
}