// Problem: Remove K Digits
// Topic: Stack, Greedy 

/*
APPROACH:
Use a monotonic increasing stack to build the
smallest possible number after removing exactly
k digits.

- Traverse each digit of the number.
- While:
    - the stack is not empty,
    - k > 0, and
    - the current digit is smaller than the
      top of the stack,
  remove the top digit from the stack.
- Push the current digit into the stack.
- If removals are still left after traversal,
  remove digits from the end (top of the stack),
  since they are the largest remaining digits.
- Build the answer by popping all digits from
  the stack and reversing the result.
- Remove leading zeros.
- If the final string becomes empty, return "0".

Why does this work?
Whenever a smaller digit appears, removing a
larger digit before it makes the overall number
smaller. The stack maintains digits in increasing
order, ensuring every removal gives the smallest
possible number. Any remaining removals are
performed from the end because those digits have
the least impact on making the number smaller.
*/

class Solution {
public:
    string removeKdigits(string num, int k) {

        stack<char> st;

        for (int i = 0; i < num.size(); i++) {

            // Remove larger previous digits
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }

            st.push(num[i]);
        }

        // Remove remaining digits from the end
        while (k > 0) {
            st.pop();
            k--;
        }

        string ans = "";

        // Build the answer
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;
        while (i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        // If all digits were removed
        if (ans.empty())
            return "0";

        return ans;
    }
};
