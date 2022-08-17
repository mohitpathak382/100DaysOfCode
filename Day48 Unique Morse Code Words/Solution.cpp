class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> wrdToMorse;
        vector<string> morseCode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i=0;i<words.size();i++){
            string code;
            for(int j=0;j<words[i].size();j++)
                code+=morseCode[words[i][j]-'a'];
            
            wrdToMorse.insert(code);
            
        }
        return wrdToMorse.size();
    }
};
