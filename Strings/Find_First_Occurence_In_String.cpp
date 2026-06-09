// Problem: Find the Index of the First Occurrence in a String
// Topic: Strings

/*
APPROACH:
Check every possible starting position in the haystack.
For each position:
    Compare characters of the needle one by one.

If any character does not match:
    Stop checking that position and move to the next one.

If all characters of the needle match:
    Return the current starting index.

If no complete match is found after checking all positions:
    Return -1.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;

        if(needle.size() > haystack.size()) {
            return -1;
        }
        for(int i = 0; i <= haystack.size() - needle.size(); i++) {
            for(j = 0; j < needle.size(); j++) {
                if(haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if(j == needle.size()) {
                return i;
            }
        }

        return -1;
    }
};
