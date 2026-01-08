1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int min_price = INT_MAX;  
5        int max_profit =0;       
6        
7        for (int price :prices) {
8            min_price = min(min_price, price);
9            max_profit=max(max_profit,price - min_price);
10        }
11        
12        return max_profit;
13    }
14};