#include<bits/stdc++.h>
using namespace std;

int main(){
        long long int n;
        cin>>n;
        for(long long int i=1;i<=n;i++){
            long long int x=pow(i,2);
            long long int y=x-1;
            long long int a=(x*y)/2;
            long long int b=4*(i-1)*(i-2);
           cout<<(a-b)<<endl;
        }
        
}