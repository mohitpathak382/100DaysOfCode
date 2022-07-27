https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
  
    int fib(int n) {
        int ans,a=0,b=1;
        if(n<=0)
            return n;
        for(int i=2;i<=n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }

        return ans;
    }
};
