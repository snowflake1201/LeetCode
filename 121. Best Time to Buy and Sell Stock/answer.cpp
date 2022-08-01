class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 999999;
        int earn = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < buy) 
                buy = prices[i];
            else if((prices[i] - buy) > earn)
                earn = prices[i] - buy;
        }
        return earn;
    }
};
