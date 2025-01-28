class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size(), cnt = 0;
        for (int i = 0; i < n; i++) {
            int m = words[i].size();
            for (int j = i + 1; j < n; j++) {
                if (words[i] == words[j]) { 
                    cnt++;  // Count identical strings
                    continue;
                }
                if (m > words[j].size()) continue;
                int x = words[j].size();
                string str1 = words[j].substr(0, m),str2 = words[j].substr(x - m, m);
                cnt=(str1==words[i] && str2==words[i])?cnt+1:cnt;
            }
        }
        return cnt;
    }
};