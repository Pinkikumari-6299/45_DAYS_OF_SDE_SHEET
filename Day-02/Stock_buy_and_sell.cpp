class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0;
       int n=prices.size();
       int bestbuy=prices[0];
       for(int i=0;i<n;i++) 
       {
          if(prices[i] > bestbuy)
          {
            profit=max(profit,prices[i]-bestbuy);
          }
          bestbuy=min(bestbuy,prices[i]);
       }
       return profit;
    }
};