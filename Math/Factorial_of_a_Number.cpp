```cpp
// Problem: Factorial of a Number
// Topic: Math

/* CH
APPROACH:
Find the factorial of the given number.

Initialize fact as 1.

Use a loop from 1 to num:
    Multiply fact by the current value of i.
    Store the result back in fact.

After the loop:
    Return fact.
*/

class Solution {
public:
    unsigned long long factorial(int num) {
        unsigned long long fact = 1;

        for(int i = 1; i <= num; i++) {
            fact = fact * i;
        }

        return fact;
    }
};
```
