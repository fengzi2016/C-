/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
   
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.empty()) return {};
        sort(intervals.begin(),intervals.end(),[](Interval& a,Interval& b){return a.start<b.start;});
        vector<Interval> res;
        
        for(int i = 0 ;i<intervals.size();) {
            int k = 0;
            int start = intervals[i].start;
            int end = intervals[i].end;
            for(int j=i;j<intervals.size();j++) {
                k++;
                if(end < intervals[j].start) {
                    k--;
                    break;
                }else{
                    if(end<intervals[j].end) {
                        end = intervals[j].end;
                        
                    }
                    
                }
                
            }
            Interval tmp;
            tmp.start = start;
            tmp.end = end;
            res.push_back(tmp);
            i+=k;
        }
        return res;
    }
    
    
    
};