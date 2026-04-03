1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> s(nums.begin(), nums.end());
5        return s.size() < nums.size();
6    }
7};