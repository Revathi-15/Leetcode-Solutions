#include <bits/stdc++.h>
using namespace std;
const long long int val=1e9+7;
long long int fun(long long int i,long long int j,long long int sum){
    while(j<=i){
        if(i%j==0)  sum+=j;
        j++;
    }
    return sum;
}
int main(){
    long long int n;
    cin>>n;
    long long int sum=0;
    for(long long int i=1;i<=n;i++){
       int j=1;
        sum=fun(i,j,sum);
    }
    cout<<sum%val<<endl;
    return 0;
}