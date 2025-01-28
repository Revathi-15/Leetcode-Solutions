#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=false;
    if(s[0]=='<' && s[s.length()-1]=='>'){
    for(int i=1;i<s.length()-1;i++){
        if(s[i]=='=')  flag=true;
        else{
            flag=false;
            break;
        }
    }}

    
    if (flag==true)    cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
}