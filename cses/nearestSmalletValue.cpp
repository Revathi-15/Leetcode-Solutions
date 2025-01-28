#include <iostream>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<long long int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    int top = -1;
    vector<long long int> vect(n);

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            vect[i] = 0;
        } else {
            vect[i] = s.top() + 1;
        }
        s.push(i);
    }

    
    for (int i = 0; i < n; i++) {
        cout<< vect[i] << " ";
    }
    cout << endl;

    return 0;
}
