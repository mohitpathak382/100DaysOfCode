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
    private:
    TreeNode* solution(vector<int>& nums,int left,int right){
        if(left>right) return NULL;
        int mid=(right+left)/2;
        
        TreeNode *root=new TreeNode(nums[mid]);

        root->left=solution(nums,left,mid-1);
        root->right=solution(nums,mid+1,right);
        return root;
        
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return solution(nums,0,nums.size()-1);
    }
};
