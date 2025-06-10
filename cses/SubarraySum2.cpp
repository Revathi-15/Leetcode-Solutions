#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
   long long int n,sum;
    cin>>n>>sum;
    vector<long long int> vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }

    unordered_map<long long int,long long int> a;
   long long int count=0,presum=0,currsum=0;
    a[0]=1;
    long long int i=0;
    while(i<n){
        currsum+=vect[i];
        presum=currsum-sum;
        count+=a[presum];
        a[currsum]++;
        i++;

    }
    cout<<count;
}