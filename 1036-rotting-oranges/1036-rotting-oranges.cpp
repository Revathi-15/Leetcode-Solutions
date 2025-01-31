class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)  q.push({{i,j},0});
            }
        }

        int t=0;
        while(!q.empty()){
            int x=q.front().first.first,y=q.front().first.second;
            t=q.front().second;
            q.pop();
            if(x-1>=0 && grid[x-1][y]==1){
                q.push({{x-1,y},t+1});
                grid[x-1][y]=2;
            }
            if(y-1>=0 && grid[x][y-1]==1){
                q.push({{x,y-1},t+1});
                grid[x][y-1]=2;
            }if(x+1<m && grid[x+1][y]==1){
                q.push({{x+1,y},t+1});
                grid[x+1][y]=2;
            }if(y+1<n && grid[x][y+1]==1){
                q.push({{x,y+1},t+1});
                grid[x][y+1]=2;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return t;
    }
};