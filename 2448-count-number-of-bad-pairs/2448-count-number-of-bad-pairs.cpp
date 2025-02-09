class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size(),good_pairs=0;
        unordered_map<int,long long>mp;

        for(int i=0;i<n;i++){
            int val=nums[i]-i;
            good_pairs+=mp[val];
            mp[val]++;
        }
        long long total=(n*(n-1))/2;
        return total-good_pairs;
    }
};