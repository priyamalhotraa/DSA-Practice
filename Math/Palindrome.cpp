// Problem: Palindrome Number
// Topic: Math

/*
APPROACH:
A palindrome number reads the same forward and backward.

Negative numbers cannot be palindromes because of the '-' sign,
so return false immediately.

Store the original number in a temporary variable.

Reverse the digits of the number:
    Extract the last digit using % 10.
    Add it to the reversed number.
    Remove the last digit using / 10.

After the reversal is complete:
    Compare the reversed number with the original number.

If both are equal:
    Return true.
Otherwise:
    Return false.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int temp = x;
        int d = 0;
        long long int rev = 0;

        while(temp != 0) {
            d = temp % 10;
            temp = temp / 10;
            rev = rev * 10 + d;
        }
        if(x == rev) {
            return true;
        }
        else {
            return false;
        }
    }
};
