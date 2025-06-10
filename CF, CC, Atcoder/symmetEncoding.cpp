#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
    if(n==1) cout<<s<<endl;
    else{
        string x=s;
        sort(x.begin(),x.end());
        string r="";
        r+=x[0];
        int k=1;
        for(int i=1;i<x.size();i++){
            if(x[i]!=x[i-1]){
                r+=x[i];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<r.size();j++){
                if(s[i]==r[j]){
                    s[i]=r[r.size()-j-1];
                    break;
                }
            }
        }
        cout<<s<<endl;
    }}
}