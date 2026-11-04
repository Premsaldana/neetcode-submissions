class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mpp={
            {')','('},
            {'}','{'},
            {']','['}
        };
        stack<int> st;
        for(char c : s){
            if(mpp.count(c)){
                if(!st.empty() && st.top()==mpp[c]) st.pop();
                else return false;
            }
            else st.push(c);
        }
        return st.empty();
    }
};
