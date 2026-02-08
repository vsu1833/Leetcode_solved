1class Solution {
2public:
3    int fib(int n) {
4        if (n == 0) return 0;
5        if (n == 1) return 1;
6
7        int fib[n + 1];
8        fib[0] = 0;
9        fib[1] = 1;
10
11        for (int i = 2; i <= n; i++) {
12            fib[i] = fib[i - 1] + fib[i - 2];
13        }
14
15        return fib[n];
16    }
17};
18/*
19
20class Solution {
21public:
22    int fib(int n) {
23        if (n == 0) return 0;
24        if (n == 1) return 1;
25
26        return fib(n - 1) + fib(n - 2);
27    }
28};
29
30*/
31