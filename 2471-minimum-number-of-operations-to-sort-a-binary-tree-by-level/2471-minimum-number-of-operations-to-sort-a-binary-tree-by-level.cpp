/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int func(vector<int>&v){
        vector<int>temp(v.begin(),v.end());
            sort(temp.begin(), temp.end());
            int res=0;
            unordered_map<int,int>mp;
            for(int i=0;i<v.size();i++) mp[v[i]]=i;

            for(int i=0;i<v.size();i++){
                if(v[i]!=temp[i]) res++;

                int pos=mp[temp[i]];
                mp[v[i]]=pos;
                swap(v[i],v[pos]);
            }
            return res;
    }
    int minimumOperations(TreeNode* root) {
        int cnt=0;
        if(root==NULL) return cnt;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left!=NULL){
                     q.push(node->left);
                     v.push_back(node->left->val);
                }
                if(node->right!=NULL){
                  q.push(node->right);
                  v.push_back(node->right->val);
                }
            }
            cnt+=func(v);
        }
        return cnt;
    }
};