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
    bool func(TreeNode*lt,TreeNode*rt){
        if(lt==NULL||rt==NULL) return (lt==rt);
        return (lt->val==rt->val)&&func(lt->left,rt->right)&&func(lt->right,rt->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return NULL;
        return func(root->left,root->right);
    }
};