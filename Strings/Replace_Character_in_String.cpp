```cpp
// Problem: Replace Character
// Topic: Strings

/*
APPROACH: CH
Replace all occurrences of character c1 with character c2
in the given string.

Loop through each character of the string:
    If the current character matches c1:
        Replace it with c2.

Return the modified string.
*/

string replaceCharacter(string s, char c1, char c2) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == c1) {
            s[i] = c2;
        }
    }

    return s;
}
```
