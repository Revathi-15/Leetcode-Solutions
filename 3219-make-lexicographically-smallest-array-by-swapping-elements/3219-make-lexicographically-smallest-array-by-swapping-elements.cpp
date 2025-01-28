class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> no_idx;

        for (int i = 0; i < n; i++) {
            no_idx.push_back({nums[i], i});
        }
        sort(no_idx.begin(), no_idx.end());

        vector<vector<int>> grps;
        grps.push_back({no_idx[0].second});
        for (int i = 1; i < n; i++) {
            if (abs(no_idx[i].first - no_idx[i - 1].first) <= limit)  grps.back().push_back(no_idx[i].second); // Add to the current group
             else grps.push_back({no_idx[i].second}); // Create a new group
        }

        for (auto& grp : grps) {
            vector<int> sorted_values;
            for (int i = 0; i < grp.size(); i++) {
                sorted_values.push_back(nums[grp[i]]);
            }
            sort(grp.begin(), grp.end()); 
           for (int i = 0; i < grp.size(); i++) nums[grp[i]] = sorted_values[i];
        }

        return nums;
    }
};
