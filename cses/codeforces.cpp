#include<bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;   
       while(t>0){
        int n,m,k;
        cin>>n>>m>>k;
        int b[n],c[m];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
      int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k){
                    count++;
                }
            }
        }
        // sort(b,b+n);
        // sort(c,c+m);
        // int i=0,j=0,count=0;
        // while (i<n) {
        //     if(b[i]+c[j]<=k && j<m){
        //         count++;
        //         j++;
        //     }
        //     else if(j==m-1)
        //        j=0;
        //     else{
        //         j=0;
        //         i++;
        //     }
        // }
        cout<<(count)<<endl;;
        t--;
       }
    
}