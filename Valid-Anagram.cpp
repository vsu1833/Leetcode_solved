1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4      if (s.length() != t.length()) return false;
5    vector<int> count(26,0);
6    for(int i = 0; i < s.size(); i++)
7    {
8        count[s[i]-'a']++;
9        count[t[i]-'a']--;
10
11    }
12
13     for (int c : count) {
14        if (c != 0) return false;
15    }
16
17    return true;
18    }
19};