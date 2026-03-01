1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4     int j = 0;
5     for(int i = 0; i < nums.size(); i++)
6     {
7        if(nums[i]!=0)
8        {
9            nums[j]=nums[i];
10            j++;
11        }
12     }
13     for(int i = j; i < nums.size(); i++)
14     {
15        nums[i]=0;
16     }
17    }
18
19};