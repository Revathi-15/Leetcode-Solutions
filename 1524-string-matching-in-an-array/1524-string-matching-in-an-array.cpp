class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>st;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j&&words[i].find(words[j])!=string::npos && st.find(words[j])==st.end()) st.insert(words[j]);
                
            }
        }
        vector<string>v(st.begin(),st.end());
        return v;
    }
};