#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long f(long long a, long long b) {
    if (b == 0) return 1;
    long long x = f(a, b / 2) % MOD;
    if (b % 2 == 1) return (((x * x) % MOD) * a) % MOD;
    else return (x * x) % MOD;   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        cout << f(a, b) << endl;
    }
    return 0;
}
