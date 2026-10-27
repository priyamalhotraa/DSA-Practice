```cpp
// Problem: Search Element in Array
// Topic: Arrays, Linear Search

/*
APPROACH: CH
Search for the target element using linear search.

Loop through each element of the array:
    If the current element equals target:
        Return its index.

If the target is not found, return -1.
*/

int searchElementInArray(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == target) {
            return i;
        }
    }

    return -1;
}
```
