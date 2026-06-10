// Problem: Jump Game II
// Topic: Arrays, Greedy

/*
APPROACH:
We use a greedy approach to find the minimum number of jumps needed
to reach the last index.

- "currentEnd" represents the farthest index we can reach using the
  current number of jumps.
- "farthest" stores the farthest index we can reach while exploring
  all positions within the current jump range.
- Traverse the array until the second last element:
    - Update "farthest" as the maximum reachable index from the
      current position.
    - When we reach "currentEnd", it means we have explored all
      positions available with the current jump.
        - Increase the jump count.
        - Update "currentEnd" to "farthest" to start exploring
          the next jump range.
- The total number of times we extend the range is the minimum
  number of jumps required to reach the last index.
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int currentEnd = 0;
        int farthest = 0;
        int jumps = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);

            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
    }
};
