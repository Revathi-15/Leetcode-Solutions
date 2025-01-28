#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int r,c,num;
        cin>>r>>c;
        if(r<c){
            if(c%2==0)
                num=(c-1)*(c-1)+r;
            else 
               num=(c*c)-r+1;
        }
        else{
            if(r%2==0)
                num=(r*r)-c+1;
            else 
               num=(r-1)*(r-1)+c;
        }
        cout<<num<<endl;
    }
}