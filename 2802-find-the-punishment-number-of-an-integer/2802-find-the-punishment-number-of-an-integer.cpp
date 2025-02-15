class Solution {
public:
    int func(string &s,int idx,int target){
        if(idx==s.size()) return target==0;
        int sum=0;
        for(int i=idx;i<s.size();i++){
            sum=sum*10+(s[i]-'0');
            if(sum>target) break;
            if(func(s,i+1,target-sum)) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int res=0;
        for(int i=1;i<=n;i++){
            int sq_no=i*i;
            string str=to_string(sq_no);
            if(func(str,0,i)) res+=sq_no;
        }        
        return res;
    }
};