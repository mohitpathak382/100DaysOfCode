Link of the Question 
https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int uni=nums[nums.size()-1],count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(count == 2)
            {
                count=1;
                continue;
            }
            if(nums[i] == nums[i+1])
                count++;
            
            if(count==1)
                uni=nums[i];
        }
        return uni;
    }
};
