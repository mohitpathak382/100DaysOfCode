class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        List<Integer> ans=new ArrayList<Integer>();
        int wlen=words[0].length();
        
        Map<String , Integer> map=new HashMap<String,Integer>();
        
        for(String w:words)
            map.put(w,map.getOrDefault(w,0)+1);
        
        for(int i=0;i<=s.length()-wlen*words.length;i++){
            Map<String,Integer> temp=new HashMap<String,Integer>(map);
            
        for(int j=0;j<words.length;j++){
            String str=s.substring(i+j*wlen,i+j*wlen+wlen);
            
            if(temp.containsKey(str)){
                int count=temp.get(str);
                if(count==1) temp.remove(str);
                else temp.put(str,count-1);
                if(temp.isEmpty()){
                    ans.add(i);
                    break;
                }
                
            } else break;
        } 
        }
       return ans; 
    }
}
