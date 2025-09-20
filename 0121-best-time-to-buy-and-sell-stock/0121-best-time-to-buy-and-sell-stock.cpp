class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN,maxi,buy;
        buy=prices[0];
        for(int i=1;i<prices.size();i++){
            maxi=prices[i]-buy;
            maxprofit=max(maxprofit,maxi);
            buy=min(buy,prices[i]);

            if(maxprofit<0){
            maxprofit=0;
            }

        }
        return maxprofit;
        
    }
};