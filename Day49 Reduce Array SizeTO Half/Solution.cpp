 class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++)
            map[arr[i]]++;
        
        multiset<int,greater<int>> sortedSet;
        
        for(auto val:map)
            sortedSet.insert(val.second);
        
        int size=arr.size();
        int count=0,ans=0;
        
        for(auto it = sortedSet.begin();count*2<size;it++){
            ans++;
            count+=*it;
        }
        return ans;
    }
};
