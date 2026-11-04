/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& arr) {
        if (arr.empty()) return true;
        sort(arr.begin(), arr.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });
        Interval prev = arr[0];
        for(int i = 1; i < arr.size(); i++){
            Interval curr = arr[i];
            if(prev.end > curr.start) return false;
            prev = curr;
        }
        return true;
    }
};