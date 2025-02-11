class Solution {
    public String removeOccurrences(String s, String part) {
        int m=part.length();
        StringBuilder str=new StringBuilder();
        for(char ch:s.toCharArray()){
            str.append(ch);
            if(str.length()>=m && str.substring(str.length()-m).equals(part)) str.delete(str.length()-m,str.length());
        }
        return str.toString();
    }
}