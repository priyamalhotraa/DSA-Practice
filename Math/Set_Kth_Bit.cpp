// Problem: Set Kth Bit
// Topic: Maths, Bit Manipulation

/*
APPROACH: CH
Set the kth bit of a number to 1.

Use the left shift operator (1 << k) to create a mask
with only the kth bit set to 1.

Use the bitwise OR operator (|) with n.
If the kth bit is already 1, it remains unchanged.

Return the updated number.
*/

int setKthBit(int n, int k) {
    return n | (1 << k);
}
