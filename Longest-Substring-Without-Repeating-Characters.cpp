1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int n = s.size();
5        int maxSize = 0;
6
7        for(int i = 0; i < n; i++) {
8            vector<char> ans;
9
10            for(int j = i; j < n; j++) {
11                if(find(ans.begin(), ans.end(), s[j]) == ans.end()) {
12                    ans.push_back(s[j]);
13                    maxSize = max(maxSize, (int)ans.size());
14                } 
15                else {
16                    break;   
17                }
18            }
19        }
20        return maxSize;
21    }
22};
23