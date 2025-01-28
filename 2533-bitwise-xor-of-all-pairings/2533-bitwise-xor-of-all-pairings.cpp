class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        unordered_map<int,long long>mp;
        for(auto it:nums1) mp[it]+=n;
        for(auto it:nums2) mp[it]+=m;//each no in 1st arr is paired n no of times and vice - versa

        int res=0;
        for(auto it:mp){
            if(it.second%2==1) res^=it.first;
        }
        return res;
    }
};