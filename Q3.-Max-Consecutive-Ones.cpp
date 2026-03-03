1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxi = 0;
5        int count = 0;
6        if(nums.size()==0)
7return 0;
8        for(int i = 0; i < nums.size(); i++)
9        {
10            if(nums[i]==0) count = 0;
11            else
12            {
13                count = count+1;
14                maxi = max(count,maxi);
15            }
16        }
17        return maxi;
18    }
19};