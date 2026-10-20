```cpp
// Problem: Missing Number
// Topic: Arrays, Bit Manipulation

/*
APPROACH: CH
Find the missing number from the range 0 to n using XOR.

Initialize size as the number of elements in the array.
Set xorsum to size.

Loop through the array:
    XOR xorsum with the current index i.
    XOR xorsum with nums[i].

XOR cancels out equal numbers because a ^ a = 0.
The remaining value is the missing number.

Return xorsum.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int xorsum = size;

        for(int i = 0; i < size; i++) {
            xorsum = xorsum ^ i ^ nums[i];
        }

        return xorsum;
    }
};
```
