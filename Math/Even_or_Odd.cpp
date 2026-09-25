```cpp
// Problem: Check Even or Odd
// Topic: Math

/* CH
APPROACH:
Check whether the given number is even or odd.

Use the modulo operator % to find the remainder when
the number is divided by 2.

If the remainder is 0:
    The number is even.
Otherwise:
    The number is odd.

Return the corresponding result.
*/

class Solution {
public:
    string checkEvenOdd(int num) {
        if(num % 2 == 0) {
            return "Even";
        }
        else {
            return "Odd";
        }
    }
};
```
