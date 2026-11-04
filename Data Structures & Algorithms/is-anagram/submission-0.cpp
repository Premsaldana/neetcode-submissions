class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        for(char c : s) mpp[c]++;
        for(char ch:t){
            if(mpp.find(ch)!=mpp.end()){
                mpp[ch]--;
                if(mpp[ch]==0) mpp.erase(ch);
            }
            else return false;
        }
        return mpp.size()==0;
    }
};
