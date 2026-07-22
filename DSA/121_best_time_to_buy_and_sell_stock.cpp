class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minimum = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            minimum = min(prices[i],minimum);
            int diff = prices[i] - minimum;
            maxprofit = max(maxprofit,diff);
        }
        return maxprofit;
    }
};
