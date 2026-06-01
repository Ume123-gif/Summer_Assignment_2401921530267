// 3 - Best Time to Buy and Sell Stock (Leetcode 121)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minbuy=prices[0];
        for (int i=1; i<prices.size(); i++) {
            int profit=prices[i]-minbuy;
            maxprofit=max(profit,maxprofit);
            minbuy=min(minbuy,prices[i]);
        }
        return maxprofit;
    }
};