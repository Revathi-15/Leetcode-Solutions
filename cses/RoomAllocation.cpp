#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> vect(n);
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vect[i].first.first = a;
        vect[i].first.second = b;
        vect[i].second = i;
    }
    sort(vect.begin(), vect.end());
    priority_queue<pair<int,int>> pq;
    int room = 0; 
    int ans[n];
    for(int i = 0; i < n; i++) {
        if(pq.empty()) {
            room++;
            ans[vect[i].second] = room;
            pq.push(make_pair(-vect[i].first.second, room));
        }
        else {
            pair<int,int> m = pq.top();
            if(vect[i].first.first > -m.first) {
                pq.pop();
                pq.push(make_pair(-vect[i].first.second, m.second)); 
                ans[vect[i].second] = m.second;  
            }
            else {
                room++;
                pq.push(make_pair(-vect[i].first.second, room));          
                ans[vect[i].second] = room;
            }
        }
    }
    cout << room << endl;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}