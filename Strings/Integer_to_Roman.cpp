// Problem: Integer to Roman
// Topic: Strings, Greedy

/*
APPROACH:
Store all possible Roman numeral values along with their symbols
in descending order.

Traverse the list from largest to smallest:
- While the current value can be subtracted from the number:
    - Append its Roman symbol to the answer.
    - Subtract the value from the number.

This naturally handles special cases like:
900 = CM
400 = CD
90  = XC
40  = XL
9   = IX
4   = IV
Because these combinations are included in the list,
the Roman numeral is built correctly in a greedy manner.
*/

class Solution {
public:
    string intToRoman(int num) {
        string result;
        pair<int, string> values[] = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        for(int i = 0; i < 13; i++) {
            while(num >= values[i].first) {
                result += values[i].second;
                num -= values[i].first;
            }
        }
        return result;
    }
};
