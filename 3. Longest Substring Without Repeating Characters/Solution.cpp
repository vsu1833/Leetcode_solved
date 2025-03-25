class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int len = 0;
        int maxlen = 0;
        int start = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(mpp.find(s[i]) != mpp.end() && mpp[s[i]] >= start) {
                start = mpp[s[i]] + 1;
                len = i - start + 1;
            } else {
                len++;
            }
            mpp[s[i]] = i;
            maxlen = max(len, maxlen);
        }
        return maxlen;
    }
};