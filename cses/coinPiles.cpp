#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t > 0) {
        long long a, b;
        cin >> a >> b;
        if (((a + b) % 3 == 0) && (min(a, b) * 2 >= max(a, b)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}
