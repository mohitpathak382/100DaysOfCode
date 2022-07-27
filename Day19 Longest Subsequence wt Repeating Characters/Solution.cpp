class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.size()<2) return s.size();
        int left=0,right=0;
        int ans=0;
        char ch[256]={0};
        while(right < s.length()){
            ch[s[right]] ++;
            while(ch[s[right]]>1){
                ch[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
