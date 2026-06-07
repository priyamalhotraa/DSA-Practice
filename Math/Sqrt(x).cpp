// Problem: Sqrt(x)
// Topic: Math, Binary Search

/*
APPROACH:
Find the integer square root of x, i.e. the largest integer
whose square is less than or equal to x.

Use Binary Search on the range [0, x].

- If mid * mid == x, return mid.
- If mid * mid > x, search the left half.
- Otherwise, search the right half.

If no exact square root exists, the loop ends when l > r.
At that point, r is the largest value such that r * r <= x,
so return r (or l - 1).

Examples:
x = 4  -> 2
x = 8  -> 2
x = 15 -> 3
*/

class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;

        while(l <= r) {
            long long int mid = r + (l - r) / 2;

            if(mid * mid == x) {
                return mid;
            }
            else if(mid * mid > x) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return l - 1;
    }
};
