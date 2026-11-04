class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int profit=0,r=1;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                profit=max(profit,prices[r]-prices[l]);
            }
            else l=r;
            r+=1;
        }
        return profit;
    }
};
