class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> only_in_nums1;
        vector<int> only_in_nums2;
        
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                only_in_nums1.push_back(num);
            }
        }
        
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                only_in_nums2.push_back(num);
            }
        }
        
        return {only_in_nums1, only_in_nums2};
    
    }
};