```cpp
// Problem: Count Divisors of a number
// Topic: Math

/*
APPROACH: CH
Count the total number of divisors of the given number.

Initialize count to 0.

Loop from i = 1 to sqrt(num):
    If i * i is equal to num:
        Increment count by 1 because the divisor is repeated.
    Else if num is divisible by i:
        Increment count by 2 because both i and num / i
        are divisors.

Return count as the total number of divisors.
*/

class Solution {
public:
    int countDivisors(int num) {
        int count = 0;

        for(int i = 1; i <= sqrt(num); i++) {
            if(i * i == num) {
                count = count + 1;
            }
            else if(num % i == 0) {
                count = count + 2;
            }
        }

        return count;
    }
};
```
