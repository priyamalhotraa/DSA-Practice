```cpp
// Problem: Multiply Array Elements by 10
// Topic: Arrays

/*
APPROACH: CH
Create an empty vector ans to store the results.

Loop through each element of the array:
    Multiply the current element by 10.
    Add the result to ans using push_back().

Return ans containing the multiplied elements.
*/

vector<int> multiplyByTen(const vector<int>& arr) {
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i] * 10);
    }

    return ans;
}
```
