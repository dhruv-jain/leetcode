//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceToBuy = INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            minPriceToBuy = min(minPriceToBuy, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPriceToBuy);
        }
        return maxProfit;
    }
};
