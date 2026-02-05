1class Solution {
2public:
3    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> mp1, mp2;
5        for (int x : nums1)
6         mp1[x] = 1;
7        for (int x : nums2)
8         mp2[x] = 1;
9
10        int count1 = 0, count2 = 0;
11
12        for (int x : nums1) {
13            if (mp2.find(x) != mp2.end()) count1++;
14        }
15
16        for (int x : nums2) {
17            if (mp1.find(x) != mp1.end()) count2++;
18        }
19
20        return {count1, count2};
21    }
22};
23