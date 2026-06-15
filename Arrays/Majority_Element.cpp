// Problem: Majority Element
// Topic: Arrays, Boyer-Moore Voting Algorithm

/*
APPROACH:
Use Boyer-Moore Voting Algorithm.

- Maintain:
    count = frequency balance
    ele = current candidate for majority element

- Traverse the array:
    - If count becomes 0, choose the current element as the new candidate.
    - If current element equals the candidate, increment count.
    - Otherwise, decrement count.

- Since the majority element appears more than n/2 times,
  its occurrences will outweigh all other elements combined,
  so it remains the final candidate.

Why does this work?
Every non-majority element can cancel out one occurrence of the majority element.
Because the majority element appears more than half the time,
it can never be completely canceled and will survive as the final candidate.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                ele = nums[i];
            }

            if(nums[i] == ele) {
                count++;
            }
            else {
                count--;
            }
        }
        return ele;
    }
};
