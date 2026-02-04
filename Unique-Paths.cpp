1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4
5vector<vector<int>>dp(m,vector<int>(n,0));
6        for (int i = 0; i < m; i++) {
7            for (int j = 0; j < n; j++) {
8
9                if (i == 0 || j == 0)
10                    dp[i][j] = 1;
11                else
12                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
13            }
14        }
15
16        return dp[m-1][n-1];
17    }
18};
19