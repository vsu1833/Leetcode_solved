1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4    //    if (nums.empty()) return 0;
5    //    sort(nums.begin(),nums.end());
6    //    int count = 1;
7    //    int max_count = 1;
8    //    for(int i = 0; i < (int)nums.size()-1; i++)
9    // {
10    //     if(nums[i]==nums[i+1]-1)
11    //     {
12    //         count+=1;
13    //     }
14    //     else if (nums[i] != nums[i+1])
15    //     {
16    //         count = 1;
17    //     }
18    //     max_count = max(max_count, count);
19    // } 
20    // return max_count;
21    // }class Solution {
22        unordered_set<int> sett;
23
24        for (int num : nums) {
25            sett.insert(num);
26        }
27
28        int longest = 0;
29
30        for (int num : sett) {
31            if (sett.find(num - 1) == sett.end()) {
32                int currentNum = num;
33                int count = 1;
34
35                while (sett.find(currentNum + 1) != sett.end()) {
36                    currentNum++;
37                    count++;
38                }
39
40                longest = max(longest, count);
41            }
42        }
43
44        return longest;
45    
46    }
47};
48