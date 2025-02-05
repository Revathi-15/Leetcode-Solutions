class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int m=s1.size(),n=s2.size();
        if(m!=n) return false;
        if(s1==s2) return true;

        vector<int>v;
        for(int i=0;i<m;i++){
            if(s1[i]!=s2[i]) v.push_back(i);
            if(v.size()>2) return false;
        }
        if(v.size()!=2) return false;//if only 1character is not matching
        swap(s1[v[0]],s1[v[1]]);
        return s1==s2;

    }
};