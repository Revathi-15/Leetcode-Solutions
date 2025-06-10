#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)  cin>>arr[i];
    int k;
    cin>>k;
    bool flag=false;
    int i=0,x=1,count=0;
    for(i=0;i<n;i++){
        if(arr[i]==i){ 
            x++;
            flag=true;
        }
        while(arr[i]!=x){
            flag=false;
            count++;
            if(count==k){
                cout<<x;
                break;
            } 
            x++;
        }
    }
    if(flag)  cout<<i+k; 
}