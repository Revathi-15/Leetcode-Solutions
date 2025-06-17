class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size(),maxi=0;
        st.insert(nums.begin(), nums.end());

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int x = it;
                int cnt = 1;
                while (st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};