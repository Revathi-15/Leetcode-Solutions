#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> in(n);
        for (int i = 0; i < n; i++) cin >> in[i];

        sort(in.begin(), in.end());
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)   prefix[i] = prefix[i - 1] + in[i - 1];

        vector<long long> dp(n + 1, LONG_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1] + in[i - 1];
            if (i > k) dp[i] = min(dp[i], dp[i - k - 1] + prefix[i] - prefix[i - k]);
        }

        for (int i = 1; i <= n; i++) cout << dp[i] << " ";
        cout << endl;
    }
    return 0;
}