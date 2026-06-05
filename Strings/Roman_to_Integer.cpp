// Problem: Roman to Integer
// Topic: Strings, Hash Map

/*
APPROACH:
Store the value of each Roman numeral in a map.
Traverse the string from left to right.
If the current symbol's value is greater than or equal to the next symbol's value:
    Add its value to the answer.
Otherwise:
    Subtract its value from the answer.

This handles cases like:
IV  = 5 - 1 = 4
IX  = 10 - 1 = 9
*/

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        map<char,int> roman = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for(int i = 0; i < s.size(); i++) {
            if(roman[s[i]] >= roman[s[i+1]]) {
                ans = ans + roman[s[i]];
            }
            else {
                ans = ans - roman[s[i]];
            }
        }

        return ans;
    }
};
