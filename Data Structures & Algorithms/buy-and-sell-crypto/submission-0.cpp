class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsell = INT_MAX;
        int maxprof = 0;
        for(int i=0; i<prices.size(); i++){
            minsell = min(prices[i], minsell);
            maxprof = max(prices[i]-minsell, maxprof);
        }
        return maxprof;
    }
};
