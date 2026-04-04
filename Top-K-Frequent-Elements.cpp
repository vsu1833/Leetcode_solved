1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> counts;
5        for (int num : nums) {
6            counts[num]++;
7        }
8
9        vector<pair<int, int>> freq_pairs;
10        for (auto const& [num, count] : counts) {
11            freq_pairs.push_back({num, count});
12        }
13
14        sort(freq_pairs.begin(), freq_pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
15            return a.second > b.second;
16        });
17
18        vector<int> result;
19        for (int i = 0; i < k; ++i) {
20            result.push_back(freq_pairs[i].first);
21        }
22
23        return result;
24    }
25};