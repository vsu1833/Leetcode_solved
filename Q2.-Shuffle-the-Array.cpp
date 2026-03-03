1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int>ans(2*n);
5        for(int i = 0; i < n; i++)
6        {
7           ans[2*i]=nums[i];
8           ans[2*i+1]=nums[i+n];
9        }
10        return ans;
11    }
12};