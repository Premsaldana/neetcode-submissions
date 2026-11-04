class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0, j =0;
        while(i<word.size() && j<abbr.size()){
            char w_c=word[i];
            char a_c=abbr[j];
            if(isdigit(a_c)){
                if(a_c=='0') return false;
                int curr=0;
                while( j< abbr.size() && isdigit(abbr[j])){
                    curr*=10;
                    int digit = abbr[j]-'0';
                    curr+=digit;
                    j++;
                }
                i+=curr;
                if(i>word.size()) return false;
            }
            else{
                if(w_c!=a_c) return false;
                else {
                    i++;
                    j++;
                }
            }
        }
        return i==word.size() && j ==abbr.size();
    }
};