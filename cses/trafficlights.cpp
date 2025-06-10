#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,n,y;
    cin>>x>>n;
    set<long long int>s;
    multiset<long long int>mset;
    s.insert(0);
    s.insert(x);
    mset.insert(x-0);
    for(long long int i=0;i<n;i++){
        cin>>y;
        s.insert(y);
        auto iter=s.find(y);
        long long int preVal=*prev(iter);
        long long int nxtVal=*next(iter);
        mset.erase(mset.find(nxtVal-preVal));
        mset.insert(y-preVal);
        mset.insert(nxtVal-y);
        long long int res=*mset.rbegin();
        cout<<res<<" ";
    }
}