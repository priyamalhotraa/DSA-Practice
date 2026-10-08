```cpp
// Problem: String Compression
// Topic: Strings

/* CH
APPROACH:
Compress the given string in-place by replacing consecutive
repeated characters with the character followed by its count.

Traverse the string using two pointers:
    Use i to find groups of consecutive characters.
    Count how many times the current character appears.

Store the current character at the index position.

If the count is greater than 1:
    Convert the count into a string.
    Store each digit of the count in the array.

Continue until all characters are processed.

Return the final length of the compressed string.
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;

        while(i < n) {
            char current = chars[i];
            int count = 0;

            while(i < n && chars[i] == current) {
                i++;
                count++;
            }

            chars[index] = current;
            index++;

            if(count > 1) {
                string cnt = to_string(count);
                for(char c : cnt) {
                    chars[index] = c;
                    index++;
                }
            }
        }

        return index;
    }
};
```
