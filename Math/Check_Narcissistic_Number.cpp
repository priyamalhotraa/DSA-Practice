```cpp
// Problem: Check Narcissistic Number
// Topic: Math

/*
APPROACH: CH
Check whether the given number is a Narcissistic number.

Store the original number in a separate variable.

First, count the number of digits in the number.

Then, for each digit:
    Extract the last digit using % 10.
    Remove the last digit using / 10.
    Raise the digit to the power of the total number of digits.
    Add the result to sum.

After checking all digits:
    Compare sum with the original number.

If both are equal:
    Return "Yes".
Otherwise:
    Return "No".
*/

class Solution {
public:
    string isNarcissistic(int num) {
        int original = num;
        int digits = 0;
        int sum = 0;
        int d = 0;
        int temp = num;

        while(temp > 0) {
            temp = temp / 10;
            digits++;
        }

        while(num > 0) {
            d = num % 10;
            num = num / 10;

            int power = 1;
            for(int i = 0; i < digits; i++) {
                power = power * d;
            }

            sum = sum + power;
        }

        if(sum == original) {
            return "Yes";
        }
        else {
            return "No";
        }
    }
};
```
