class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set s(nums.begin(),nums.end());
        int maxi=0;
        for(int i : nums){
            int curr=i,streak=0;
            while(s.find(curr)!=s.end()){
                curr++;
                streak++;
            }
            maxi=max(maxi,streak);
        }
        return maxi;
    }
};
