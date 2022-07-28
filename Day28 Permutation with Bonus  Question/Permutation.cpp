https://leetcode.com/problems/permutations/

class Solution {
public:
    void solution(vector<int> &nums,vector<vector<int>> &ans,vector<int> &ds,int  arr[])
    {
        if(nums.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
            if(arr[i] == 0){
                ds.push_back(nums[i]);
                arr[i]=1;
                solution(nums,ans,ds,arr);
                arr[i]=0;
                ds.pop_back();
            }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++) arr[i]=0;
        solution(nums,ans,ds,arr);
        return ans;
    }
};
