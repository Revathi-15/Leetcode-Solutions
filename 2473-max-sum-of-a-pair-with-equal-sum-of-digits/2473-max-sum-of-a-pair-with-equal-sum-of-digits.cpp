#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int func(int num){
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>> mp;

        for(int i=0; i<n; i++){
            int x = func(nums[i]);
            mp[x].push_back(nums[i]);
        }

        int maxi = -1;
        for(auto &it : mp){
            if(it.second.size() > 1){
                sort(it.second.rbegin(), it.second.rend()); // Sort in descending order
                int x = it.second[0] + it.second[1]; // Pick the two largest elements
                maxi = max(maxi, x);
            } 
        }
        return maxi;
    }
};