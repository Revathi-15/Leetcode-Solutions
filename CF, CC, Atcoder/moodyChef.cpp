#include <bits/stdc++.h>
using namespace std;

int ops(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int count = 0, mex = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > mex) {
            mex++;
        } else if (arr[i] == mex) {
            mex++;
        }
        count += max(0, arr[i] - mex);
    }
    count += arr.size() - mex;
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        cout << ops(arr) << endl;
    }
    return 0;
}