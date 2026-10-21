```cpp
// Problem: Count Total Set Bits
// Topic: Bit Manipulation, Math

/*
APPROACH: CH
Count the total number of set bits (1s) in the binary
representations of all numbers from 1 to n.

Initialize count to 0.

Loop through each number from 1 to n:
    Store the current number in digit.

    While digit is greater than 0:
        If digit % 2 is equal to 1:
            Increment count.

        Divide digit by 2 to process the next binary digit.

Return count as the total number of set bits.
*/

class Solution {
public:
    int countTotalSetBits(int n) {
        int count = 0;

        for(int i = 1; i <= n; i++) {
            int digit = i;

            while(digit > 0) {
                if(digit % 2 == 1) {
                    count++;
                }

                digit = digit / 2;
            }
        }

        return count;
    }
};
```
