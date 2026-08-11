class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int res = 0;
        for(int r = 0; r < prices.size(); ++r){
            int profit = 0;
            if(prices[l] < prices[r]){
                profit = prices[r] - prices[l];
            }
            else{
                l = r;
            }
            res = max(res, profit);
        }

        return res;
    }
};
