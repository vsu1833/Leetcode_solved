1class Solution {
2public:
3    int fib(int n) {
4        if (n <= 1) return n;
5        vector<int> dp(n+1);
6        dp[0] = 0;
7        dp[1] = 1;
8        for (int i = 2; i <= n; i++) {
9            dp[i] = dp[i - 1] + dp[i - 2];
10        }
11        return dp[n];
12    }
13};