class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes=0;
        int prod=1;
        for(int i : nums){
            if(i!=0) prod*=i;
            else zeroes++;
        }
        if(zeroes>1) return vector<int>(nums.size(),0);
        vector<int> ans1;
        for(int i:nums){
            if(zeroes>0) {
                if(i==0)ans1.push_back(prod);
                else ans1.push_back(0);
            }
            else ans1.push_back(prod/i);
        }
        return ans1;
    }
};
