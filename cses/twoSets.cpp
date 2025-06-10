#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int total=(n*(n+1)/2);
    if(total%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        if(n%2==0){
            cout<<n/2<<endl;
            for(long long int i=n;i>n/2;i-=2)   cout<<i<<" ";
            for(long long int i=1;i<=n/2;i+=2)  cout<<i<<" ";
            cout<<endl<<n/2<<endl;
             for(long long int i=n-1;i>n/2;i-=2)   cout<<i<<" ";
             for(long long int i=2;i<=n/2;i+=2)   cout<<i<<" ";
            cout<<endl;
        }
        else{
            long long int p=n+1,sum=total/2;
            vector<bool> vect(p,true);
            vector<long long int> s;
            p-=1;
            while(sum!=0){
                if(sum>=p){
                    s.push_back(p);
                    sum-=p;
                    vect[p]=false;
                    p-=1;
                }
                else{
                    s.push_back(sum);
                    vect[sum]=false;
                    break;
                }
            }
            cout<<s.size()<<endl;
            for(long long int i:s){
                cout<<i<<" ";
            }
            cout<<endl<<n-s.size()<<endl;
            for(long long int i=1;i<=n;i++){
                if(vect[i]){
                    cout<<i<<" ";
                }
            }
        
        }
    }
}