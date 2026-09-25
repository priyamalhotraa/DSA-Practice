```cpp
// Problem: Check Prime Number
// Topic: Math

/* CH
APPROACH:
Check whether the given number is prime or not.
A prime number has exactly two factors: 1 and itself.

If the number is 0 or 1:
    Return "No" because they are not prime.

Check all numbers from 2 to num - 1:
    If num is divisible by any number:
        Return "No".

If no number divides num:
    Return "Yes" because the number is prime.
*/

class Solution {
public:
    string isPrime(int num) {
        if(num == 1 || num == 0) {
            return "No";
        }

        for(int i = 2; i < num; i++)
            if(num % i == 0) {
                return "No";
            }

        return "Yes";
    }
};
```
