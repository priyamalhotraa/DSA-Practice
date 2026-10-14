```cpp
// Problem: Number of Laser Beams in a Bank
// Topic: Arrays, Strings

/*
APPROACH: CH
Calculate the total number of laser beams between security devices
in different rows.

Initialize prev to store the number of devices in the previous
non-empty row and ans to store the total beams.

For each row in the bank:
    Initialize curr to 0.
    Count the number of '1's in the current row.

    If curr is greater than 0:
        Add prev * curr to ans.
        Update prev to curr.

Skip empty rows because they do not contain any devices.

Return ans as the total number of laser beams.
*/

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int ans = 0;

        for(string row : bank) {
            int curr = 0;

            for(char c : row) {
                if(c == '1') {
                    curr++;
                }
            }

            if(curr > 0) {
                ans = ans + prev * curr;
                prev = curr;
            }
        }

        return ans;
    }
};
```
