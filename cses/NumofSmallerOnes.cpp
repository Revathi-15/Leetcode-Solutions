#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    int x = 0, y = 0, count = 0;
    while (y < m)
    {
        while(x<n && a[x] < b[y]) {  
             x++;
            count++;
        }
        arr.push_back(count);
        y++;
    }
   for(int i=0;i<m;i++){
    cout<<arr[i]<<" ";
}
}