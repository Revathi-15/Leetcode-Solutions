#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;
        cin>>n;
        vector<pair<int,int>>vect;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            vect.push_back({x,y});
        }
        sort(vect.begin(),vect.end(),[](const pair<int,int>& a,const pair<int,int>& b){
            return a.second<b.second;
        });
        int endTime=0,count=0;
        for(int i=0;i<n;i++){
            if(vect[i].first>=endTime){
                count++;
                endTime=vect[i].second;
            }
        }
        cout<<count<<endl;
}