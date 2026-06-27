// Problem: Valid Parentheses
// Topic: Stack, String

/*
APPROACH:
Use a stack to keep track of opening brackets.

- Traverse each character in the string.
- If the character is an opening bracket
  ('(', '[', '{'), push it onto the stack.
- If the character is a closing bracket:
    - Return false if the stack is empty.
    - Check whether the top of the stack
      matches the corresponding opening bracket.
    - If it does not match, return false.
    - Otherwise, pop the matching opening bracket.

Why does this work?
The stack ensures that brackets are closed
in the correct order (Last In, First Out).

At the end, the stack should be empty,
which means every opening bracket has
a matching closing bracket.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                if(st.empty()) {
                    return false;
                }
              
                if(ch == ')' && st.top() != '(') {
                    return false;
                }
                else if(ch == ']' && st.top() != '[') {
                    return false;
                }
                else if(ch == '}' && st.top() != '{') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};
