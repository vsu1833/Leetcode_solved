1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> sorted = nums;
5        sort(sorted.begin(), sorted.end());
6        
7        unordered_map<int,int> mp;
8
9        for(int i = 0; i < sorted.size(); i++) {
10            if(mp.find(sorted[i]) == mp.end()) {
11                mp[sorted[i]] = i;
12            }
13        }
14
15        vector<int> ans;
16        for(int num : nums) {
17            ans.push_back(mp[num]);
18        }
19
20        return ans;
21    }
22};