```cpp
// Problem: Convert Kilometers to Miles
// Topic: Math

/* CH
APPROACH:
Convert the given distance from kilometers to miles.

Use the conversion factor:
    1 kilometer = 0.621371 miles

Multiply the given distance in kilometers by 0.621371.

Return the converted distance in miles.
*/

class Solution {
public:
    double convertKmToMiles(int Km) {
        return Km * 0.621371;
    }
};
```
