```cpp
// Problem: Power of 2
// Topic: Math

/*
APPROACH:
Check whether the given number is a power of 2.
Repeatedly divide the number by 2 while it is divisible by 2.

If the number becomes 1:
    The original number is a power of 2.
Otherwise:
    It is not a power of 2.

Return "Yes" if it is a power of 2, otherwise return "No".
*/

class Solution {
public:
    string isPowerOfTwo(int num) {
        int d = 0;

        while(num % 2 == 0 && num > 0) {
            num = num / 2;
        }
        if(num == 1) {
            return "Yes";
        }
        else {
            return "No";
        }
    }
};
```
