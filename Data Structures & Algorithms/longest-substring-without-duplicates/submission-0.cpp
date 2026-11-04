class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,ans=0;
        unordered_map<char,int> mpp;
        while(r<s.size()){
            while(mpp[s[r]]!=0){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
                // continue;
            }
            mpp[s[r]]++;
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
