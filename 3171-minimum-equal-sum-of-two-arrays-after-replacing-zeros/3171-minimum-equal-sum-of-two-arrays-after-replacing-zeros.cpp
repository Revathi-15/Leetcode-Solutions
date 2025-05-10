class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long x=0,y=0,cnt1=0,cnt2=0;
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            if(nums1[i]==0) cnt1++;
            else x+=nums1[i];
        }

        for(int i=0;i<m;i++){
            if(nums2[i]==0) cnt2++;
            else y+=nums2[i];
        }

        long long mini1=x+cnt1;
        long long mini2=y+cnt2;

        if((mini1>y && cnt2==0) || (mini2>x && cnt1==0)) return -1;
        return max(mini1,mini2);
    }
};