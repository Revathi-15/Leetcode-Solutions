#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n==1){
            cout<<"NO"<<endl;
        }
        else{
            bool flag=false;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]) flag=true;
                else{
                    int temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    cout<<"YES"<<endl;
                    cout<<s<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"NO"<<endl;
            }
        }
    }
}