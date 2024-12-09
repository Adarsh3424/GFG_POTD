class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
          intervals.push_back(newInterval);
        int n = intervals.size();
        
        sort(begin(intervals),end(intervals));
        
        int st = intervals[0][0];
        int ed = intervals[0][1];
        
        vector<vector<int>> result;
        
        for(int i=1; i<n; i++) {
            int s = intervals[i][0];
            int e = intervals[i][1];
            
            if(ed >= s) {
                st = min(st,s);
                ed = max(ed,e);
            }
            else{
                result.push_back({st,ed});
                st = s;
                ed = e;
            }
        }
        
        result.push_back({st,ed});
        return result;
    }
};
