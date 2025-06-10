#include <bits/stdc++.h>
using namespace std;

int main()
{  int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> prev(x + 1, 0), curr(x + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int val = 0; val <= x; val++)
    {
        if (val % a[0] == 0)
            prev[val] = val / a[0];
        else
            prev[val] = 1e9;
    }

    for (int i = 1; i < n; i++)
    {  for (int val = 0; val <= x; val++)
        {  int not_take = 0 + prev[val];
            int take = INT_MAX;
            if (val >= a[i])
                take = 1 + curr[val - a[i]];
           curr[val] = min(take, not_take);
        }
        prev=curr;
    }

    int ans = prev[x];
    if (ans >= 1e9)
        cout << "-1";
    else
        cout << ans;
}