class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size(),j=0,k=n-1,sum=0;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])  continue;
              j=i+1;
             k=n-1;
             while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else{
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    v.push_back(temp);
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] && j<k) j++;
                    while(nums[k]==nums[k+1] &&j<k) k--;
                }
             }
        }
        return v;
    }
};