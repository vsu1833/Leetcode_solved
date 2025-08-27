class Solution {
public:
    int maxArea(vector<int>& height) {
        int sum = 0;
        int left = 0, right = height.size()-1;
      int area = 0;
        while(left<=right)
        {
            
            int mini = min(height[left],height[right]);
                         sum= mini*(right-left);
                         area = max(area,sum);


            if(height[left]<height[right])
            {
                left++;
            }
            else if(height[left]>height[right])
            {
                right--;
            }
            else
            {
                left++;
                right--;
            }
        }
        return area;
      
    }
};