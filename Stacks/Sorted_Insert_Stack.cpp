// Problem: Insert an Element into a Sorted Stack
// Topic: Stack, Recursion

/*
APPROACH:
Use recursion to insert the element at its
correct position while maintaining the
sorted order of the stack.

- If the stack is empty, or the current
  element is smaller than or equal to the
  top element, push it directly.
- Otherwise:
    - Store and remove the top element.
    - Recursively insert the new element
      into the remaining stack.
    - Push the stored element back.

Why does this work?
The recursion temporarily removes elements
greater than x, inserts x at its correct
position, and then restores the removed
elements, preserving the sorted order.
*/

class Solution {
public:
    void sortedInsert(stack<int>& st, int x) {

        // Base case
        if(st.empty() || x <= st.top()) {
            st.push(x);
            return;
        }

        // Store and remove the top element
        int topElement = st.top();
        st.pop();

        // Recursively insert x
        sortedInsert(st, x);

        // Restore the removed element
        st.push(topElement);
    }
};
