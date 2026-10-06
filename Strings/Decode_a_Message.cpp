```cpp
// Problem: Decode a Message
// Topic: String

/* CH
APPROACH:
Decode the given message by converting each character into
its corresponding lowercase alphabet.

For each character in the message:
    Subtract '1' to get its zero-based position.
    Add the position to 'a' to get the corresponding letter.
    Append the decoded character to the result.

Return the decoded message.
*/

class Solution {
public:
    string decodeMessage(string message) {
        string decoded;

        for(size_t i = 0; i < message.size(); i++) {
            decoded = decoded + char('a' + (message[i] - '1'));
        }

        return decoded;
    }
};
```
