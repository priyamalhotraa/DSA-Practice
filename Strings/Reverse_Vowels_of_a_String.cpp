```cpp
// Problem: Reverse Vowels of a String
// Topic: Strings, Two Pointers, Hashing

/*
APPROACH: CH
Reverse only the vowels in the given string using two pointers.

Create an unordered_set containing all uppercase and lowercase vowels.

Initialize start at the beginning and last at the end.
Create a copy of the input string named result.

While start is less than last:
    Move start forward until a vowel is found.
    Move last backward until a vowel is found.

    If both pointers find vowels:
        Swap the characters at start and last.
        Increment start and decrement last.

Return result with the vowels reversed.
*/

class Solution {
public:
    string reverseVowels(const string& s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int start = 0;
        int last = s.length() - 1;
        string result = s;

        while(start < last) {
            while(start < last && vowels.find(result[start]) == vowels.end()) {
                start++;
            }

            while(start < last && vowels.find(result[last]) == vowels.end()) {
                last--;
            }

            if(start < last) {
                swap(result[start], result[last]);
                start++;
                last--;
            }
        }

        return result;
    }
};
```
