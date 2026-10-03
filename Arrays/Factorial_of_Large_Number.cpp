```cpp
// Problem: Factorial of Large Number
// Topic: Arrays, Math

/*
APPROACH: CH
Find the factorial of a large number that cannot be stored
in standard integer data types.

Store the digits of the result in a vector, with the least
significant digit at the beginning.

For every number from 2 to N:
    Multiply each stored digit by the current number.
    Add the carry from the previous multiplication.
    Store the last digit using % 10.
    Update the carry using / 10.

After processing all digits:
    Add any remaining carry to the vector.

Reverse the vector to get the digits in the correct order.

Convert each digit into its character form and build the result string.

Return the resulting factorial as a string.
*/

#include<algorithm>

class Solution {
public:
    string factorial(int N) {
        vector<int> ans;
        ans.push_back(1);
        int carry = 0;

        for(int i = 2; i <= N; i++) {
            for(int j = 0; j < ans.size(); j++) {
                int x = ans[j] * i + carry;
                ans[j] = x % 10;
                carry = x / 10;
            }

            while(carry) {
                ans.push_back(carry % 10);
                carry = carry / 10;
            }
        }

        reverse(ans.begin(), ans.end());

        string result;
        for(int digit : ans) {
            result.push_back('0' + digit);
        }

        return result;
    }
};
```
