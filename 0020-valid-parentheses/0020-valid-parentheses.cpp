class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size(),i=0;
        while(i<n){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(!st.empty() && ((st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']')|| (st.top()=='{' && s[i]=='}'))) st.pop();
                else st.push(s[i]);
            }
            i++;
        }
        if(st.empty()) return true;
        return false;
    }
};