#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
  if(n==1)
    cout<<"1";
  else if(n==2||n==3){
    cout<<"NO SOLUTION";
   }
   else {
    for(long long int i=2;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
     for(long long int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    }
}