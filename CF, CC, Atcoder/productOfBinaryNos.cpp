#include <bits/stdc++.h>
using namespace std;
vector<int> res(1e5+1, 0);
bool check(int x){ 
      while (x>0){ 
        int z = x % 10;
        if (z!= 0 && z!= 1)  return false;
            x /= 10;
       }
       return true;
}

int main()
{   int t;
    cin >> t;
    vector<int> ans;
     res[0] = 1, res[1] = 1;
    for(int i=10;i<1e5+1;i++){
        if(check(i)){
            res[i]=1;
            ans.push_back(i);
        }
    }
     for(int i=10;i<1e5+1;i++){
        for(auto it:ans){
            if(i%it==0){
                res[i]=res[i]|(res[i/it]);
            }
        }
    }
    while (t > 0)
    {  int n;
        cin>>n;
        if(res[n]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        t--;
    }
}