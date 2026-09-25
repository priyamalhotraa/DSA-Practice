```cpp
// Problem: LCM of Two Numbers
// Topic: Math

/* CH
APPROACH:
Find the Least Common Multiple (LCM) of a and b.

First, store the original values of a and b.

Use the Euclidean Algorithm to find the GCD:
    Repeat while b is not 0.
    Find the remainder of a divided by b.
    Assign b to a.
    Assign the remainder to b.

When b becomes 0:
    The value of a is the GCD.

Use the formula:
    LCM = (Original a * Original b) / GCD

Return the LCM.
*/

class Solution {
public:
    int findLCM(int a, int b) {
        int orgA = a;
        int orgB = b;
        int remainder = 0;

        while(b != 0) {
            remainder = a % b;
            a = b;
            b = remainder;
        }
        return orgA * orgB / a;
    }
};
```
