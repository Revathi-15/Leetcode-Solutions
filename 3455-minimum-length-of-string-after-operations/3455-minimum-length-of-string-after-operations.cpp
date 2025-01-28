class Solution {
public:
    int minimumLength(string s) {
        vector<int> v(26, 0); 
        int n = s.size();
        
        for (int i = 0; i < n; i++)   v[s[i] - 'a']++;
        
        int cnt = 0;
        for (int i=0;i<26;i++) {
            if(v[i]==0) continue;
           cnt+=(v[i]%2==0)?2:1;
        }
        
        return cnt;
    }
};