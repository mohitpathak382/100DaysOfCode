 class Solution {
     int valuation(char x){
    switch(x){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
    }
        return 0;
    }
public:
    int romanToInt(string s) {
     
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1 && valuation(s[i]) < valuation(s[i+1])){
                sum+=valuation(s[i+1])-valuation(s[i]);
                ++i;
            }
            else{
                                sum=sum+(valuation(s[i]));

              
            }
        }
        return sum;
    }
};
