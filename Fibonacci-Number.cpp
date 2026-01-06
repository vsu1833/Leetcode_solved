1class Solution {
2public:
3    int fib(int n) {
4        if(n == 0) return 0;
5        if(n == 1) return 1;
6
7        int a = 0, b = 1;
8        for(int i = 2; i <= n; i++) {
9            int c = a + b;
10            a = b;
11            b = c;
12        }
13        return b;
14    }
15};