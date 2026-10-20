```cpp
// Problem: Find Duplicate Number
// Topic: Arrays, Two Pointers, Floyd's Cycle Detection

/*
APPROACH: CH
Use Floyd's Cycle Detection algorithm to find the duplicate number.

Initialize tortoise and hare at nums[0].

Move the pointers:
    Tortoise moves one step at a time.
    Hare moves two steps at a time.

Continue until both pointers meet inside the cycle.

Reset tortoise to nums[0].

Move both pointers one step at a time until they meet again.
The meeting point is the duplicate number.

Return hare.
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while(tortoise != hare);

        tortoise = nums[0];

        while(tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};
```
