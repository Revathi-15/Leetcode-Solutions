#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> freq;
    bool isAscending = true;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 1 || arr[i] > n || freq.find(arr[i]) != freq.end())
            return false;

        freq[arr[i]]++;

        if (i != 0 && arr[i] < arr[i - 1])
            isAscending = true;
    }

    return isAscending;
}

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
        if (isBeautiful(arr))
            cout << "Yes" << endl;
        else
          cout << "No" << endl;
  }
    return 0;
}
