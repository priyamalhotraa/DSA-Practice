// Problem: Plus One
// Topic: Array

/*
APPROACH:
The digits array represents a non-negative integer.

Start traversing from the last digit because addition begins
from the least significant digit.

For each digit:
    If the digit is less than 9:
        Increase it by 1.
        Return the array immediately because no carry is needed.

    If the digit is 9:
        Change it to 0 and continue moving left because
        a carry must be propagated.

If all digits were 9:
    Example:
        [9]     -> [1,0]
        [9,9]   -> [1,0,0]
        [9,9,9] -> [1,0,0,0]

Create a new array of size n + 1 initialized with 0.
Place 1 at the first position and return it.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i] = digits[i] + 1;
                return digits;
            }

            if(digits[i] == 9) {
                digits[i] = 0;
            }
        }

        vector<int> result(digits.size() + 1, 0);
        result[0] = 1;
        return result;

        // Alternative:
        // digits.insert(digits.begin(), 1);
        // return digits;
    }
};
