// Problem: Minimum Add to Make Parentheses Valid
// Topic: Stack, String

/*
APPROACH:
Use a stack to keep track of unmatched parentheses.

- Traverse each character in the string.
- If the character is '(':
    - Push it onto the stack.
- If the character is ')':
    - If the stack is not empty and the top
      is '(', pop it because a valid pair is formed.
    - Otherwise, push ')' since it is unmatched.
- After processing the entire string,
  every parenthesis left in the stack is unmatched.

Why does this work?
Whenever an opening and closing parenthesis
can form a valid pair, we remove them.
The remaining unmatched parentheses are exactly
the ones that need corresponding parentheses
to make the string valid.

Example:
())   -> Stack contains ')' -> Answer = 1
((    -> Stack contains '((' -> Answer = 2
()))(( -> Stack contains four unmatched
          parentheses -> Answer = 4
*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                st.push(s[i]);
            }
            else {

                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};
