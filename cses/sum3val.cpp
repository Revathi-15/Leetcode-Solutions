#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m,temp=0;
    cin >> n >> m;
    vector<pair<int,int>> vect;
    for(int i=0;i<n;i++){
        cin>>temp;
        vect.push_back({temp,i+1});
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++){
        int x=m-vect[i].first;
        for(int j=i+1,k=n-1;j<k;){
            if(vect[j].first+vect[k].first==x){
                cout<<vect[i].second<<" "<<vect[j].second<<" "<<vect[k].second;
                return 0;
            }
            else if(vect[j].first+vect[k].first<x)  j++;
            else k--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}