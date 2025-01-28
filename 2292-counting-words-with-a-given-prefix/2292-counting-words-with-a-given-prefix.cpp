class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int m=pref.size(),cnt=0,n=words.size();
        for(int i=0;i<n;i++){
            cnt=(words[i].substr(0,m)==pref)?cnt+1:cnt;
        }
        return cnt;
    }
};