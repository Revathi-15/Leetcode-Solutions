#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void dfs(int node, int parent, vector<int>& path, vector<vector<int>>& adj, int target, bool& found) {
    path.push_back(node);
    if (node == target) {
        found = true;
        return;
    }
    for (int neighbor : adj[node]) {
        if (neighbor != parent && !found)  dfs(neighbor, node, path, adj, target, found);
    }
    if (!found) path.pop_back();
}

vector<int> solveTreeQueries(vector<int>& arr, vector<vector<int>>& edges, vector<vector<int>>& queries) {
    int n = arr.size();
    vector<vector<int>> adj(n);
    long long sum = 0;
    
    for (int i = 0; i < n; i++)     sum = (sum + arr[i]) % MOD;
  
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    vector<int> results;
    
    for (auto& query : queries) {
        int u = query[0], v = query[1], x = query[2];
        vector<int> path;
        bool found = false;
        
        dfs(u, -1, path, adj, v, found);
        long long querySum = sum;
        for (int node : path) {
            querySum = (querySum - arr[node] + MOD) % MOD;
            querySum = (querySum + (1LL * arr[node] * x) % MOD) % MOD;
        }
        results.push_back(querySum);
    }
    
    return results;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> edges = {{0, 1}, {1, 2}};
    vector<vector<int>> queries = {{0, 2, 2}, {1, 2, 3}};
    
    vector<int> result = solveTreeQueries(arr, edges, queries);
    
    for (int res : result) {
        cout << res << endl;
    }
    return 0;
}
