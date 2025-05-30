class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int>v1(n,-1);
        vector<int>v2(n,-1);
        queue<int>q;
        q.push(node1);
        v1[node1]=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(edges[u]!=-1 && v1[edges[u]]==-1){
                v1[edges[u]]=v1[u]+1;
                q.push(edges[u]);
            }  
        }

        q.push(node2);
        v2[node2]=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(edges[u]!=-1 && v2[edges[u]]==-1){
                v2[edges[u]]=v2[u]+1;
                q.push(edges[u]);
            }  
        }

        int mini=INT_MAX,node=-1;
        for(int i=0;i<n;i++){
            if(v1[i]!=-1 && v2[i]!=-1){
                int maxi=max(v1[i],v2[i]);
                if(mini>maxi){
                    mini=maxi;
                    node=i;
                }
            }
        }
        return node;
    }
};