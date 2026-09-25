```cpp
// Problem: Sum of Digits
// Topic: Math

/*
APPROACH:
Find the sum of all digits present in the given number.

Initialize sum as 0.

Repeat until the number becomes 0:
    Extract the last digit using % 10.
    Remove the last digit using / 10.
    Add the extracted digit to sum.

After checking all digits:
    Return the sum of all digits.
*/

class Solution {
public:
    int sumOfDigits(int num) {
        
        int sum = 0;
        int d = 0;
        int org = num;

        while(num > 0) {
            d = num % 10;
            num = num / 10;
            sum = sum + d;
        }
        return sum;
    }
};
```
