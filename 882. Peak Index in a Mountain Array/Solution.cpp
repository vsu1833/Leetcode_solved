class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxElement = INT_MIN;
        int ind = -1;
         for(int i = 0; i < arr.size(); i++)
         {
            if(maxElement < arr[i])
            {
                maxElement = arr[i];
                ind = i ;

            }
           
         }
         return ind;
    }
};