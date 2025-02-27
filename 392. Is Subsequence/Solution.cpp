class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true; 
        int pointer =0; 
        for (int i =0; i <t.size(); i++) {
            if (t[i]==s[pointer]) {
            pointer++;
                if (pointer ==s.size()) {
                    return true; 
                }
            }
        }
        
        return false; 
    }
};