// Problem: Daily Temperatures
// Topic: Stack, Monotonic Stack, Array

/*
APPROACH:

Use a monotonic decreasing stack to keep track of indices whose next warmer temperature has not been found.

- Traverse the array from left to right.
- For each temperature:
    - While the current temperature is greater than
      the temperature at the index on the top of the stack:
        - Pop that index.
        - The current day is the next warmer day.
        - Store the difference in indices.
- Push the current index onto the stack.
- Any indices left in the stack have no warmer day ahead,
  so their answer remains 0.

Why does this work?
The stack always stores indices in decreasing order
of temperatures. Whenever a warmer temperature is found,
it becomes the first warmer day for all smaller temperatures
waiting on the stack.

Example:

temperatures = [73,74,75,71,69,72,76,73]

Process:
- 73 waits for 74  -> 1 day
- 74 waits for 75  -> 1 day
- 75 waits for 76  -> 4 days
- 71 waits for 72  -> 2 days
- 69 waits for 72  -> 1 day
- 72 waits for 76  -> 2 days
- 76 has no warmer day -> 0
- 73 has no warmer day -> 0

Answer:
[1,1,4,2,1,1,0,0]
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;

        // Traverse all days
        for (int i = 0; i < n; i++) {

            // Resolve all previous colder days
            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int index = st.top();
                st.pop();

                ans[index] = i - index;
            }
            // Store current day's index
            st.push(i);
        }
        return ans;
    }
};
