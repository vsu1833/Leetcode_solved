1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_map<char, int> mpp;
5        int len = 0;
6        int maxlen = 0;
7        int start = 0;
8        
9        for(int i = 0; i < s.size(); i++) {
10            if(mpp.find(s[i]) != mpp.end() && mpp[s[i]] >= start) {
11                start = mpp[s[i]] + 1;
12                len = i - start + 1;
13            } else {
14                len++;
15            }
16            mpp[s[i]] = i;
17            maxlen = max(len, maxlen);
18        }
19        return maxlen;
20    }
21};