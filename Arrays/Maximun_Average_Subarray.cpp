// Problem: Maximum Average Subarray I
// Topic: Array, Sliding Window

/* CH
APPROACH:
- Calculate the sum of the first k elements.
- Store its average as the initial maximum average.
- Slide the window by adding the next element and removing the element
  that goes out of the window.
- Calculate the current average and update max_avg if it is greater.
*/

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double max_avg = 0.0, curr_sum = 0.0;

        for (int i = 0; i < k; i++) {
            curr_sum += nums[i];
        }

        max_avg = curr_sum / k;

        for (int i = k; i < nums.size(); i++) {
            curr_sum += nums[i] - nums[i - k];

            double curr_avg = curr_sum / k;

            if (curr_avg > max_avg) {
                max_avg = curr_avg;
            }
        }

        return max_avg;
    }
};
