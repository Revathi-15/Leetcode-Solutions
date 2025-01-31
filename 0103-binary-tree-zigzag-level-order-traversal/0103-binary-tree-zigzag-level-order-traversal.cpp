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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL) return v;
        bool flag=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int nlev=q.size();
            vector<int>temp;
            for(int i=0;i<nlev;i++){
                TreeNode*node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(!flag) 
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
            flag=!flag;
        }
        return v;
    }
};