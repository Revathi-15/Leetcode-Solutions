class Solution {
    public int[] findEvenNumbers(int[] digits) {
        int n=digits.length;
        Set<Integer>st=new HashSet<>();
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                   if(k==i || k==j) continue;
                   int x=digits[i]*100+digits[j]*10+digits[k];
                   if(x%2==0) st.add(x);
                }
            }
        }
        int []arr=new int[st.size()];
        int idx=0;
        for(int it:st){
            arr[idx++]=it;
        }
        Arrays.sort(arr);
        return arr;
    }
}