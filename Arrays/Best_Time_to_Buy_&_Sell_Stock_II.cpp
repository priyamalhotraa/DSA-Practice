// Problem: Best Time to Buy and Sell Stock II
// Topic: Arrays, Greedy

/*
APPROACH:
We are allowed to complete multiple transactions.
Whenever the price increases from one day to the next,
we can treat that increase as profit.

Key Idea:
If today's price is greater than yesterday's price,
add the difference to the total profit.

Steps:
1. Initialize maxProfit as 0.
2. Traverse the array from day 1.
3. If current price > previous price, add the difference to maxProfit.
4. Return the total profit.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};
