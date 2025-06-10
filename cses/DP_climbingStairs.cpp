#include <bits/stdc++.h>
using namespace std;

int fun(int idx){
    if(idx<=1) return 1;
    int left=fun(idx-1);
    int right=fun(idx-2);
    return left+right;
}

int main(){
    int n;
    cin>>n;
   int count=fun(n);
   cout<<count<<endl;
}