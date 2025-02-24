class Solution {
public:
   void swap(int& a, int& b) {  // Pass by reference
    int temp = a;
    a = b;
    b = temp;
}

int removeElement(vector<int>& nums, int val) {
    int k = 0; 
        for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;  
}
};