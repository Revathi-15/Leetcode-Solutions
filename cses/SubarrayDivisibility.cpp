#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)   cin>>arr[i];
   long long int sum=0,count=0;
    map<long long int,int> seen;
    seen[0]++;
    for(int i=0;i<n;i++){
        sum+=arr[i]%n;
        sum=(sum+n)%n;
        count+=seen[sum];
        seen[sum]++;
    }
    cout<<count;
}