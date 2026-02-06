1class Solution {
2public:
3    int gcdd(int min, int max) {
4        if (min == 0)
5            return max;
6        
7        return gcdd(max % min, min);
8    }
9
10    int findGCD(vector<int>& nums) {
11        int maxi = INT_MIN, mini = INT_MAX;
12        
13        for (int i = 0; i < nums.size(); i++) {
14            maxi = max(maxi, nums[i]);
15            mini = min(mini, nums[i]);
16        }
17        
18        return gcdd(mini, maxi);
19    }
20};
21