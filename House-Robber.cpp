1class Solution {
2public:
3    vector<int> ans;
4
5    int maxRobbery(vector<int>& nums, int i) {
6        if (i >= nums.size())
7            return 0;
8
9        if (ans[i] != -1)
10            return ans[i];
11
12        int loot = nums[i] + maxRobbery(nums, i + 2);
13        int skip = maxRobbery(nums, i + 1);
14
15        return ans[i] = max(loot, skip);
16    }
17
18    int rob(vector<int>& nums) {
19        ans.assign(nums.size(), -1);
20        return maxRobbery(nums, 0);
21    }
22};
23