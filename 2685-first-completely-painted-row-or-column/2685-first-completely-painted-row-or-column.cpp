class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),l=arr.size();
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) mp[mat[i][j]]={i,j};
        }

        vector<int>x(m,0),y(n,0);
        for(int a=0;a<l;a++){
            auto [i,j]=mp[arr[a]];
            x[i]++;
            y[j]++;
            if(x[i]==n||y[j]==m) return a;
        }
        return l-1;
    }
};