class MyCalendar {
public:
    vector<pair<int,int>> contains;
    
    MyCalendar() { }
    
    bool book(int start, int end) {
     
        for(int i=0;i<contains.size();i++){
            if(end>contains[i].first && start<contains[i].second)
                return false;
        }
        contains.push_back({start,end});
        return true;
    }
};
