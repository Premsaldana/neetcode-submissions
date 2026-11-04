class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        unordered_map<int,int> mpp;
        for(int i: nums){
            mpp[i]++;
        }
        for(auto &i : mpp){
            pq.push({i.second,i.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        for(int i =0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
