class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),cnt=nums[0],maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) cnt=cnt+nums[i];
            else cnt=nums[i];
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};