class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int earn = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] - prices[i-1] > 0)
                earn += prices[i] - prices[i-1];
        }
        return earn;
    }
};
