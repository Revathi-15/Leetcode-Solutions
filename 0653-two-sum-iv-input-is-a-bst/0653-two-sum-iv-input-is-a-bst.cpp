/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int target) {
        if (!root)  return false;

        stack<TreeNode*> s1, s2;
        TreeNode* temp1 = root;
        TreeNode* temp2 = root; 
        while (true) {
            while (temp1) {
                s1.push(temp1);
                temp1 = temp1->left;
            }
            while (temp2) {
                s2.push(temp2);
                temp2 = temp2->right;
            }

            if (s1.empty() || s2.empty())   break;

            temp1 = s1.top(); 
            temp2 = s2.top(); 
            int val1 = temp1->val;
            int val2 = temp2->val;

            if (val1 + val2 == target) {
                if (temp1 == temp2)
                    return false; 
                return true;
            }
            else if (val1 + val2 < target) {
                s1.pop();
                temp1 = temp1->right; 
                temp2 = nullptr;      
            }
            else {
                s2.pop();
                temp2 = temp2->left; 
                temp1 = nullptr;
            }
        }

        return false;
    }
};