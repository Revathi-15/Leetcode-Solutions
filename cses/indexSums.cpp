#include <bits/stdc++.h>
using namespace std;

int fun(int x, int n, vector<int>& a) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x)  return i+1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)  cin >> a[i];
        for (int i = 0; i < n; i++)  cin >> b[i];

        int req = 0;
        for (int i = 0; i < n; i++) {
            int idx = INT_MAX;
            req = b[i] - a[i];
            idx = min(idx, fun(req, n, a));
          cout << idx<<" ";
        }
        t--;
    }
    return 0;
}
