1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int duplicate = -1,missing=-1;
5       for(int i = 1; i < nums.size()+1; i++)
6       { int count = 0 ;
7        for(int j =0; j < nums.size(); j++)
8        {
9           
10            if(nums[j]==i)
11            count++;
12         
13        }
14           if(count==2) duplicate = i;
15            if(count == 0)missing = i;
16       }
17       return {duplicate,missing};
18    }
19};