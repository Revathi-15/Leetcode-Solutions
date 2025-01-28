#include <iostream>
#include <string>
#include <algorithm>
#include <cmath> 
using namespace std;
const long long MOD = 1000000007;
string maximizeStringValue(string s) {
    sort(s.begin(), s.end(), greater<char>());
    return s;
}

long long calculateStringValue(const string &s) {
    long long value = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int charValue = s[i] - 'a' + 1;  
        value = (value + (i + 1) * static_cast<long long>(pow(26, charValue))) % MOD;
    }
    return value;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string maxString = maximizeStringValue(s);
    long long value = calculateStringValue(maxString);

    cout << "The maximized string is: " << maxString << endl;
    cout << "The value of the maximized string is: " << value << endl;

    return 0;
}
