```cpp
// Problem: Reverse an Integer
// Topic: Math, Integer Overflow

/*
APPROACH: CH
Reverse the digits of an integer while checking for overflow.

Initialize d to store the last digit and rev to 0.

While num is not equal to 0:
    Extract the last digit using num % 10.
    Remove the last digit using num / 10.

    Check whether multiplying rev by 10 and adding d
    would exceed the integer limits.
    If overflow is possible, return 0.

    Update rev by multiplying it by 10 and adding d.

Return rev.
*/

class Solution {
public:
    int reverse(int num) {
        int d = 0;
        int rev = 0;

        while(num != 0) {
            d = num % 10;
            num = num / 10;

            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && d > 7)) {
                return 0;
            }

            if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && d < -8)) {
                return 0;
            }

            rev = rev * 10 + d;
        }

        return rev;
    }
};
```
