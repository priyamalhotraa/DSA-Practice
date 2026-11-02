```cpp
// Problem: Insert Delete GetRandom O(1)
// Topic: Arrays, Hashing, Design

/*
APPROACH: LC
Use a vector and an unordered_map to perform insert, remove,
and getRandom operations in average O(1) time.

Vector stores the values.
Unordered_map stores each value along with its index in the vector.

Insert:
    If the value already exists, return false.
    Store its index in the map.
    Add the value to the vector.
    Return true.

Remove:
    If the value does not exist, return false.
    Find its index in the vector.
    Replace it with the last element.
    Update the last element's index in the map.
    Remove the given value from the map.
    Remove the last element from the vector.
    Return true.

GetRandom:
    Generate a random index within the vector.
    Return the value at that index.
*/

class RandomizedSet {

private:
    vector<int> values;
    unordered_map<int, int> valuesIdx;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if(valuesIdx.find(val) != valuesIdx.end()) {
            return false;
        }

        valuesIdx[val] = values.size();
        values.push_back(val);

        return true;
    }

    bool remove(int val) {
        if(valuesIdx.find(val) == valuesIdx.end()) {
            return false;
        }

        int index = valuesIdx[val];
        valuesIdx[values.back()] = index;
        valuesIdx.erase(val);
        values[index] = values.back();
        values.pop_back();

        return true;
    }

    int getRandom() {
        int index = rand() % values.size();
        return values[index];
    }
};
```
