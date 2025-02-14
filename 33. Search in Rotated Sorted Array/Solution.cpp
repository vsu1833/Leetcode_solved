class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        int n = nums.size();

        int minVal = INT_MAX;
        int minIndex = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < minVal) {
                minVal = nums[i];
                minIndex = i;
            }
        }
        if (nums[minIndex] == target)
            return minIndex;
        bool setLeft = false, setRight = false;
        if (target >= nums[minIndex] && target <= nums[n - 1])
            setRight = true;
        else
            setLeft = true;
        
        int left, right;
        if (setLeft) {
            left = 0;
            right = minIndex - 1;
        } else {
            left = minIndex + 1;
            right = n - 1;
        }
                while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};
