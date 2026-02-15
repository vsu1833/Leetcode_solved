1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left = 0, right = s.size()-1;  while (left < right) {
5            while (left < right && !isalnum(s[left])) left++;
6            while (left < right && !isalnum(s[right])) right--;
7
8            while(tolower(s[left])!=tolower(s[right]))
9            {
10                return false;
11            }
12    left++;
13    right--;
14    
15}
16
17    return true;
18    }
19};
20