// Problem: Check Redundant Brackets
// Topic: Stack, String

/*
APPROACH: gfg
Use a stack to store opening brackets and operators.

- Traverse each character in the expression.
- Push '(' and operators ('+', '-', '*', '/')
  onto the stack.
- When a closing bracket ')' is encountered:
    - Check whether there is any operator
      inside the current pair of brackets.
    - Pop elements until '(' is found.
    - If no operator exists, the brackets
      are redundant, so return true.
    - Otherwise, remove the opening bracket
      and continue.

Why does this work?
A valid pair of brackets must contain at
least one operator. If no operator is found,
the brackets are unnecessary (redundant).

Example:
((a+b)) -> Redundant
(a+(b*c)) -> Not redundant
*/

class Solution {
public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                st.push(ch);
            }
            else if(ch == ')') {
                bool operatorFound = false;

                while(!st.empty() && st.top() != '(') {
                    char value = st.top();

                    if(value == '+' || value == '-' || value == '*' || value == '/') {
                        operatorFound = true;
                    }
                    st.pop();
                }

                if(operatorFound == false) {
                    return true;
                }
                else {
                    //bracket is non redundant
                    //remove opening bracket
                    st.pop();
                }
            }
        }
        return false;
    }
};
