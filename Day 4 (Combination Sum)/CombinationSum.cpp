https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void solution(int id,vector<int> &candidates, vector<vector<int>> &ans,vector<int> &ds,int target){
        if(id == candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
          if(candidates[id] <= target){
            target-=candidates[id];
            ds.push_back(candidates[id]);
            solution(id,candidates,ans,ds,target);
            target+=candidates[id];
            ds.pop_back();
        }
        solution(id+1,candidates,ans,ds,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solution(0,candidates,ans,ds,target);
        return ans;
    }
};
