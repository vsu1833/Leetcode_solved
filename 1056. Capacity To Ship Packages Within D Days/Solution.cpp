class Solution {
public:
    bool canShip(vector<int>& weights, int capacity, int days) {
        int currLoad = 0, neededDays = 1;
        for (int w : weights) {
            if (currLoad + w > capacity) {
                neededDays++;
                currLoad = 0;
            }
            currLoad += w;
        }
        return neededDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, mid, days)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
