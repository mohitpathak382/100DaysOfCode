class Solution {
public:
    void solution(vector<int> &resArray ,TreeNode *curr){
        if(curr == NULL)
            return ;
    solution(resArray,curr->left);
    resArray.push_back(curr->val);
    solution(resArray,curr->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> resArray;
            solution(resArray,root);
        
        return resArray[--k]; 
        
    }
};
