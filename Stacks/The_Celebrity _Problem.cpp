// Problem: The Celebrity Problem
// Topic: Stack, Two Pointers, Matrix

/*
APPROACH:

Use a stack to eliminate non-celebrities one by one.

- Push all people (0 to n-1) into the stack.
- Take two people at a time:
    - If person A knows person B,
      then A cannot be the celebrity,
      so keep B.
    - Otherwise, B cannot be the celebrity,
      so keep A.
- Repeat until only one person remains.
  This person is the potential celebrity.

Verification step:
A valid celebrity must satisfy:
1. They do not know anyone else.
2. Everyone else knows them.

If either condition fails, return -1.

Why does this work?
If A knows B, A cannot be a celebrity.
If A does not know B, B cannot be a celebrity.
Thus, every comparison eliminates exactly
one person, leaving at most one candidate.

Example:

M = {
  {0,1,0},
  {0,0,0},
  {0,1,0}
}

Person 1 is the celebrity because:
- Person 1 knows nobody.
- Everyone knows person 1.

Answer: 1
*/

class Solution {
public:
    int findCelebrity(vector<vector<int>>& M, int n) {

        stack<int> st;

        // Push all people into the stack
        for (int i = 0; i < n; i++) {
            st.push(i);
        }

        // Eliminate non-celebrities
        while (st.size() > 1) {

            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            if (M[a][b] == 1) {
                // A knows B, so A cannot be a celebrity
                st.push(b);
            }
            else {
                // A does not know B, so B cannot be a celebrity
                st.push(a);
            }
        }

        int candidate = st.top();

        // Verify the candidate
        for (int i = 0; i < n; i++) {

            if (i != candidate) {

                // Celebrity should know nobody
                if (M[candidate][i] == 1)
                    return -1;

                // Everyone should know the celebrity
                if (M[i][candidate] == 0)
                    return -1;
            }
        }
        return candidate;
    }
};
