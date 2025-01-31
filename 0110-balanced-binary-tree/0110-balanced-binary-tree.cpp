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
    int func(TreeNode*node){
        if(node==NULL) return 0;
        int lt=func(node->left);
        int rt=func(node->right);
        if(lt==-1||rt==-1) return -1;
        if(abs(lt-rt)>1) return -1;
        return 1+max(lt,rt);
      return true;
    }
    bool isBalanced(TreeNode* root) {
        int x=func(root);
        if(x==-1) return false;
        return true;
    }
};