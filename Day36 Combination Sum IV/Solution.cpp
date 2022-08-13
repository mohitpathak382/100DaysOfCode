class Solution {
public:
    vector<int> dp;
    
    int combinationSum4(vector<int>& nums, int target,int currSum=0) {
        dp.resize(target+1,-1);
        if(currSum>target) return 0;
        if(currSum == target) return 1;
        if(dp[currSum] !=-1) return dp[currSum];
        int count=0;
        
        for(int i=0;i<nums.size();i++)
            if(currSum+nums[i] <= target)
                count+=combinationSum4(nums,target,currSum+nums[i]);
        
        return dp[currSum]=count;
    }
};
