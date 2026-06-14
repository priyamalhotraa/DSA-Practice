// Problem: Gas Station
// Topic: Arrays, Greedy

/*
APPROACH:

We need to find a starting gas station from which we can
complete the entire circular route exactly once.

Key Observations:

1. If the total gas available is less than the total cost,
   completing the circuit is impossible.
   In that case, return -1.

2. While traversing the stations, maintain a running tank value:
      tank += gas[i] - cost[i]

3. If tank becomes negative at station i:
   - We cannot start from the current starting station.
   - Any station between the current start and i also cannot
     be a valid starting point.
   - Therefore, set the next station (i + 1) as the new start.
   - Reset tank to 0.

Why can we skip all stations between start and i?
Because if starting from 'start' cannot even reach i + 1,
then any station in between would have even less fuel available
before reaching i + 1.

After processing all stations:
- If total gas < total cost, return -1.
- Otherwise, the recorded start index is the answer.
*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int difference = 0;
        int totaldiff = 0;
        int start = 0, tank = 0;

        for (int i = 0; i < gas.size(); i++) {
            difference = gas[i] - cost[i];
            totaldiff += difference;
            tank += difference;

            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        if (totaldiff < 0) {
            return -1;
        }
        return start;
    }
};
