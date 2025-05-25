class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int n=words.size();
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }

        int cnt=0;
        bool flag=false;
        for(auto it:mp){
            string str=it.first,st=str;
            reverse(st.begin(),st.end());
            if(str==st){
               cnt+=(it.second/2)*4;  //if more pairs like gg
               if(it.second%2==1){
                 flag=true;
               } 
            } 
            else if(mp.find(st)!=mp.end()){
                int pairs=min(it.second,mp[st]);
                cnt+=4*pairs;
                mp[st]=0;
            }
        }
        if(flag) cnt+=2;//only 1 time we should add 2
        return cnt;
    }
};