#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = s.length();
        int le = 0, r = l - 1;
        char ch1 = s[le];
        char c2 = s[r];
        while (ch1 == c2)
        {
            le++;
            r--;
            ch1 = s[le];
            c2 = s[r];
        }

        if (le > r)
        {
            ch1 = s[0];
            c2 = s[l - 1];
        }

        // cout<<ch1<<"00"<<c2<<endl;,
        string sn = "";
        if (ch1 <= c2)
        {
            sn = s;
        }
        else
        {
            reverse(s.begin(), s.end());
            sn = s;
            reverse(s.begin(), s.end());
            sn += s;
        }
        cout << sn << endl;
    }
}