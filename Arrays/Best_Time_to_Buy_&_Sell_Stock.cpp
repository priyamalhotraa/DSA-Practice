// Problem: Best Time to Buy and Sell Stock
// Topic: Arrays, Greedy

/*
APPROACH:
We are given an array where each element represents the stock price on a day.
We need to maximize profit by choosing one day to buy and a later day to sell.

Key Idea:

Keep track of the lowest price seen so far.
At each day:
    profit = current price - lowest price

Update:
- lowest price if a smaller price is found.
- maximum profit if current profit is greater.

Steps:
1. Initialize lowestBuy with the first price.
2. Traverse the array.
3. Update lowestBuy whenever a smaller price is found.
4. Calculate profit for the current day.
5. Update maxProfit if a larger profit is obtained.

*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestBuy = prices[0];
        int maxProfit = 0;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lowestBuy) {
                lowestBuy = prices[i];
            }

            profit = prices[i] - lowestBuy;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
