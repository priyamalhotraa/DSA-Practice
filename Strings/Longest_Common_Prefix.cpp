// Problem: Longest Common Prefix
// Topic: Strings

/*
APPROACH:
Use the first string as a reference.
Traverse each character of the first string.

For every position:
    Check whether all other strings contain the same character
    at that position.

If a string ends or a mismatch is found:
    Return the prefix built so far.

Otherwise:
    Add the current character to the prefix.

Return the final prefix after all characters are processed.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        for(int i = 0; i < strs[0].size(); i++) {
            for(int j = 1; j < strs.size(); j++) {
                if(i >= strs[j].size() || strs[j][i] != strs[0][i]) {
                    return prefix;
                }
            }
            prefix += strs[0][i];
        }
        return prefix;
    }
};
