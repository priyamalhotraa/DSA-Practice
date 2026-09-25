```cpp
// Problem: Smallest Digit
// Topic: Math

/* CH
APPROACH:
Find the smallest digit present in the given number.

Initialize the smallest digit as the last digit of the number.

Repeat until the number becomes 0:
    Extract the last digit using % 10.
    Remove the last digit using / 10.
    Compare the extracted digit with the current smallest digit.
    If the extracted digit is smaller, update smallest.

After checking all digits:
    Return the smallest digit.
*/

class Solution {

public:

    int smallestDigit(int num) {
       
        int d = 0;
        int smallest = num%10;
      
        while(num > 0){
            d = num%10;
            num=num/10;
            if(smallest>d)
            smallest=d;
        }
        return smallest;
    }

};
```
