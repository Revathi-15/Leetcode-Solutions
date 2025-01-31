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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[inorder[i]]=i;
        TreeNode*root=func(preorder,0,n-1,inorder,0,n-1,mp);
        return root;
    }
    TreeNode*func(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,map<int,int>&mp){
        if(inStart>inEnd || preStart>preEnd) return NULL;
        TreeNode*node=new TreeNode(preorder[preStart]);
        int idx=mp[node->val];
        int left_nums=idx-inStart;
        node->left=func(preorder,preStart+1,preStart+left_nums,inorder,inStart,idx-1,mp);
        node->right=func(preorder,preStart+left_nums+1,preEnd,inorder,idx+1,inEnd,mp);
        return node;
    }
};