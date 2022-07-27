class Solution {
public:
    int converter(char c)
    {
        switch(c)
        {
            case 'I': return 1;   break; 
            case 'V': return 5;   break;
            case 'X':  return 10;  break;
            case 'L':  return 50;  break;
            case 'C':  return 100; break;
            case 'D': return 500; break;
            case 'M': return 1000;break;
            default :    
            return 0;
        }
        return 0;
    }
    
    int romanToInt(string  s) {
        if(s.size() == 0 ) return s.size();
        int res=0;
        
        for(int i=0;i<s.size();i++)
       {   
           if( converter(s[i])<converter(s[i+1]))
               res=res-converter(s[i]);
           else
               res=res+converter(s[i]);      
       }
        
        return res;
    }
};
