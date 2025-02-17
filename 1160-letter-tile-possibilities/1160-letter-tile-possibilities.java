class Solution {
    void func(String tiles,StringBuilder curr,boolean seen[],Set<String>st){
        st.add(curr.toString());
        for(int i=0;i<tiles.length();i++){
            if(!seen[i]){
                seen[i]=true;
                func(tiles,curr.append(tiles.charAt(i)),seen,st);
                curr.deleteCharAt(curr.length()-1);
                seen[i]=false;
            }
        }
    }

    public int numTilePossibilities(String tiles) {
        boolean seen[]=new boolean[tiles.length()];
        Set<String>st=new HashSet<>();
        func(tiles,new StringBuilder(),seen,st);
        return st.size()-1;   
    }
}