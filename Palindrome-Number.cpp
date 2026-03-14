1class Solution {
2public:
3    bool isPalindrome(int x) {
4     int org = x;
5     long long rev = 0;
6     while(x>0)
7     {
8       int last_dig = x % 10;
9        rev = rev * 10 + last_dig;
10        x /= 10;
11     }  
12     return rev==org;
13    }
14};