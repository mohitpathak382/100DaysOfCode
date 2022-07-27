class Solution {
public:
    vector<int> ds;
    void solution(vector<int>& nums,vector<vector<int>> &ans,int ind){
        if(ind == nums.size()){
            ans.push_back(ds);
            return ;
        }
        ds.push_back(nums[ind]);
        solution(nums,ans,ind+1);
        ds.pop_back();
        solution(nums,ans,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        solution(nums,ans,0);
        return ans;
    }
};
