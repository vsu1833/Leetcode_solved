class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int insertPos = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[insertPos] = nums[i];
                if(i != insertPos) {
                    nums[i] = 0;
                }
                insertPos++;
            }
        }
    }
};