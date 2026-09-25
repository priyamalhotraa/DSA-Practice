```cpp
// Problem: GCD of Two Numbers
// Topic: Math

/* CH
APPROACH:
Find the Greatest Common Divisor (GCD) of a and b.

Use the Euclidean Algorithm.

Repeat while b is not 0:
    Find the remainder of a divided by b.
    Assign b to a.
    Assign the remainder to b.

When b becomes 0:
    The value of a is the GCD.

Return a.
*/

class Solution {
public:
    int findGCD(int a, int b) {
        int remainder = 0;

        while(b != 0) {
            remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
    }
};
```
