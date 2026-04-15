 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;

        for(int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);   // 👈 best buy
            
            int currProfit = prices[i] - minPrice; // 👈 sell today
            
            profit = max(profit, currProfit);      // 👈 best overall
        }

        return profit;
    }
};
    
