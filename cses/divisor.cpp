#include<bits/stdc++.h>
using namespace std;

int main(){
        int t;
       cin>>t;
      while(t>0){ 
       int count=0;
       int n;
      cin>>n;
        for( int i=1;i*i<=n;i++){
            if(n%i==0){
                if(n/i==i){
                count++;
            }
            else{
                count+=2;
            }}
        }
        cout<<count<<endl;
        t--;
    } 
}