```cpp
// Problem: Set Kth Bit
// Topic: Bit Manipulation

/* CH
APPROACH:
Set the kth bit of the given number to 1.

Create a number with only the kth bit set using:
    1 << k

Use the bitwise OR operator:
    n | (1 << k)

The OR operation sets the kth bit to 1 while keeping
all other bits unchanged.

Return the resulting number.
*/

int setKthBit(int n, int k) {
    return n | (1 << k);
}
```

