// Problem: Minimum Bracket Reversal
// Topic: Stack

/*
APPROACH:
Use a stack to remove all balanced pairs
of braces. The remaining braces in the
stack are unmatched and must be reversed.

Step 1:
- If the length of the string is odd,
  return -1 because it is impossible to
  balance an odd number of braces.

Step 2:
- Traverse the string.
- Push every opening brace '{' into the stack.
- For every closing brace '}':
    - If the top of the stack is '{',
      remove the matched pair.
    - Otherwise, push the closing brace
      since it is unmatched.

Step 3:
- After removing all balanced pairs,
  count the remaining unmatched opening
  and closing braces.
    - open  = number of '{'
    - close = number of '}'

Step 4:
- Every two unmatched opening braces "{{"
  need one reversal.
- Every two unmatched closing braces "}}"
  also need one reversal.

Formula:
(open + 1) / 2 + (close + 1) / 2

Why does this work?
After removing all valid pairs, only
unmatched braces remain. Reversing pairs
of similar braces converts them into
balanced pairs with the minimum number
of reversals.
*/

class Solution {
public:
    int countReversals(string str) {

        int n = str.length();

        // Odd length strings can never be balanced
        if (n % 2 == 1)
            return -1;

        stack<char> st;

        // Remove all balanced pairs
        for (int i = 0; i < n; i++) {

            char ch = str[i];

            if (ch == '{') {
                st.push(ch);
            }
            else {

                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                    st.push(ch);
            }
        }

        int open = 0;
        int close = 0;

        // Count unmatched opening and closing braces
        while (!st.empty()) {

            if (st.top() == '{')
                open++;
            else
                close++;

            st.pop();
        }

        // Minimum reversals required
        return (open + 1) / 2 + (close + 1) / 2;
    }
};
