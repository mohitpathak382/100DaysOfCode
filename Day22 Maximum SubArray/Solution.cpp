class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,mx=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mx= mx<sum ? sum:mx;
            if(sum < 0 )
                sum=0;
        }
        return mx;
    }
};
