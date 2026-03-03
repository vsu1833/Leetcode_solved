1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int n = nums.size();
5        int duplicate = -1, missing = -1;
6        
7        vector<int> freq(n+1, 0);
8
9        for(int num : nums) {
10            freq[num]++;
11        }
12
13        for(int i = 1; i <= n; i++) {
14            if(freq[i] == 0)
15                missing = i;
16            else if(freq[i] == 2)
17                duplicate = i;
18        }
19
20        return {duplicate, missing};
21    }
22};