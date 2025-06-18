class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
           if(i+2<n && nums[i+2]-nums[i]<=k) v.push_back({nums[i],nums[i+1],nums[i+2]});
           else return {};
        }
        return v;
    }
};