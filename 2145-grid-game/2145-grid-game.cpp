class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long row1=accumulate(grid[0].begin(),grid[0].end(),0LL);
        long long row2=0,res=LONG_MAX;
        for(int j=0;j<n;j++){
            row1-=(grid[0][j]);
            res=min(res,max(row1,row2));
            row2+=grid[1][j];
        }
        return res;
    }
};