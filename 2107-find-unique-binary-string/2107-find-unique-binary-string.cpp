class Solution {
public:
    int n;
    unordered_map<string, int> mp; 
    string func(string curr) {
        if (curr.size() == n) {
            if (mp.find(curr) == mp.end()) return curr;
            return "";
        }
        string str = func(curr + "0");
        if(str.size()>0) return str;
        return func(curr + "1");
    }

    string findDifferentBinaryString(vector<string>& nums) {
        n=nums.size();
        for (string str : nums) mp.insert({str, 1});  
        return func("");
    }
};