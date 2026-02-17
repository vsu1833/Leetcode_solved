1class Solution {
2public:
3    int maxArea(vector<int>& heights) {
4    int maxWater = 0;
5    int n = heights.size();
6    int left  = 0, right = n-1;
7    while(left < right)
8    {
9        int mini = min(heights[left],heights[right]);
10        int width = right - left;
11        maxWater = max(mini * width,maxWater);
12        if(heights[left]<heights[right])
13        left++;
14        else right--;
15    }
16    return maxWater;
17    }
18};
19