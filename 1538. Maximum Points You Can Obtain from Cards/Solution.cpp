class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int leftsum = 0, rightsum = 0, maxScore = 0;
       for(int i = 0; i < k; i++) {
           leftsum = leftsum + cardPoints[i];
           maxScore = leftsum;
       }
       int rindex = cardPoints.size() - 1;
       for(int i = k-1; i >= 0; i--) {
           leftsum = leftsum - cardPoints[i];
           rightsum = rightsum + cardPoints[rindex]; 
           rindex--;
           maxScore = max(maxScore, leftsum + rightsum);
       }
       return maxScore;
    }
};