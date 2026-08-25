class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int curr_min = INT_MAX;
        int l = 0; int r = 0;
        while(r < prices.size()){
            curr_min = min(prices[l], curr_min);
            maxprof = max(prices[r] - curr_min, maxprof);
            if(prices[r] < prices[l]) l = r;
            ++r;
        }


        return maxprof;
    }
};
