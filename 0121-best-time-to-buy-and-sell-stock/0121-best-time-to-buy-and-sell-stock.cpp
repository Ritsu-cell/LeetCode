class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int e=prices[0];
        int profit=0;
        
        for(int i=0; i<prices.size(); i++){
            e=min(e,prices[i]);
            int temp = prices[i]-e;

            profit=max(profit,temp);
        }
      
        return profit;





        
    }
};