1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        unordered_map<int,int> mpp;
5        for (int i = 0; i < numbers.size(); i++)
6        {
7            int rem = target - numbers[i];
8            if (mpp.find(rem) != mpp.end())
9            {
10                return {mpp[rem] + 1, i + 1};
11            }
12            mpp[numbers[i]] = i;
13        }
14        return {-1, -1};
15    }
16};
17