// Problem: Largest Rectangle in Histogram
// Topic: Stack, Monotonic Stack, Array

/*
APPROACH:
Use a monotonic increasing stack to find the
Previous Smaller Element (PSE) and Next Smaller
Element (NSE) for every bar.

Step 1: Find Previous Smaller Element
- Traverse from left to right.
- Maintain a stack of indices whose heights
  are in increasing order.
- Pop elements while the current height is
  smaller than or equal to the stack's top.
- The top of the stack becomes the previous
  smaller element.
- If the stack is empty, store -1.

Step 2: Find Next Smaller Element
- Traverse from right to left.
- Use the same monotonic stack technique.
- If no smaller element exists on the right,
  store n.

Step 3: Calculate Maximum Area
- For every bar:
    width = NSE - PSE - 1
    area = height × width
- Keep track of the maximum area.

Why does this work?
For every bar, the previous and next smaller
elements define the widest range where that
bar can be the shortest bar. Multiplying this
width by the bar's height gives the largest
rectangle using that bar.
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // Previous Smaller Element
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // Next Smaller Element
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int maxArea = 0;

        // Calculate maximum rectangle area
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i] * width);
        }

        return maxArea;
    }
};
