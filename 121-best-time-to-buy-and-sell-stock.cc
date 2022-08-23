// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_price = prices[0];
        int max_pro = 0;
        // int n = prices.size();
        // vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 1; i != prices.size(); ++i)
        {
            if (prices[i] - min_price > max_pro)
            {
                max_pro = prices[i] - min_price;
            }
            if (prices[i] < min_price)
            {
                min_price = prices[i];
            }
        }
        return max_pro;
    }
};