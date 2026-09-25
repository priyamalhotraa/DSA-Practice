```cpp
// Problem: Find 2's Complement of a Number
// Topic: Math, Bit Manipulation

/* Ch
APPROACH:
Find the 2's complement of the given number.

The 2's complement is found by:
    First, invert all the bits using the ~ operator.
    Then, add 1 to the inverted value.

Return the resulting value.
*/

class Solution {
public:
    int twosComplement(int num) {
        return ~num + 1;
    }
};
```
