1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n = cardPoints.size();
5        int left = 0, right = n - 1;
6
7        for(int i = 0; i < k; i++) {
8            left += cardPoints[i];
9        }
10
11        int maxSum = left;  
12        int sum = left;
13
14        for(int i = k - 1; i >= 0; i--)
15        {
16            sum -= cardPoints[i];
17            sum += cardPoints[right];
18            right--;
19            maxSum = max(maxSum, sum);
20        }
21
22        return maxSum;
23    }
24};