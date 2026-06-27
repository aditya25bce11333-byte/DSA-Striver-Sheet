class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        int n = prices.size();

        for (int j = 0; j < n; j++){
            if (prices[j] < min_price){
                min_price = prices[j];
            }
            else{
                max_profit = max(max_profit,prices[j] - min_price);
            }
        }
        return max_profit;  
    }
};