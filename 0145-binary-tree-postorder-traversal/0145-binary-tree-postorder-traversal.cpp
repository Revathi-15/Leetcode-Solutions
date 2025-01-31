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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>v;
        if(root==NULL) return v;
        s.push(root);
        while(!s.empty()){
            TreeNode*node=s.top();
            s.pop();
            v.push_back(node->val);
            if(node->left!=NULL) s.push(node->left);
            if(node->right!=NULL) s.push(node->right);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};