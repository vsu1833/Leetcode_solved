1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<vector<string>> ans;
5        unordered_map<string,vector<string>>mpp;
6        for(int i = 0; i < strs.size(); i++)
7        {
8            string key = strs[i];
9            sort(key.begin(),key.end());
10            mpp[key].push_back(strs[i]);
11        }
12        for(auto it : mpp)
13        {
14            ans.push_back(it.second);
15
16        }
17        return ans;
18        
19    }
20};
21