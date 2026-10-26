```cpp
// Problem: Find Average of Array Elements
// Topic: Arrays, Math

/*
APPROACH: CH
Calculate the average of all elements in the array.

Initialize sum to 0.

Loop through the array:
    Add each element to sum.

Divide sum by the size of the array to calculate the average.

Return sum as the average.
*/

class Solution {
public:
    double findAverage(const vector<int>& arr) {
        double sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];
        }

        sum = sum / arr.size();

        return sum;
    }
};
```
