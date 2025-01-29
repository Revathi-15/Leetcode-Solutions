class Solution {
public:
    vector<int> dfs(int i, int parent, vector<bool>& visit, vector<vector<int>>& adj) {
        visit[i] = true;
        for (auto it : adj[i]) {
            if (!visit[it]) {
                vector<int> cycleEdge = dfs(it, i, visit, adj);
                if (!cycleEdge.empty()) return cycleEdge;
            } 
            else if (it != parent) return {parent, it}; 
        }
        return {};
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n + 1);
        vector<bool> visit(n + 1, false);

        for (auto& it : edges) {
            fill(visit.begin(), visit.end(), false);
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);

            if (!dfs(it[0], -1, visit, adj).empty()) return it;
        }
        return {};
    }
};