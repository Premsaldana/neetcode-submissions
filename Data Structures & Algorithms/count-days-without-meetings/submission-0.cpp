class Solution {
public:
    int countDays(int days, vector<vector<int>>& arr) {
        sort(begin(arr),end(arr));
        int startDate=arr[0][0];
        int ans=startDate-1; //checks the diff between day1 and the real start date i.e, 1
        vector<vector<int>> merged; //res array after merging intervals
        //merge intervals
        merged.push_back(arr[0]);
        for(int i =1;i<arr.size();i++){
            if(arr[i][0]<=merged.back()[1]){
                merged.back()[1] = max(merged.back()[1], arr[i][1]);
            }
            else {
                merged.push_back(arr[i]);
            }
        }
        for(int i=1;i<merged.size();i++){
            if(merged[i][0]>merged[i-1][0]) ans+=merged[i][0]-merged[i-1][1]-1;
        }
        int finalEnd= merged.back()[1];
        ans+=days-finalEnd;
        return ans;
    }
};