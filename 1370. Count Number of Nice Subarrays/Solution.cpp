class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         unordered_map<int, int> prefixSumFreq;
    prefixSumFreq[0] = 1;
    int currSum = 0, count = 0;
    
    for (int num : nums) {
        currSum += (num % 2);
        
        if (prefixSumFreq.find(currSum - k) != prefixSumFreq.end()) {
            count += prefixSumFreq[currSum - k];
        }
        
        prefixSumFreq[currSum]++;
    }
    
    return count;
    }
};