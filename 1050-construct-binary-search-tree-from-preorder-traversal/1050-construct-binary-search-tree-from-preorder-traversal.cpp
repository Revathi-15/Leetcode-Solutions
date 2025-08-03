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
    TreeNode*func(vector<int>& preorder,int &idx,int up){
        if(idx==preorder.size() || preorder[idx]>up) return NULL;
        TreeNode*node=new TreeNode(preorder[idx++]);
        node->left=func(preorder,idx,node->val);
        node->right=func(preorder,idx,up);
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return func(preorder,i,INT_MAX);
    }
};