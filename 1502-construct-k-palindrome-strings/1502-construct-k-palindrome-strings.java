class Solution {
    public boolean canConstruct(String s, int k) {
        int n=s.length();
        if(n<k) return false;
        HashMap<Character,Integer>mp=new HashMap<>();
        for(char ch:s.toCharArray()){
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        int cnt=0;
        for(int it:mp.values()){
            if(it%2==1) cnt++;
        }
        return cnt<=k;
    }
}