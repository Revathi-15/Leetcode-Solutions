class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size(),cnt=0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int res = nums[i] * nums[j];
                cnt+=mp[res]; //If the product is already seen, add its count
                mp[res]++;//incr the count of this product
            }
        }
        return cnt*8;  // Each valid pair can be arranged in 8 ways
    }
};
