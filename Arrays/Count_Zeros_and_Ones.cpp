```cpp
// Problem: Count Zeros and Ones
// Topic: Arrays

/*
APPROACH: CH
Count the total number of zeros and ones in the given array.

Initialize totalzeros and totalones to 0.

Loop through each element of the array:
    If the element is 0:
        Increment totalzeros.
    Else if the element is 1:
        Increment totalones.

Return both counts as a pair containing zeros and ones.
*/

class Solution {
public:
    std::pair<int, int> countZerosAndOnes(const std::vector<int>& nums) {
        int totalzeros = 0;
        int totalones = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                totalzeros++;
            }
            else if(nums[i] == 1) {
                totalones++;
            }
        }

        return pair<int, int>{totalzeros, totalones};
    }
};
```
