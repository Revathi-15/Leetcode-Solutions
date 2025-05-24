class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int n=1;n<=numRows;n++){
            vector<int>temp;
            int res=1;
            for(int r=1;r<=n;r++){
                temp.push_back(res);
                res=res*(n-r)/r;
            }
            v.push_back(temp);
        }
        return v;
    }
};