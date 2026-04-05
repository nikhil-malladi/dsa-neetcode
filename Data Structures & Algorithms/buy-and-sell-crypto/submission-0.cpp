class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int curr = 0;
        int next = 1;

        int price_len = prices.size();
        while(next < price_len){
            maxprofit = std::max(maxprofit, prices[next] - prices[curr]);
            if(prices[next] < prices[curr]){
                curr = next;
            }
            next += 1;
        }
        return maxprofit;
    }
};
