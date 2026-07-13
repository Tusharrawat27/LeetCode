class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      vector<int>ans(n);
      int currmax = 0;
      for(int i=n-1; i>=0; i--)
      {
        if(prices[i] > currmax)
        {
            currmax = prices[i];
        }
        ans[i] = currmax;
      }  
      for(int i=0; i<ans.size(); i++)
      {
        ans[i] = ans[i] - prices[i];
      }
      int profit = 0;
      for(int i=0; i<ans.size(); i++)
      {
        if(ans[i] > profit)
        {
            profit = ans[i];
        }
      }
      return profit;
    }
};