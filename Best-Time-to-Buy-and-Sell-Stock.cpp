1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4       int min_price = INT_MAX;
5       int max_profit = INT_MIN;
6       for(int i = 0; i < prices.size(); i++)
7       {
8        min_price = min(min_price,prices[i]);
9        max_profit = max(max_profit,prices[i]-min_price);
10       }
11       return max_profit;
12    }
13};