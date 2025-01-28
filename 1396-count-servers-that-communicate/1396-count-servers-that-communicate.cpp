class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int cnt = 0, m = grid.size(), n = grid[0].size();
        vector<int>rows(m,0),cols(n,0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
               if(grid[i][j]){
                 rows[i]++;
                 cols[j]++;
               }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
               if(grid[i][j]){
                 cnt+=rows[i]>1 || cols[j]>1;
               }
            }
        }
        return cnt;
    }
};