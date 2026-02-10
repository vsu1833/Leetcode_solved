1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.length() != t.length()) {
5            return false;
6        }
7        int counts[26] = {0};
8        for (int i = 0; i < s.length(); i++) {
9            counts[s[i] - 'a']++;
10            counts[t[i] - 'a']--;
11        }
12        for (int i = 0; i < 26; i++) {
13            if (counts[i] != 0) {
14                return false;
15            }
16        }
17        return true;
18    }
19};