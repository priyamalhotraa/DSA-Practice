// Problem: Trapping Rain Water
// Topic: Arrays, Prefix Maximums

/*
APPROACH:
We are given an array where each element represents height of bars.
We need to find how much rainwater can be trapped.

Key Idea:

At each index i:
Water trapped depends on the minimum of:
    - maximum height to the left of i
    - maximum height to the right of i
Minus the current height.
So:
    water at i = min(left[i], right[i]) - height[i]

Where:
- left[i]  = max height from 0 to i
- right[i] = max height from i to end

Steps:
1. Build left array:
   left[i] stores maximum height from start to i.

2. Build right array:
   right[i] stores maximum height from end to i.

3. Traverse each index and calculate trapped water.

*/

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size());
        vector<int> right(height.size());

        left[0] = height[0];
        right[height.size() - 1] = height[height.size() - 1];

        int water = 0;

        for (int i = 1; i < height.size(); i++) {
            left[i] = max(left[i - 1], height[i]);
        }
        for (int j = height.size() - 2; j >= 0; j--) {
            right[j] = max(right[j + 1], height[j]);
        }
        for (int i = 0; i < height.size(); i++) {
            water = water + min(left[i], right[i]) - height[i];
        }
        return water;
    }
};
