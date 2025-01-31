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
    int rec(TreeNode* node,int &maxi){
        if(node==NULL) return 0;
        int lt=rec(node->left,maxi);
        int rt=rec(node->right,maxi);
        maxi=max(maxi,lt+rt);
        return 1+max(lt,rt);
    }

    int diameterOfBinaryTree(TreeNode* root) {
         int maxi=0;
       rec(root,maxi);
        return maxi;
    }
};