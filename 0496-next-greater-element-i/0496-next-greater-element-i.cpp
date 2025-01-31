class Solution {
    int func(stack<int>s,int x,int comp){
        while(!s.empty() && comp!=s.top()){
            if(comp<s.top()) 
               x=s.top();
            s.pop();
        }
        return x;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        for(int i=0;i<nums2.size();i++) s.push(nums2[i]);
        vector<int>v(nums1.size());
        for(int i=0;i<nums1.size();i++){
            v[i]=func(s,-1,nums1[i]);
        }
        return v;
    }
};