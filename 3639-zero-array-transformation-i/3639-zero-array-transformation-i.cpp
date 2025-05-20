class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int q=queries.size(),n=nums.size();
        vector<int>v(n+1,0);
        for(int i=0;i<q;i++){
            v[queries[i][0]]--;
            v[queries[i][1]+1]++;
        }

        for(int i=1;i<=n;i++) v[i]+=v[i-1];

        for(int i=0;i<n;i++){
            nums[i]+=v[i];
            if(nums[i]>0) return false;
        }
        return true;
    }
};