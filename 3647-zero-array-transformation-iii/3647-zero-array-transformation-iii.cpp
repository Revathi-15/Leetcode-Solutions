class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int q = queries.size(), n = nums.size();
        sort(queries.begin(), queries.end());

        priority_queue<int>av; // maxheap - available queries
        priority_queue<int,vector<int>,greater<int>>ap; //minheap - applied queries 
        int q_idx=0,cnt=0;
        for(int i=0;i<n;i++){
            while(q_idx<q && queries[q_idx][0]==i){
                av.push(queries[q_idx][1]);
                q_idx++;
            }
            nums[i]-=ap.size();

            while(!av.empty() && av.top()>=i && nums[i]>0){
                ap.push(av.top());
                cnt++;
                av.pop();
                nums[i]--;
            }

            if(nums[i]>0) return -1;

            while(!ap.empty() && ap.top()==i){
                ap.pop();
            }
        }
        return q-cnt;
    }
};