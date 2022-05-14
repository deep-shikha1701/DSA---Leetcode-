class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int currp, lowest=INT_MAX, profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < lowest)// check if this price is lower than current lowest 
                lowest = prices[i]; //if yes set current lowest to this 
            
            currp = prices[i] - lowest; //find profit at the lowest price 
            if(profit < currp){ //check if this profit is greater than before
                profit = currp; //if yes set this as our profit
            }
            
        }
        
        return profit;
    }
};
