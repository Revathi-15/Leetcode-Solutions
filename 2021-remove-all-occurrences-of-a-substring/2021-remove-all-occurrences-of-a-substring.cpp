class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
        string str="";
        for(char ch:s){
            str+=ch;
            if(str.size()>=m && str.substr(str.size()-m)==part) str.erase(str.size()-m);
        }
        return str;
    }
};