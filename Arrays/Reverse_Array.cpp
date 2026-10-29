```cpp
// Problem: Reverse Array or Vector
// Topic: Arrays

/*
APPROACH: CH
Create an empty vector rev to store the reversed array.

Loop from the last index to the first index:
    Add each element to rev using push_back().

Return rev containing the elements in reverse order.
*/

class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        vector<int> rev;

        for(int i = arr.size() - 1; i >= 0; i--) {
            rev.push_back(arr[i]);
        }

        return rev;
    }
};
```
