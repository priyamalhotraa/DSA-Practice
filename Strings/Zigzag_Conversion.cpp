// Problem: Zigzag Conversion
// Topic: Strings

/*
APPROACH:
Handle edge cases first:
    If there is only one row or the number of rows
    is greater than or equal to the string length,
    return the original string.

Store characters of each row in a separate string.

Use a flag to control movement:
    true  -> move downward through the rows
    false -> move diagonally upward

Keep adding characters to their respective rows
until the entire string is processed.

Finally, concatenate all rows to get the
zigzag converted string.
*/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.length()) {
            return s;
        }

        string rows[numRows], converted;
        int n = s.length();
        int i = 0;
        bool goingDown = true;

        while(i < n) {
            if(goingDown) {
                for(int j = 0; j < numRows; j++) {
                    rows[j] += s[i++];

                    if(i >= n) {
                        break;
                    }
                }
            }
            else {
                for(int j = numRows - 2; j > 0; j--) {
                    rows[j] += s[i++];

                    if(i >= n) {
                        break;
                    }
                }
            }

            goingDown = !goingDown;
        }
        for(int j = 0; j < numRows; j++) {
            converted += rows[j];
        }
        return converted;
    }
};
