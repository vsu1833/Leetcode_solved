1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int n = nums.size();
5        vector<int>mpp(n+1,0);
6        vector<int>ans;
7        for(int i = 0; i <n; i++)
8        {
9            mpp[nums[i]]=1;
10        }
11        for(int i = 1; i<=n; i++)
12        {
13            if(mpp[i]==0)ans.push_back(i);
14        }
15        return ans;
16    }
17};