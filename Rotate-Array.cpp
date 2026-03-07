1class Solution {
2public:
3    void reverseArray(vector<int>& nums, int start, int end) {
4        while (start < end) {
5            swap(nums[start], nums[end]);
6            start++;
7            end--;
8        }
9    }
10    void rotate(vector<int>& nums, int k) {
11        int n = nums.size();
12        if (n == 0) return;
13        
14        k %= n;
15        if (k == 0) return;
16        
17        reverseArray(nums, 0, n - 1);
18        reverseArray(nums, 0, k - 1);
19        reverseArray(nums, k, n - 1);
20    }
21};