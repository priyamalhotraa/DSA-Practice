```cpp
// Problem: Add Strings
// Topic: Strings, Math

/*
APPROACH:
Add two numbers represented as strings without converting them
into integer data types.

Start from the last digit of both strings.

For each position:
    Convert the current characters into digits.
    Add both digits and the carry.
    Store the last digit of the sum.
    Update the carry.

Continue until all digits and the carry are processed.

Since digits are added from right to left:
    Reverse the result string.

Return the final sum as a string.
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string ans;

        while(i >= 0 || j >= 0 || carry > 0) {
            int csum = 0;

            if(i >= 0) {
                csum = csum + num1[i] - '0';
                i--;
            }

            if(j >= 0) {
                csum = csum + num2[j] - '0';
                j--;
            }

            csum = csum + carry;
            int lastDigit = csum % 10;
            char lastDigitchar = lastDigit + '0';
            ans.push_back(lastDigitchar);
            carry = csum / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
```
