class Solution {
public:
    string clearDigits(string s) {
        int n = s.size(), cnt = 0;
        vector<int> v;
        string str="";
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                str+=s[i];
                v.push_back(str.size()-1);
            }
            else if(!v.empty()){
                str.pop_back();
                v.pop_back();
            }
        }
        return str;
    }
};