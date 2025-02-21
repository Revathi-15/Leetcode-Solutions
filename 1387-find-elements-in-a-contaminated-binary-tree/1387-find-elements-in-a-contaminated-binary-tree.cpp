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
class FindElements {
public:
    TreeNode*temp;
    FindElements(TreeNode* root) {
        temp=root;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        root->val=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
               int x=q.front().second;
                TreeNode*node=q.front().first;
                q.pop();
                if(node->left!=NULL){
                    q.push({node->left,2*x+1});
                    node->left->val=2*x+1;
                }
                if(node->right!=NULL){
                    q.push({node->right,2*x+2});
                    node->right->val=2*x+2;
                }
            }
        }
    }
    
    int func(TreeNode*node,int target){
        if(node==NULL) return false;
        if(target==node->val) return true;
        return func(node->left,target) || func(node->right,target);
    }

    bool find(int target) {
        return func(temp,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */