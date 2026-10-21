```cpp
// Problem: Print all Digits of an Integer
// Topic: Math, Strings

/*
APPROACH: CH
Convert the number into a string using to_string().

Loop through each character of the string:
    Print the current digit.
    If it is not the last digit, print a space.

This prints all digits separated by spaces.
*/

class Solution {
public:
    void printDigits(long long N) {
        string s = to_string(N);

        for(int i = 0; i < s.size(); i++) {
            cout << s[i];

            if(i != s.size() - 1) {
                cout << " ";
            }
        }
    }
};
```
