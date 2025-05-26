class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n=nums.size(),count=0,maxi=INT_MIN;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n;i++){
              if(i>0 && nums[i]==nums[i-1]+1) count++;
              else if(i>0 && nums[i]==nums[i-1]) continue;
              else count=1;
              maxi=max(maxi,count);
         }
         if(maxi==INT_MIN && n==0) return 0;
         return maxi;
    }
};