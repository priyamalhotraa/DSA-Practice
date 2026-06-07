// Problem: Factorial Trailing Zeroes
// Topic: Math

/*
APPROACH:
A trailing zero is formed by a factor of 10.
10 = 2 × 5

In n!, there are always more factors of 2 than factors of 5,
so the number of trailing zeroes depends only on the number
of factors of 5.

Count:
- Multiples of 5 contribute one factor of 5.
- Multiples of 25 contribute an extra factor of 5.
- Multiples of 125 contribute another extra factor of 5.
- And so on...
Keep dividing n by 5 and add the quotient to the answer.

Examples:
n = 3   -> 0
n = 5   -> 1
n = 10  -> 2
n = 25  -> 6
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;

        while(n > 0) {
            n = n / 5;
            ans = ans + n;
        }

        return ans;
    }
};
