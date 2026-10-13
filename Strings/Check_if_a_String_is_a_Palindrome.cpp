```cpp
// Problem: Check if a String is a Palindrome
// Topic: Strings, Two Pointers

/*
APPROACH: CH
Check whether the given string reads the same forward
and backward using two pointers.

Initialize i at the beginning and j at the end of the string.

Repeat while i is less than or equal to j:
    If the characters at i and j are different:
        Return false.

    Otherwise:
        Increment i and decrement j.

If all characters match, return true.
*/

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while(i <= j) {
        if(s[i] != s[j]) {
            return false;
        }
        else {
            i++;
            j--;
        }
    }

    return true;
}
```
