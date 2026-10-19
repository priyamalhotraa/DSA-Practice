```cpp
// Problem: Convert String to Lowercase
// Topic: Strings

/*
APPROACH: CH
Convert all uppercase letters in the string to lowercase.

Loop through each character of the string:
    If the character is between 'A' and 'Z':
        Convert it to lowercase using ASCII values.

Return the modified string.
*/

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }

        return s;
    }
};
```
