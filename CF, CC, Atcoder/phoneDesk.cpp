#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            cout << "0" << endl;
        } else {
            if (y != 0) {
                int sum = ceil(y / 2.0);
                int left = sum * 15 - y * 4;
                x=x-left;
                if(x>0){
                    sum += ceil(x /15.0);
                }
                cout << sum << endl;
            } else {
                cout << ceil(x / 15.0) << endl;
            }
        }
    }
}