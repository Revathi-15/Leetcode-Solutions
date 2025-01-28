#include <bits/stdc++.h>
using namespace std;

bool canWin(int m, int ds, int sa, int sb, int um, bool t, vector<int>& g, vector<vector<vector<int>>>& dp) {
    if (sb >= ds) return false;
    if (sa >= ds) return true;
    int& memo = dp[um][sa][t ? 1 : 0];
    if (memo != -1) {
        return memo == 1;
    }

    bool win = false;
    for (int i = 0; i < m; i++) {
        if (!(um & (1 << i))) {
            int nm = um | (1 << i);
            int nsa = t ? sa + g[i] : sa;
            int nsb = t ? sb : sb + g[i];
            if (!canWin(m, ds, nsa, nsb, nm, !t, g, dp)) {
                win = true;
                break;
            }
        }
    }
    dp[um][sa][t ? 1 : 0] = win ? 1 : 0;
    return win;
}

bool canFirstPlayerWin(int m, int ds) {
    int s = m * (m + 1) / 2;
    if (ds <= 0) return true;
    if (ds > s) return false;
    if (ds <= m) return true;

    vector<int> g(m);
    for (int i = 0; i < m; i++) {
        g[i] = i + 1;
	}

    vector<vector<vector<int>>> dp(1 << m, vector<vector<int>>(ds + 1, vector<int>(2, -1)));

    return canWin(m, ds, 0, 0, 0, true, g, dp);
}