#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> vect(n);
    for(int i=0;i<n;i++)  cin>>vect[i];
    sort(vect.begin(),vect.end());
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        int count=0;
        count=upper_bound(vect.begin(),vect.end(),y)-lower_bound(vect.begin(),vect.end(),x);
        cout<<count<<endl;
    }

}