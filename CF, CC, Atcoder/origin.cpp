#include <bits/stdc++.h>
using namespace std;
int digitalRoot(int n) {
    if (n == 0)
        return 0;
    return (n % 9 == 0) ? 9 : n % 9;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int sum = 0;

        for (int i = 1; i <= 9; ++i) {
            sum += digitalRoot(i) * (n / 9);
        }

        for (int i = 1; i <= n % 9; ++i) {
            sum += digitalRoot(i);
        }

        cout << sum << endl;
    }
    return 0;
}
