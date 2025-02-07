class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>mp1,mp2;
        int n=queries.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            if(mp1.empty() || mp1.find(queries[i][0])==mp1.end()){
                mp1[queries[i][0]]=queries[i][1];
                mp2[queries[i][1]]++;
            }
            else{
                int x=mp1[queries[i][0]];
                mp1[queries[i][0]]=queries[i][1];
                mp2[queries[i][1]]++;
                mp2[x]--;
                if(mp2[x]==0) mp2.erase(x);
            }
            v[i]=mp2.size();
        }
        return v;
    }
};