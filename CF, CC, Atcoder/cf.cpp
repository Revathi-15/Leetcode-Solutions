#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
   while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
       int a=(x1>y1)?x1:y1;
       int b=(x2>y2)?x2:y2;
       if((a==x1&&b==x2)||(a==y1&&b==y2)) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
    return 0;
}