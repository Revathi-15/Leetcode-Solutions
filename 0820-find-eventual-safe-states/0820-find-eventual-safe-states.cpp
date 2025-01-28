class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int m=graph.size();
        vector<vector<int>>rev(m); //reversed graph to remove dependencies of cyclic graph
        vector<int>in_deg(m,0);
        for(int root=0;root<m;root++){
            for(int node:graph[root]){
                rev[node].push_back(root);
                in_deg[root]++;
            }
        }
        queue<int>q;
        for(int i=0;i<m;i++){
            if(in_deg[i]==0) q.push(i); //pushing no's with indegree=0 
        }

        vector<bool>safe(m,false);//stores safe nodes
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe[node]=true;
            for(int it:rev[node]){
                in_deg[it]--;
                if(in_deg[it]==0) q.push(it);
            }
        }
        vector<int>v;
        for(int i=0;i<m;i++){
            if(safe[i]) v.push_back(i);
        }
        return v;
    }
};