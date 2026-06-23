// Problem: Remove Element
// Topic: Arrays, Two Pointers

/*
APPROACH:
We are given an array and a value val.
We need to remove all occurrences of val in-place and return
the number of remaining elements.

Key Idea:
Use a pointer k to track the position where the next valid
(non-val) element should be placed.

Steps:
1. Initialize k = 0.
2. Traverse the array.
3. If the current element is not equal to val:
    - Place it at index k.
    - Increment k.
4. After traversal, k represents the number of elements
   remaining after removal.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
