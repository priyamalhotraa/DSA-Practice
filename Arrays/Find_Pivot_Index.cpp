```cpp
// Problem: Find Pivot Index
// Topic: Arrays

/* CH
APPROACH:
Find the pivot index where the sum of elements on the left
is equal to the sum of elements on the right.

Create two arrays:
    leftsum stores the sum of elements to the left of each index.
    rightsum stores the sum of elements to the right of each index.

Build leftsum:
    Add the previous element to the previous left sum.

Build rightsum:
    Add the next element to the next right sum.

Traverse both arrays:
    If leftsum and rightsum are equal at an index,
    return that index.

If no pivot index is found:
    Return -1.
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> leftsum(nums.size(), 0);
        vector<int> rightsum(nums.size(), 0);

        for(int i = 1; i < nums.size(); i++) {
            leftsum[i] = leftsum[i - 1] + nums[i - 1];
        }

        for(int i = nums.size() - 2; i >= 0; i--) {
            rightsum[i] = rightsum[i + 1] + nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++) {
            if(leftsum[i] == rightsum[i]) {
                return i;
            }
        }

        return -1;
    }
};
```
