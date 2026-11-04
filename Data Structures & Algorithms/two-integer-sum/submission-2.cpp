class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mpp;
    //  for(int i =0;i<nums.size();i++){
    //     mpp[nums[i]]=i;
    //  }   
     for(int i =0;i<nums.size();i++){
        int pair = target-nums[i];
        if(mpp.find(pair)!=mpp.end() && mpp[pair]!=i) return {mpp[pair],i};
        mpp[nums[i]]=i;
     }
     return {};
    }
};
