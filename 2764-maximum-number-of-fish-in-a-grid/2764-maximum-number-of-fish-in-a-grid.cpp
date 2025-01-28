class Solution {
public:
    vector<vector<int>>dir={{0,-1},{1,0},{-1,0},{0,1}};
    int dfs(int i,int j,vector<vector<int>>& grid){
        int cnt=grid[i][j];
        grid[i][j]=0;
        for(int k=0;k<4;k++){
            int x=i+dir[k][0],y=j+dir[k][1];
            if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] > 0) cnt += dfs(x, y, grid);
        }
        return cnt;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0) maxi=max(maxi,dfs(i,j,grid));
            }
        }
        return maxi;
    }
};