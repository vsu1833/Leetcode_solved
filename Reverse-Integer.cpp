1class Solution {
2public:
3    int reverse(int x) {
4        int rev = 0;
5        
6        while (x != 0) {
7            int digit = x % 10;
8            x /= 10;
9            
10            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
11                return 0;
12            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
13                return 0;
14            
15            rev = rev * 10 + digit;
16        }
17        
18        return rev;
19    }
20};
21