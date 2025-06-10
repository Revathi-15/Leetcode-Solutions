#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> vect(n);
    for(int i=0;i<n;i++)  cin>>vect[i];
    set<int> s;
    int i=0,j=0,count=0;
    while(i<n&&j<n){
        while(j<n&&!s.count(vect[j])){
            s.insert(vect[j]);
            count=max(count,j-i+1);
            j++;
        }
        while(s.count(vect[j])){
            s.erase(vect[i]);
            i++;
        }
    }
    cout<<count<<endl;
}