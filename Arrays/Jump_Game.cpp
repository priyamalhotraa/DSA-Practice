// Problem: Jump Game
// Topic: Arrays, Greedy

/*
APPROACH:
We use a greedy approach to track the farthest index we can reach while traversing the array.

- Initialize a variable "maxlength" to store the farthest reachable index so far.
- Iterate through the array from left to right.
- At each index i:
    - If i > maxlength, it means we cannot reach this position → return false.
    - Otherwise, update maxlength as the maximum of:
        current maxlength and (i + nums[i]).
- If we complete the loop, it means every index was reachable up to the last → return true.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxlength = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i > maxlength) {
                return false;
            }
            maxlength = max(maxlength, i + nums[i]);
        }
        return true;
    }
};
