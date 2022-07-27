class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if(nums.size() ==NULL) return res;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target && res[0] ==-1)
            {
                res[0] =i;
                continue;
            }
            if(nums[i]==target)
                res[1]=i;
        }
        if(res[1] == -1)
            res[1]=res[0];
        
        return res;
        
    }
};
