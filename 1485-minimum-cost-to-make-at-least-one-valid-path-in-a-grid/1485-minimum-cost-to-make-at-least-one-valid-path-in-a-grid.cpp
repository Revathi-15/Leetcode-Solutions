class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
        vector<vector<int>>cost(m,vector<int>(n,INT_MAX));
        vector<vector<int>>dir={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        pq.emplace(0,0,0);
        cost[0][0]=0;
        while(!pq.empty()){
            auto [curr_cost,x,y]=pq.top();
            pq.pop();
            if(curr_cost > cost[x][y])  continue;
            for(int i=0;i<4;i++){
                int nx=x+dir[i][0],ny=y+dir[i][1];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                int nxt_cost=curr_cost+(i!=grid[x][y]-1);
                if(nxt_cost<cost[nx][ny]){
                    cost[nx][ny]=nxt_cost;
                    pq.emplace(nxt_cost,nx,ny);
                }
            }
        }
        return cost[m-1][n-1];
    }
};