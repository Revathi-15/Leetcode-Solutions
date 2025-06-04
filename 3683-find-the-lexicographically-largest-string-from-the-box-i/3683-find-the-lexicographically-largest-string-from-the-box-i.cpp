class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;
        int n=word.size();
        string str="";
        for(int i=0;i<n;i++){
           str=max(str,word.substr(i,n-numFriends+1));
        }
        return str;
    }
};