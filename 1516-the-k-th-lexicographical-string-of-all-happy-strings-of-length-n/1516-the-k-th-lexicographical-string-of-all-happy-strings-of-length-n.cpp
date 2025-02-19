class Solution {
public:
    void func(string happy, string s, int n, vector<string>& s_arr, int i) {
        if (s.length() == n) {
            s_arr.push_back(s);
            return;
        }
        if (i >= n) return;
        
        for (char ch : happy) {
            if (s.empty() || s.back() != ch) {
                func(happy, s + ch, n, s_arr, i + 1);
            }
        }
    }

    string getHappyString(int n, int k) {
        string happy = "abc";
        vector<string> s_arr;
        func(happy, "", n, s_arr, 0);
        sort(s_arr.begin(), s_arr.end());
        
        return (k <= s_arr.size()) ? s_arr[k - 1] : "";
    }
};