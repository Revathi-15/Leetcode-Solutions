class Solution {
public:
   void rec(int idx,vector<int>& candidates, int k,vector<int> temp,vector<vector<int>> &arr){
        if(k==0){
             arr.push_back(temp);
            return;
        }
        if(k<0 || idx>=candidates.size())  return;
        temp.push_back(candidates[idx]);
        rec(idx,candidates,k-candidates[idx],temp,arr);
        temp.pop_back();
         rec(idx+1,candidates,k,temp,arr);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> arr;
        vector<int> temp;
        rec(0,candidates,target,temp,arr);
        return arr;
    }
};