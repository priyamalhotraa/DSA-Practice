// Problem: Product of Array Except Self
// Topic: Arrays, Prefix Product, Suffix Product

/*
APPROACH:
Use Prefix (Left) Product and Suffix (Right) Product arrays.

- Create:
    left[i]  = product of all elements before index i
    right[i] = product of all elements after index i

- Initialize:
    left[0] = 1
    right[n-1] = 1

- Build the left array:
    left[i] = left[i-1] * nums[i-1]

- Build the right array:
    right[i] = right[i+1] * nums[i+1]

- The answer for each index is:
    ans[i] = left[i] * right[i]

Why does this work?
For every index i, we need the product of all elements except nums[i].

- left[i] contains the product of all elements to the left of i.
- right[i] contains the product of all elements to the right of i.

Multiplying them gives the product of all array elements except nums[i],
without using division.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> ans(nums.size());

        left[0] = 1;

        for(int i = 1; i < nums.size(); i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }
        right[nums.size() - 1] = 1;

        for(int i = nums.size() - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }
        for(int i = 0; i < nums.size(); i++) {
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};
