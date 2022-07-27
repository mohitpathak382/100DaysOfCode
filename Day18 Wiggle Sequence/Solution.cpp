class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int diff,prev=nums[1]-nums[0];
        int count = prev==0?1:2;
        
        for(int i=2;i<nums.size();i++){
            diff=nums[i]-nums[i-1];
            if((prev>=0 && diff<0) || (prev<=0 && diff>0)){
                count++;
                prev=diff;
            }
        }
        return count;
    }
};
