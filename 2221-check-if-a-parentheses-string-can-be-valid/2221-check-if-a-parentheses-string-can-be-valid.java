class Solution {
    public boolean canBeValid(String s, String locked) {
        int n=locked.length();
        if(n%2==1) return false;
        int open_cnt=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='('||locked.charAt(i)=='0') open_cnt++;
            else open_cnt--;
            if(open_cnt<0) return false;
        }
        open_cnt=0;
        for(int i=n-1;i>0;i--){
            if(s.charAt(i)==')'||locked.charAt(i)=='0') open_cnt++;
            else open_cnt--;
            if(open_cnt<0) return false;
        }
        return true;
    }
}