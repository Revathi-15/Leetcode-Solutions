class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
         int n=nums.length,count=0,maxi=Integer.MIN_VALUE;
         for(int i=0;i<n;i++){
            if(nums[i]==1)  count++;
            else count=0;
            maxi=Math.max(maxi,count);
         }
         return maxi;
    }
}