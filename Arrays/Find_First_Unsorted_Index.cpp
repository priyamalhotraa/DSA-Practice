```cpp
// Problem: Find First Unsorted Index
// Topic: Arrays

/* CH
APPROACH:
Find the first index where the array is not sorted.

Traverse the array from the first element.

Compare each element with the next element:
    If the current element is greater than the next element,
    return the current index.

If no such pair is found:
    Return -1 because the array is sorted.
*/

class Solution {
public:
    int findFirstUnsortedIndex(const vector<int>& arr) {
        for(int i = 0; i < arr.size() - 1; i++) {
            if(arr[i] > arr[i + 1]) {
                return i;
            }
        }

        return -1;
    }
};
```
