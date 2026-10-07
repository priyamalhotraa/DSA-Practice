```cpp
// Problem: Check Isomorphic Strings
// Topic: Strings, Hashing

/*
APPROACH: CH
Check whether two strings are isomorphic.

First, check if both strings have the same length.

Use two maps:
    mapST stores the mapping from characters of s to t.
    mapTS stores the mapping from characters of t to s.

Traverse both strings together:
    Get the current characters from s and t.
    Check if an existing mapping conflicts with the current characters.
    If a conflict is found, return false.
    Otherwise, store the mappings in both directions.

If no conflict is found:
    Return true because the strings are isomorphic.
*/

class Solution {
public:
    bool isIsomorphic(const string& s, const string& t) {
        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for(int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if(mapST.count(c1) && mapST[c1] != c2) {
                return false;
            }

            if(mapTS.count(c2) && mapTS[c2] != c1) {
                return false;
            }

            mapST[c1] = c2;
            mapTS[c2] = c1;
        }

        return true;
    }
};
```
