// Problem: Length of Last Word
// Topic: Strings

/*
APPROACH:
Start traversing the string from the end.

Ignore trailing spaces automatically by not counting spaces
until a character is found.

Once a character is found:
    Count every non-space character.

When a space is encountered after counting has started:
    Return the count because the last word has ended.

If the loop finishes without finding such a space:
    Return the count (the entire string may be a single word).
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                count++;
            }
            else {
                if(count > 0) {
                    return count;
                }
            }
        }
        return count;
    }
};
