#include <bits/stdc++.h>
using namespace std;

void fun(int idx, vector<int> &s, int arr[], int sum, int key, int n)
{   if (idx == n)
    { if (key == sum)
        {   
            for (auto it : s)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    s.push_back(arr[idx]);
    sum += arr[idx];
    fun(idx + 1, s, arr, sum, key, n);

    sum -= arr[idx];
    s.pop_back();

    fun(idx + 1, s, arr, sum, key, n);
}

int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> s;
    fun(0, s, arr, 0, key, n);
}