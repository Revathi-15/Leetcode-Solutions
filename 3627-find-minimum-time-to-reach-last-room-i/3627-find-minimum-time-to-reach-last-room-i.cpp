class Solution {
public:
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        int t = 0;
        vector<vector<int>> v(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {0, 0}});
        v[0][0] = 0; 

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int t = it.first;
            int x = it.second.first, y = it.second.second;

            if (t > v[x][y]) continue; 

            for (int i = 0; i < 4; i++) {
                int nx = x + dir[i][0];
                int ny = y + dir[i][1];

                if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    int maxi = max(t + 1, moveTime[nx][ny] + 1);
                    if (maxi < v[nx][ny]) {
                        v[nx][ny] = maxi;
                        pq.push({maxi, {nx, ny}});
                    }
                }
            }
        }
        return v[n - 1][m - 1];
    }
};