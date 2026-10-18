```cpp
// Problem: Convert String to Uppercase
// Topic: Strings

/*
APPROACH: CH
Convert all lowercase letters in the string to uppercase.

Loop through each character of the string:
    If the character is between 'a' and 'z':
        Convert it to uppercase using ASCII values.

Return the modified string.
*/

class Solution {
public:
    string toUpperCase(string s) {
        for(int i = 0; i <= s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        }

        return s;
    }
};
```
