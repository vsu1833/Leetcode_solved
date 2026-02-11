1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4       unordered_map<int,int> mpp;
5       for(int i = 0; i < nums.size(); i++)
6       {
7        int rem = target - nums[i];
8        if(mpp.find(rem)!=mpp.end())
9        {
10            return {mpp[rem],i};
11        }
12        mpp[nums[i]]=i;
13       } 
14       return {-1,-1};
15    }
16};
17