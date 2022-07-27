class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        double median=0;
        int m=num1.size();
        int n=num2.size();
        vector<int> merged;
        for(int i=0;i<m;i++)
            merged.push_back(num1[i]);
        for(int i=0;i<n;i++)
            merged.push_back(num2[i]);
        sort(merged.begin(),merged.end());
        
        if((n+m)% 2 == 1)
            median=merged[(n+m)/2];
        else
        {
            median=merged[((n+m-1)/2)] + merged[((n+m+1)/2)];
            median/=2;
        }
        return median;
    }
};
