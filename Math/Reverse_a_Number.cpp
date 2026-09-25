```cpp
// Problem: Reverse a Number
// Topic: Math

/* CH
APPROACH:
Reverse the digits of the given number.

Initialize rev as 0.

Repeat until the number becomes 0:
    Extract the last digit using % 10.
    Remove the last digit using / 10.
    Add the extracted digit to rev by multiplying rev by 10.

After all digits are processed:
    Return the reversed number.
*/

class Solution {
public:
    int reverseNumber(int num) {
        int d = 0;
        int rev = 0;

        while(num > 0) {
            d = num % 10;
            num = num / 10;
            rev = rev * 10 + d;
        }
        return rev;
    }
};
```
