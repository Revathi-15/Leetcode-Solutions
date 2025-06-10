#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector<long> vect(n);
    for(long i=1;i<=n;i++){
        cin>>vect[i];
    }
    long count=0;
    multiset<long> towers;
    for(long i=1;i<=n;i++){
        if(towers.size()==0)
           towers.insert(vect[i]);
        else{
            auto base =towers.upper_bound(vect[i]);
            if(base==towers.end())
                towers.insert(vect[i]);
            else{
            towers.insert(vect[i]);
            towers.erase(base);
            }
        }
    }
    cout<<towers.size()<<endl;
}