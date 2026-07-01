// Problem: Longest Valid Parentheses
// Topic: Stack, String

/*
APPROACH: 

Use a stack to store indices instead of characters.

- Push -1 initially as a base index.
- Traverse the string:
    - If the current character is '(',
      push its index onto the stack.
    - If the current character is ')',
      pop the top element.
        - If the stack becomes empty,
          push the current index as the
          new base for future calculations.
        - Otherwise, calculate the length
          of the current valid substring as:
              current_index - stack.top()
          and update the maximum length.

Why does this work?
The stack always stores indices of unmatched
opening brackets. The element at the top acts
as the boundary before the current valid
substring starts, allowing us to compute its
length efficiently.

Example:
"(()"   -> 2
")()())" -> 4
"()(())" -> 6
*/

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);   // Base for the first valid substring

        int maxi = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();

                if (st.empty()) {
                    // Current ')' cannot be matched,
                    // so mark it as the new base
                    st.push(i);
                }
                else {
                    // Length of current valid substring
                    maxi = max(maxi, i - st.top());
                }
            }
        }

        return maxi;
    }
};
