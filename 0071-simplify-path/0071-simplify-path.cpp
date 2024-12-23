class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            if(path[i]=='/') continue;
            string s="";
            while(i<n && path[i]!='/'){
                 s+=path[i];
                 i++;
            }    
            if(s==".") continue;
            else if(s==".."){
                if(!st.empty())
                  st.pop();
            }
            else  st.push(s);
        }
        string str="";
          if(st.empty()) return "/";
        while(!st.empty()){
            str="/"+st.top()+str;
            st.pop();
        }
      return str;
    }
};