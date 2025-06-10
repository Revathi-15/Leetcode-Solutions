#include <bits/stdc++.h>
using namespace std;
int fun(){
    int n, m,temp=0;
    cin >> n >> m;
    vector<pair<int,int>> vect;
    for(int i=0;i<n;i++){
        cin>>temp;
        vect.push_back({temp,i});
    }
    sort(vect.begin(),vect.end());
    int i=0,j=n-1;
    while(j>i){
        temp = vect[i].first + vect[j].first;
		if (temp == m)
		{
			cout << vect[i].second+1 << " " << vect[j].second + 1 << endl;
			return 0;
		}
		if (temp < m)
			i++;
		else
			j--;
	}
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

int main()
{
    fun();
}