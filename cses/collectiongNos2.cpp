#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m,x,y;
    cin >> n >> m;
    vector<pair<long long int, long long int>> vect(n);
    vector<pair<long long int,long long int>>vect1(n);
    vector<pair<long long int,long long int>>vect2(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> vect[i].first;
        vect[i].second = i;
    }
    // vect1=vect;
    for(long long int i=0;i<m;i++){
        vect2=vect;
        long long int count=1;
        cin>>x>>y;
        swap(vect2[x-1].first,vect2[y-1].first);
        vect=vect2;
        vect1=vect2;
        sort(vect1.begin(),vect1.end());
        for(long long int j=1;j<n;j++){
            if(vect1[j].second<vect1[j-1].second)  count++;
        }
        cout<<count<<endl;
    }
}