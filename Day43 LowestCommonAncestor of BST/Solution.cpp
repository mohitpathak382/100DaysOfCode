/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || p==root || root==q) return root;
        
        TreeNode *le=lowestCommonAncestor(root->left,p,q);
        TreeNode *ri=lowestCommonAncestor(root->right,p,q);
        
        if(le == NULL) return ri;
        else if(ri == NULL)return le;
        
        else
            return root;

    }
};
