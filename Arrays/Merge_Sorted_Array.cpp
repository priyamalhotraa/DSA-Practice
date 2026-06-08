// Problem: Merge Sorted Array
// Topic: Arrays, Two Pointers

/*
APPROACH:
Since nums1 already has enough space to hold all elements,
we merge the arrays from the end instead of the beginning.

- Use three pointers:
    i = last valid element in nums1 (m - 1)
    j = last element in nums2 (n - 1)
    k = last position in nums1 (m + n - 1)

- Compare nums1[i] and nums2[j]:
    - Place the larger element at nums1[k].
    - Move the corresponding pointer backward.
    - Decrement k.

- Continue until one array is exhausted.

- If elements are still left in nums2,
  copy them into nums1.

Why merge from the end?
If we start from the front, elements in nums1 would be overwritten.
Merging from the back avoids shifting elements and keeps the process O(1) extra space.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums2[j] > nums1[i]) {
                nums1[k] = nums2[j];
                k--;
                j--;
            } 
            else {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
