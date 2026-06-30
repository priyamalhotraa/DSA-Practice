// Problem: Candy
// Topic: Greedy, Arrays

/*
APPROACH:
Use two passes to satisfy both left and right neighbor conditions.

- Initially, give 1 candy to every child since each child
  must receive at least one candy.

- Left to Right:
    - If the current child's rating is greater than the left child,
      give one more candy than the left child.

- Right to Left:
    - If the current child's rating is greater than the right child,
      update its candies to the maximum of:
        - current candies assigned
        - right child's candies + 1
    - This ensures both left and right conditions are satisfied.

- Finally, sum all candies to get the minimum total required.

Why does this work?
The first pass guarantees that every child with a higher rating than
the left neighbor gets more candies. The second pass fixes violations
with the right neighbor while preserving the left-side requirements
using max(). This produces the minimum valid distribution.
*/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        // Initially, give 1 candy to every child
        vector<int> candies(n, 1);

        // Left to Right
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        // Right to Left
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        // Calculate total candies
        int total = 0;
        for (int candy : candies) {
            total += candy;
        }
        return total;
    }
};
