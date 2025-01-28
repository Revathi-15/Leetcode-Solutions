#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n, m;
        cin >>n >>m;
        vector<vector<int>>a(n,vector<int>(m,0));
        for (int i= 0; i < n; i++) {
            for (int j = 0; j< m; j++) {
                cin >>a[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0;j <m;j++) {
                int maxi= 0;
                int f = 1; 

                if (i - 1 >= 0) {
                    maxi = max(maxi, a[i - 1][j]);
                }
                if (j - 1 >= 0) {
                    maxi = max(maxi, a[i][j-1]);
                }
                if (i + 1 < n) {
                    maxi = max(maxi, a[i+1][j]);
                }
                if (j + 1 <m) {
                    maxi = max(maxi,a[i][j+1] );
                }

                if (i - 1 >= 0 && a[i][j] <= a[i-1][j]) {
                    f = 0;
                }
                if (j - 1 >= 0 && a[i][j] <= a[i][j-1] ) {
                    f = 0;
                }
                if (i + 1 < n && a[i][j]  <= a[i+1][j] ) {
                    f = 0;
                }
                if (j + 1 <m &&a[i][j]  <= a[i][j+1] ) {
                    f= 0;
                }

                if (f== 1) {
                   a[i][j]  = maxi;
                }
            }
        }

        for (int i = 0; i< n; i++) {
            for (int j = 0; j<m;j++) {
                cout << a[i][j]  << " ";
            }
            cout << endl;
        }
    }
}