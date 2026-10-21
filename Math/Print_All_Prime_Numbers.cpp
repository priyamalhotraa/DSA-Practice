```cpp
// Problem: Print All Prime Numbers
// Topic: Math, Prime Numbers

/*
APPROACH: CH
Use the isPrime function to check whether a number is prime.

In isPrime:
    If num is 0 or 1, return "No".
    Loop from 2 to sqrt(num).
    If num is divisible by any i, return "No".
    If no divisor is found, return "Yes".

In printPrimes:
    Create an empty vector ans.
    Loop from 2 to N.
    If isPrime(i) returns "Yes", add i to ans.

Return ans containing all prime numbers up to N.
*/

#include <cmath>

class Solution {
public:
    string isPrime(int num) {
        if(num == 0) {
            return "No";
        }

        if(num == 1) {
            return "No";
        }

        for(int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) {
                return "No";
            }
        }

        return "Yes";
    }

    vector<int> printPrimes(int N) {
        vector<int> ans;

        for(int i = 2; i <= N; i++) {
            if(isPrime(i) == "Yes") {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
```
