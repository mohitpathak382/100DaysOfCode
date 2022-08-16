 class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1) return 0;
        int alphabet[26]={0};
        
        for(int i=0;i<s.size();i++)
            alphabet[s[i]-'a']++;
        
        for(int i=0;i<s.size();i++)
            if(alphabet[s[i]-'a'] ==1)
                return i;
        
        return -1;
    }
};
