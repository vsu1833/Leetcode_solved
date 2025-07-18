class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        vector<pair<int, int>> freq_pairs;
        for (auto const& [num, count] : counts) {
            freq_pairs.push_back({num, count});
        }

        sort(freq_pairs.begin(), freq_pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(freq_pairs[i].first);
        }

        return result;
    }
};