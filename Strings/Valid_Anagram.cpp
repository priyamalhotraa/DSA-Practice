```cpp
// Problem: Check Valid Anagram
// Topic: Strings, Hashing

/* CH
APPROACH:
Check whether string t is an anagram of string s.

Create an array to store the frequency of each character.

Traverse string s:
    Increment the frequency of each character.

Traverse string t:
    Decrement the frequency of each character.

Check the frequency array:
    If any frequency is not 0, the strings are not anagrams.
    Otherwise, they are anagrams.

Return true if the strings are anagrams, otherwise return false.
*/

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        int arr[1000] = {0};

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            arr[ch]++;
        }

        for(int i = 0; i < t.length(); i++) {
            char ch = t[i];
            arr[ch]--;
        }

        for(int i = 0; i < 1000; i++) {
            if(arr[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
```
