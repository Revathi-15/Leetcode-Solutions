#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(int a,int b)const{
        return a>b;
    }
};

int main() {
    int n,m,x,t;
    cin>>n>>m;
    multiset<int,Compare>prices;
    for(int i=0;i<n;i++){
        cin>>x;
        prices.insert(x);
    }
    for(int i=0;i<m;i++){
        cin>>t;
        auto it=prices.lower_bound(t);
        if(it==prices.end())
           cout<<"-1"<<endl;
        else {
           cout<<(*it)<<endl;
           prices.erase(it);
        }
    }
}