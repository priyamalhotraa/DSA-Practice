```cpp
// Problem: Create Largest Number
// Topic: Arrays, Sorting

/*
APPROACH:
Arrange the digits in descending order to create the largest number.

Sort the digits using greater<int>() so that the largest
digit comes first.

Initialize num to 0.

Loop through the sorted digits:
    Multiply num by 10 and add the current digit.

Return num as the largest number.
*/

class Solution {
public:
    int createLargestNumber(vector<int>& digits) {
        int num = 0;

        sort(digits.begin(), digits.end(), greater<int>());

        for(int i = 0; i < digits.size(); i++) {
            num = num * 10 + digits[i];
        }

        return num;
    }
};
```
