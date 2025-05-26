class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,el1=0,el2=0,n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
             if(c1==0 && nums[i]!=el2){
                 el1=nums[i];
                 c1++;
             }
             else if(c2==0 && nums[i]!=el1){
                el2=nums[i];
                c2++;
             }
             else if(nums[i]==el1)  c1++;
             else if(nums[i]==el2)  c2++;
             else{
                 c1--;
                 c2--;
             }
        }
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
             if(el1==nums[i]) count1++;
              if(el2==nums[i]) count2++;
        }
        
          if(count1>n/3) arr.push_back(el1);
          if(count2>n/3 && el1!=el2) arr.push_back(el2);
          sort(arr.begin(),arr.end());
        return arr;
    }
};