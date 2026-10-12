```cpp
// Problem: Longest Palindromic Substrings
// Topic: Strings, Two Pointers

/*
APPROACH: CH
Find the longest substring that reads the same forward
and backward using the expand-around-center technique.

Initialize n as the size of the string.
If the string is empty, return an empty string.

Initialize start as 0 and maxlen as 1.

For each index i:
    Expand around i to check odd-length palindromes.
    Expand around i and i + 1 to check even-length palindromes.

In expandAroundCenter:
    Continue while both pointers are within bounds
    and the characters at left and right are equal.

    Calculate the current palindrome length.
    If the length is greater than maxlen:
        Update maxlen and start.

    Move left backward and right forward.

Return the longest palindromic substring using start and maxlen.
*/

class Solution {
public:
    string longestPalindrome(const string& s) {
        int n = s.size();

        if(n == 0) {
            return "";
        }

        int start = 0;
        int maxlen = 1;

        for(int i = 0; i < n; i++) {
            expandAroundCenter(s, i, i, start, maxlen);
            expandAroundCenter(s, i, i + 1, start, maxlen);
        }

        return s.substr(start, maxlen);
    }

private:
    void expandAroundCenter(const string& s, int left, int right, int& start, int& maxlen) {
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            int len = right - left + 1;

            if(len > maxlen) {
                maxlen = len;
                start = left;
            }

            left--;
            right++;
        }
    }
};
```
