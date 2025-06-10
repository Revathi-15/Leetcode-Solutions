#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b)  {
          if(b<c) cout<<"STAIR"<<endl;
          else if(b>c) cout<<"PEAK"<<endl;
          else cout<<"NONE"<<endl;
        }
        else cout<<"NONE"<<endl;
        t--;
    }
}