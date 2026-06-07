// Problem: Pow(x, n)
// Topic: Math, Recursion, Binary Exponentiation

/*
APPROACH:
Compute x raised to the power n efficiently using
Binary Exponentiation.

Instead of multiplying x by itself n times, repeatedly:
- If the current exponent is odd, multiply the answer by x.
- Square x.
- Divide the exponent by 2.

For negative exponents:
- Convert x to 1/x.
- Make the exponent positive.

A long variable is used for the exponent because
negating INT_MIN would overflow an int.

Examples:
x = 2, n = 10  -> 1024
x = 2, n = -2  -> 0.25
x = 2.1, n = 3 -> 9.261
*/

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;

        long biform = n;

        if(n < 0) {
            x = 1 / x;
            biform = -biform;
        }

        double ans = 1;

        while(biform > 0) {
            if(biform % 2 == 1) {
                ans = ans * x;
            }

            x = x * x;
            biform = biform / 2;
        }

        return ans;
    }
};
