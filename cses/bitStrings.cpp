#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
       long long int n,k,x;
        cin>>n>>k>>x;
        int arr[n];
        int sum=1;
        arr[0]=1;
        for(int i=1;i<n;i++){
            arr[i]=sum+1;
            sum+=arr[i];
        }
         if(arr[k-1]<=x)  cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        t--;
    }
}